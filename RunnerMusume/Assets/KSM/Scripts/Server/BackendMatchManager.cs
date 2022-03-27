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
        public string title;                //��Ī ��
        public string inDate;               //��Ī inDate (UUID)
        public MatchType matchType;         //��ġ Ÿ�� (1:1 / ������ / ����)
        public MatchModeType matchModeType; //��ġ ��� Ÿ�� (���� / ����Ʈ / MMR)
        public string headCount;            //��Ī �ο�
        public bool isSandBoxEnable;        //����ڽ� ��� (AI ��Ī)
    }

    public List<MatchInfo> matchInfos = new List<MatchInfo>(); //�ֿܼ��� ������ ��Ī ���̺� ����Ʈ
    public List<SessionId> sessionIdList; //��ġ�� �������� �������� ���� ���
    public Dictionary<SessionId, MatchUserGameRecord> gameRecords; //��ġ�� �������� �������� ��Ī ���

    private string inGameRoomToken = string.Empty; //�ΰ��� ��ū (����)

    public bool isConnectMatchServer = false;
    public bool isConnectInGameServer = false;
    public bool isJoinGameRoom = false;
    public bool isSandBoxGame = false;

    public SessionId hostSession; //ȣ��Ʈ ����
    private bool isHost = false; //ȣ��Ʈ ���� (�������� ������ Supergamer ������ ������

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
        //��Ī ���̺� ���� �ʱ�ȭ
        matchInfos.Clear();

        Backend.Match.GetMatchList(callback =>
        {
            //��û �����ϴ� ��� ���û
            if (!callback.IsSuccess())
            {
                print("BackendMatchManager.cs - GetMatchList - ��Īī�� ����Ʈ �ҷ����� ����\n" + callback);
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

            print("BackendMatchManager.cs - GetMatchList - ���̺���Ʈ �ҷ����� ���� : " + matchInfos.Count);
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
        //ȣ��Ʈ ���� ���ϱ�
        //�� Ŭ���̾�Ʈ�� ��� ���� (ȣ��Ʈ ���� ���ϴ� ������ ��� �����Ƿ� ������ Ŭ���̾�Ʈ�� ��� ������ ���������� ������� ����)
        print("SetHostSession - ȣ��Ʈ ���� ���� ����");
        //ȣ��Ʈ ���� ���� (�� Ŭ���̾�Ʈ���� ���� ������ �ٸ� �� �ֱ� ������ ����)
        sessionIdList.Sort();
        isHost = false;

        //���� ȣ��Ʈ �������� Ȯ��
        foreach(var record in gameRecords)
        {
            if (record.Value.m_isSuperGamer)
            {
                if (record.Value.m_sessionId.Equals(Backend.Match.GetMySessionId()))
                    isHost = true;
                hostSession = record.Value.m_sessionId; //�ش� ������ ȣ��Ʈ�� ����
                break;
            }
        }

        print("SetHostSession - ȣ��Ʈ ���� : " + isHost);

        //ȣ��Ʈ �����̸� ���ÿ��� ó���ϴ� ��Ŷ�� �����Ƿ� ���� ť�� �������ش�
        //if (isHost)
        //    localQueue = new Queue<>();
        //else
        //    localQueue = null;

        //ȣ��Ʈ �������� ������ ��ġ������ ���� ����
        LeaveMatchServer();
        return true;
    }

    //ȣ��Ʈ���� Ȯ��
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
            print("��Ī ���� ���� : " + args.ErrInfo);
            ProcessAccessMatchMakingServer(args.ErrInfo);
        };

        Backend.Match.OnMatchMakingResponse += (args) =>
        {
            print("��Ī ��û : " + args.ErrInfo + " : " + args.Reason);
            ProcessMatchMakingResponse(args);
        };

        Backend.Match.OnLeaveMatchMakingServer += (args) =>
        {
            print("��Ī ���� ���� : " + args.ErrInfo);
            isConnectMatchServer = false;

            //�ٽ� ������ ?? ���ؾߵ���
            JoinMatchServer();
        };

        Backend.Match.OnMatchMakingRoomCreate += (args) =>
        {
            print("��� �� ���� : " + args.ErrInfo);

            LobbyUI.GetInstance().RoomResult(args.ErrInfo.Equals(ErrorCode.Success) == true);
        };

        // ���濡 ���� ���� �޽���
        Backend.Match.OnMatchMakingRoomLeave += (args) =>
        {
            Debug.Log(string.Format("OnMatchMakingRoomLeave : {0} : {1}", args.ErrInfo, args.Reason));
            if (args.ErrInfo.Equals(ErrorCode.Success) || args.ErrInfo.Equals(ErrorCode.Match_Making_KickedByOwner))
            {
                Debug.Log("user leave in room : " + args.UserInfo.m_nickName);
                
            }
        };

        // ������ ���濡�� ���� ���� �ı� �� �޽���
        Backend.Match.OnMatchMakingRoomDestory += (args) =>
        {
            Debug.Log(string.Format("OnMatchMakingRoomDestory : {0} : {1}", args.ErrInfo, args.Reason));
        };
    }

    private void InGameHandler()
    {
        Backend.Match.OnSessionJoinInServer += (args) =>
        {
            print("�ΰ��� ���� ���� : " + args.ErrInfo);

            if (isJoinGameRoom) return;
            if(inGameRoomToken == string.Empty)
            {
                Debug.LogError("�ΰ��� ���� ���� ���������� �� ��ū�� �������� �ʽ��ϴ�.");
                return;
            }

            print("�ΰ��� ���� ���� ����!");
            isJoinGameRoom = true;
            AccessInGame(inGameRoomToken);
        };

        Backend.Match.OnSessionListInServer += (args) =>
        {
            //���� ����Ʈ ȣ�� �� ���� ä���� ȣ���
            //���� ���� ����(��)�� �������� �÷��̾�� �� ������ ���� �� �濡 ���� �ִ� �÷��̾��� ���� ������ �������
            //������ �ʰ� ���� �÷��̾���� ������ OnMatchInGameAccess���� ���ŵ�
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
            //���� ���� �� ���ӽ���
            print("���ӽ���");
            GameSetup();
        };

        Backend.Match.OnMatchRelay += (args) =>
        {
            //�� Ŭ���̾�Ʈ���� ������ ���� �ְ�޴� ��Ŷ��
            //������ �ܼ� ��ε�ĳ���ø� ���� (�������� ��� ���굵 �������� ����)

            //���� ���� ����
            if (PrevGameMessage(args.BinaryUserData))
            {
                //���� ���� ������ �����Ͽ����� �ٷ� ����
                return;
            }

            if (BackendRoomManager.GetInstance() == null) return;

            BackendRoomManager.GetInstance().OnRecieve(args);
        };
    }
}
