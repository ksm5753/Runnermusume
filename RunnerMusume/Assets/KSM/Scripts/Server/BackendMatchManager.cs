using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Battlehub.Dispatcher;
using BackEnd;
using BackEnd.Tcp;
using LitJson;
using System.Linq;

public partial class BackendMatchManager : MonoBehaviour
{
    private static BackendMatchManager instance;

    public class MatchInfo
    {
        public string title;                //매칭 명
        public string inDate;               //매칭 inDate (UUID)
        public MatchType matchType;         //매치 타입 (1:1 / 개인전 / 팀전)
        public MatchModeType matchModeType; //매치 모드 타입 (랜덤 / 포인트 / MMR)
        public string headCount;            //매칭 인원
        public bool isSandBoxEnable;        //샌드박스 모드 (AI 매칭)
    }

    public List<MatchInfo> matchInfos = new List<MatchInfo>(); //콘솔에서 생성한 매칭 테이블 리스트
    public List<SessionId> sessionIdList; //매치에 참가중인 유저들의 세션 목록
    public Dictionary<SessionId, MatchUserGameRecord> gameRecords; //매치에 참가중인 유저들의 매칭 기록

    private string inGameRoomToken = string.Empty; //인게임 토큰 (접속)

    public bool isConnectMatchServer = false;
    public bool isConnectInGameServer = false;
    public bool isJoinGameRoom = false;
    public bool isSandBoxGame = false;

    public SessionId hostSession; //호스트 세션
    private bool isHost = false; //호스트 여부 (서버에서 설정한 Supergamer 정보를 가져옴

    public static BackendMatchManager GetInstance()
    {
        if (instance == null)
            return null;
        return instance;
    }
    void Awake()
    {
        if (!instance)
            instance = this;
    }
    void Start()
    {
        MatchMakingHandler();
        InGameHandler();
    }

    void Update()
    {
        if (isConnectMatchServer || isConnectInGameServer)
            Backend.Match.Poll();
    }

    void OnApplicationQuit()
    {
        if (isConnectMatchServer)
            LeaveMatchServer();
    }

    public void GetMatchList(Action<bool, string> func)
    {
        //매칭 테이블 정보 초기화
        matchInfos.Clear();

        Backend.Match.GetMatchList(callback =>
        {
            //요청 실패하는 경우 재요청
            if (!callback.IsSuccess())
            {
                print("BackendMatchManager.cs - GetMatchList - 매칭카드 리스트 불러오기 실패\n" + callback);
                Dispatcher.Current.BeginInvoke(() =>
                {
                    GetMatchList(func);
                });
                return;
            }

            foreach (JsonData row in callback.Rows())
            {
                MatchInfo matchInfo = new MatchInfo();
                matchInfo.title = row["matchTitle"]["S"].ToString();
                matchInfo.inDate = row["inDate"]["S"].ToString();
                matchInfo.headCount = row["matchHeadCount"]["N"].ToString();
                matchInfo.isSandBoxEnable = row["enable_sandbox"]["BOOL"].ToString().Equals("True") ? true : false;

                foreach (MatchType type in Enum.GetValues(typeof(MatchType)))
                {
                    if (type.ToString().ToLower().Equals(row["matchType"]["S"].ToString().ToLower()))
                        matchInfo.matchType = type;
                }

                foreach (MatchModeType type in Enum.GetValues(typeof(MatchModeType)))
                {
                    if (type.ToString().ToLower().Equals(row["matchModeType"]["S"].ToString().ToLower()))
                        matchInfo.matchModeType = type;
                }

                matchInfos.Add(matchInfo);
            }

            print("BackendMatchManager.cs - GetMatchList - 테이블리스트 불러오기 성공 : " + matchInfos.Count);
            func(true, string.Empty);
        });
    }

    public MatchInfo GetMatchInfo(string indate)
    {
        var result = matchInfos.FirstOrDefault(x => x.inDate == indate);
        if (result.Equals(default(MatchInfo)) == true)
        {
            return null;
        }
        return result;
    }

    private bool SetHostSession()
    {
        //호스트 세션 정하기
        //각 클라이언트가 모두 수행 (호스트 세션 정하는 로직은 모두 같으므로 각각의 클라이언트가 모두 로직을 수행하지만 결과값은 동일)
        print("SetHostSession - 호스트 세션 설정 진입");
        //호스트 세션 정렬 (각 클라이언트마다 입장 순서가 다를 수 있기 때문에 정렬)
        sessionIdList.Sort();
        isHost = false;

        //내가 호스트 세션인지 확인
        foreach(var record in gameRecords)
        {
            if (record.Value.m_isSuperGamer)
            {
                if (record.Value.m_sessionId.Equals(Backend.Match.GetMySessionId()))
                    isHost = true;
                hostSession = record.Value.m_sessionId; //해당 유저를 호스트로 설정
                break;
            }
        }

        print("SetHostSession - 호스트 여부 : " + isHost);

        //호스트 세션이면 로컬에서 처리하는 패킷이 있으므로 로컬 큐를 생성해준다
        //if (isHost)
        //    localQueue = new Queue<>();
        //else
        //    localQueue = null;

        //호스트 설정까지 끝나면 매치서버와 접속 끊음
        LeaveMatchServer();
        return true;
    }

    //호스트인지 확인
    public bool IsHost()
    {
        return isHost;
    }

    public bool IsSessionListNull()
    {
        return sessionIdList == null || sessionIdList.Count == 0;
    }

    private void MatchMakingHandler()
    {
        Backend.Match.OnJoinMatchMakingServer += (args) =>
        {
            print("매칭 서버 접속 : " + args.ErrInfo);
            ProcessAccessMatchMakingServer(args.ErrInfo);
        };

        Backend.Match.OnMatchMakingResponse += (args) =>
        {
            print("매칭 신청 : " + args.ErrInfo + " : " + args.Reason);
            ProcessMatchMakingResponse(args);
        };

        Backend.Match.OnLeaveMatchMakingServer += (args) =>
        {
            print("매칭 서버 종료 : " + args.ErrInfo);
            isConnectMatchServer = false;

            //다시 재접속 ?? 왜해야되지
            JoinMatchServer();
        };

        Backend.Match.OnMatchMakingRoomCreate += (args) =>
        {
            print("대기 방 생성 : " + args.ErrInfo);

            LobbyUI.GetInstance().RoomResult(args.ErrInfo.Equals(ErrorCode.Success) == true);
        };

        // 대기방에 유저 퇴장 메시지
        Backend.Match.OnMatchMakingRoomLeave += (args) =>
        {
            Debug.Log(string.Format("OnMatchMakingRoomLeave : {0} : {1}", args.ErrInfo, args.Reason));
            if (args.ErrInfo.Equals(ErrorCode.Success) || args.ErrInfo.Equals(ErrorCode.Match_Making_KickedByOwner))
            {
                Debug.Log("user leave in room : " + args.UserInfo.m_nickName);
                
            }
        };

        // 방장이 대기방에서 나가 대기방 파기 된 메시지
        Backend.Match.OnMatchMakingRoomDestory += (args) =>
        {
            Debug.Log(string.Format("OnMatchMakingRoomDestory : {0} : {1}", args.ErrInfo, args.Reason));
        };
    }

    private void InGameHandler()
    {
        Backend.Match.OnSessionJoinInServer += (args) =>
        {
            print("인게임 서버 접속 : " + args.ErrInfo);

            if (isJoinGameRoom) return;
            if(inGameRoomToken == string.Empty)
            {
                Debug.LogError("인게임 서버 접속 성공했으나 룸 토큰이 존재하지 않습니다.");
                return;
            }

            print("인게임 서버 접속 성공!");
            isJoinGameRoom = true;
            AccessInGame(inGameRoomToken);
        };

        Backend.Match.OnSessionListInServer += (args) =>
        {
            //세션 리스트 호출 후 조인 채널이 호출됨
            //현재 같은 게임(방)에 참가중인 플레이어들 중 나보다 먼저 이 방에 들어와 있는 플레이어들과 나의 정보과 들어있음
            //나보다 늦게 들어온 플레이어들의 정보는 OnMatchInGameAccess에서 수신됨
            print("OnSessionListInServer : " + args.ErrInfo);

            ProcessMatchInGameSessionList(args);
        };

        Backend.Match.OnMatchInGameAccess += (args) =>
        {
            print("OnMatchInGameAccess : " + args.ErrInfo);

            ProcessMatchInGameAccess(args);
        };

        Backend.Match.OnMatchInGameStart += () =>
        {
            //세션 정리 후 게임시작
            print("게임시작");
            GameSetup();
        };

        Backend.Match.OnMatchRelay += (args) =>
        {
            //각 클라이언트들이 서버를 통해 주고받는 패킷들
            //서버는 단순 브로드캐스팅만 지원 (서버에서 어떠한 연산도 수행하지 않음)

            //게임 사전 설정
            if (PrevGameMessage(args.BinaryUserData))
            {
                //게임 사전 설정을 진행하였으면 바로 리턴
                return;
            }

            if (BackendRoomManager.GetInstance() == null) return;

            BackendRoomManager.GetInstance().OnRecieve(args);
        };
    }
}
