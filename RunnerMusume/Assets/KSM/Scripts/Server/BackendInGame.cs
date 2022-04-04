using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;
using Protocol;

public partial class BackendMatchManager : MonoBehaviour
{
    private bool isSetHost = false;     //호스트 세션 결정했는지 여부
    //게임 로그
    private string FAIL_ACCESS_INGAME = "인게임 접속 실패 : {0} - {1}";
    private string SUCCESS_ACCESS_INGAME = "유저 인게임 접속 성공 : {0}";
    private string NUM_INGAME_SESSION = "인게임 내 세션 갯수 : {0}";

    #region 인게임 룸 접속
    private void AccessInGame(string roomToken)
    {
        Backend.Match.JoinGameRoom(roomToken);
    }
    #endregion

    #region 세션 리스트 갱신
    //현재 룸에 접속한 세션들의 정보
    //최초 룸에 접속했을 때 1회 수신됨
    //재접속 했을 때도 1회 수신됨
    private void ProcessMatchInGameSessionList(MatchInGameSessionListEventArgs args)
    {
        sessionIdList = new List<SessionId>();
        gameRecords = new Dictionary<SessionId, MatchUserGameRecord>();

        foreach(var record in args.GameRecords)
        {
            sessionIdList.Add(record.m_sessionId);
            gameRecords.Add(record.m_sessionId, record);
        }

        sessionIdList.Sort();
    }

    //클라이언트 들의 게임 룸 접속에 대한 리턴값
    //클라이언트가 게임 룸에 접속할 때마다 호출됨
    //재접속 했을 때는 수신되지 않음
    private void ProcessMatchInGameAccess(MatchInGameSessionEventArgs args)
    {
        print("ProcessMatchInGameAccess - " + string.Format(SUCCESS_ACCESS_INGAME, args.ErrInfo));

        if(args.ErrInfo != ErrorCode.Success)
        {
            //게임 룸 접속 실패
            Debug.LogError("ProcessMatchInGameAccess - " + string.Format(FAIL_ACCESS_INGAME, args.ErrInfo, args.Reason));
            LeaveInGameRoom();
            return;
        }

        //게임 룸 접속 성공
        //인자값에 방금 접속한 클라이언트(세션)의 세션 ID와 매칭 기록이 적혀 있음
        //세션 정보는 누적되어 들어있기 때문에 이미 저장한 세션이면 건너뛴다.
        var record = args.GameRecord;
        print("ProcessMatchInGameAccess - " + string.Format(string.Format("인게임 접속 유저 정보 [{0}] : {1}", args.GameRecord.m_sessionId, args.GameRecord.m_nickname)));

        if (!sessionIdList.Contains(args.GameRecord.m_sessionId))
        {
            //세션 정보, 게임 기록 등을 저장
            sessionIdList.Add(record.m_sessionId);
            gameRecords.Add(record.m_sessionId, record);

            print("ProcessMatchInGameAccess - " + string.Format(NUM_INGAME_SESSION, sessionIdList.Count));
        }
    }
    #endregion

    #region 인게임 서버 접속 종료
    public void LeaveInGameRoom()
    {
        isConnectInGameServer = false;
        Backend.Match.LeaveGameServer();
    }
    #endregion

    #region 게임 설치
    public void GameSetup()
    {
        print("GameSetup - 게임 시작 메시지 수신. 게임 설정 시작");

        isHost = false;
        isSetHost = false;

        StartCoroutine(GameReady());
    }
    #endregion

    #region 게임 준비
    public IEnumerator GameReady()
    {
        if (!isSetHost)
            isSetHost = SetHostSession();

        print("GameReady - 호스트 설정 완료");

        yield return new WaitForSeconds(1f);

        if (isSandBoxGame && IsHost())
            SetAIPlayer();

        if (IsHost()) //호스트만 호출
            Invoke("ReadyToLoadRoom", 0.5f);
    }
    #endregion

    #region 샌드박스 모드 설정
    private void SetAIPlayer()
    {
        int aiCount = 4 - sessionIdList.Count;
        print(sessionIdList.Count);
        print("SetAIPlayer - AI Player 설정 : " + aiCount);

        int index = 0;
        for(int i = 0; i < aiCount; i++)
        {
            MatchUserGameRecord aiRecord = new MatchUserGameRecord();
            aiRecord.m_nickname = "AIPlayer " + index;
            aiRecord.m_sessionId = (SessionId)index;

            gameRecords.Add((SessionId)index, aiRecord);
            sessionIdList.Add((SessionId)index);
            index += 1;
        }
    }
    #endregion

    private void ReadyToLoadRoom()
    {
        if (BackendMatchManager.GetInstance().isSandBoxGame)
        {
            print("샌드박스 모드 활성화. AI 정보 수신");

            //샌드박스 모드면 ai정보 송신
            foreach(var tmp in gameRecords)
            {
                if ((int)tmp.Key > (int)SessionId.Reserve) continue;
                print("ai정보 송신 : " + (int)tmp.Key + ", value : " + tmp.Value);
                SendDataToInGame(new AIPlayerInfo(tmp.Value));
            }
        }

        print("1초 후 룸 씬 전환 메시지 송신");
        Invoke("SendChangeRoomScene", 1f);
    }

    #region 룸 씬 전환 메시지 패킷에 전송
    private void SendChangeRoomScene()
    {
        print("룸 씬 전환 메시지 송신!");
        SendDataToInGame(new LoadRoomSceneMessage());
    }
    #endregion


    #region 서버로 데이터 패킷 전송
    //서버에서는 이 패킷을 받아 모든 클라이언트(패킷 보낸 클라이언트 포함)로 브로드캐스팅 해줌
    public void SendDataToInGame<T>(T msg)
    {
        Backend.Match.SendDataToInGameRoom(DataParser.DataToJsonData<T>(msg));
    }
    #endregion

    #region 게임 설정 사전
    public bool PrevGameMessage(byte[] BinaryUserData)
    {
        Message msg = DataParser.ReadJsonData<Message>(BinaryUserData);
        if (msg == null) return false;

        //게임 설정 사전 작업 패킷 검사
        switch (msg.type)
        {
            case Type.AIPlayerInfo:
                AIPlayerInfo aiPlayerInfo = DataParser.ReadJsonData<AIPlayerInfo>(BinaryUserData);
                ProcessAIData(aiPlayerInfo);
                return true;

            case Type.LoadRoomScene:
                GameManager.GetInstance().ChangeState(GameManager.GameState.Ready); //룸 대기실로 이동
                if (IsHost())
                {
                    print("룸 이지롱");
                }
                return true;
        }
        return false;
    }
    #endregion
    
    public void ProcessAIData(AIPlayerInfo aIPlayerInfo)
    {
        MatchInGameSessionEventArgs args = new MatchInGameSessionEventArgs();
        args.GameRecord = aIPlayerInfo.GetMatchRecord();

        ProcessMatchInGameAccess(args); //굳이 해야하나 싶음
    }

    //호스트에서 보낸 세션리스트로 갱신
    public void SetPlayerSessionList(List<SessionId> sessions)
    {
        sessionIdList = sessions;
    }

    //세션 아이디 확인
    public bool IsMySessionId(SessionId session)
    {
        return Backend.Match.GetMySessionId() == session;
    }

    public string GetNicknameBySessionId(SessionId session)
    {
        return gameRecords[session].m_nickname;
    }
}
