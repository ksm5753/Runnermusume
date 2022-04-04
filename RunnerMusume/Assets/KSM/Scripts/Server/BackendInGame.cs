using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;
using Protocol;

public partial class BackendMatchManager : MonoBehaviour
{
    private bool isSetHost = false;     //ȣ��Ʈ ���� �����ߴ��� ����
    //���� �α�
    private string FAIL_ACCESS_INGAME = "�ΰ��� ���� ���� : {0} - {1}";
    private string SUCCESS_ACCESS_INGAME = "���� �ΰ��� ���� ���� : {0}";
    private string NUM_INGAME_SESSION = "�ΰ��� �� ���� ���� : {0}";

    #region �ΰ��� �� ����
    private void AccessInGame(string roomToken)
    {
        Backend.Match.JoinGameRoom(roomToken);
    }
    #endregion

    #region ���� ����Ʈ ����
    //���� �뿡 ������ ���ǵ��� ����
    //���� �뿡 �������� �� 1ȸ ���ŵ�
    //������ ���� ���� 1ȸ ���ŵ�
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

    //Ŭ���̾�Ʈ ���� ���� �� ���ӿ� ���� ���ϰ�
    //Ŭ���̾�Ʈ�� ���� �뿡 ������ ������ ȣ���
    //������ ���� ���� ���ŵ��� ����
    private void ProcessMatchInGameAccess(MatchInGameSessionEventArgs args)
    {
        print("ProcessMatchInGameAccess - " + string.Format(SUCCESS_ACCESS_INGAME, args.ErrInfo));

        if(args.ErrInfo != ErrorCode.Success)
        {
            //���� �� ���� ����
            Debug.LogError("ProcessMatchInGameAccess - " + string.Format(FAIL_ACCESS_INGAME, args.ErrInfo, args.Reason));
            LeaveInGameRoom();
            return;
        }

        //���� �� ���� ����
        //���ڰ��� ��� ������ Ŭ���̾�Ʈ(����)�� ���� ID�� ��Ī ����� ���� ����
        //���� ������ �����Ǿ� ����ֱ� ������ �̹� ������ �����̸� �ǳʶڴ�.
        var record = args.GameRecord;
        print("ProcessMatchInGameAccess - " + string.Format(string.Format("�ΰ��� ���� ���� ���� [{0}] : {1}", args.GameRecord.m_sessionId, args.GameRecord.m_nickname)));

        if (!sessionIdList.Contains(args.GameRecord.m_sessionId))
        {
            //���� ����, ���� ��� ���� ����
            sessionIdList.Add(record.m_sessionId);
            gameRecords.Add(record.m_sessionId, record);

            print("ProcessMatchInGameAccess - " + string.Format(NUM_INGAME_SESSION, sessionIdList.Count));
        }
    }
    #endregion

    #region �ΰ��� ���� ���� ����
    public void LeaveInGameRoom()
    {
        isConnectInGameServer = false;
        Backend.Match.LeaveGameServer();
    }
    #endregion

    #region ���� ��ġ
    public void GameSetup()
    {
        print("GameSetup - ���� ���� �޽��� ����. ���� ���� ����");

        isHost = false;
        isSetHost = false;

        StartCoroutine(GameReady());
    }
    #endregion

    #region ���� �غ�
    public IEnumerator GameReady()
    {
        if (!isSetHost)
            isSetHost = SetHostSession();

        print("GameReady - ȣ��Ʈ ���� �Ϸ�");

        yield return new WaitForSeconds(1f);

        if (isSandBoxGame && IsHost())
            SetAIPlayer();

        if (IsHost()) //ȣ��Ʈ�� ȣ��
            Invoke("ReadyToLoadRoom", 0.5f);
    }
    #endregion

    #region ����ڽ� ��� ����
    private void SetAIPlayer()
    {
        int aiCount = 4 - sessionIdList.Count;
        print(sessionIdList.Count);
        print("SetAIPlayer - AI Player ���� : " + aiCount);

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
            print("����ڽ� ��� Ȱ��ȭ. AI ���� ����");

            //����ڽ� ���� ai���� �۽�
            foreach(var tmp in gameRecords)
            {
                if ((int)tmp.Key > (int)SessionId.Reserve) continue;
                print("ai���� �۽� : " + (int)tmp.Key + ", value : " + tmp.Value);
                SendDataToInGame(new AIPlayerInfo(tmp.Value));
            }
        }

        print("1�� �� �� �� ��ȯ �޽��� �۽�");
        Invoke("SendChangeRoomScene", 1f);
    }

    #region �� �� ��ȯ �޽��� ��Ŷ�� ����
    private void SendChangeRoomScene()
    {
        print("�� �� ��ȯ �޽��� �۽�!");
        SendDataToInGame(new LoadRoomSceneMessage());
    }
    #endregion


    #region ������ ������ ��Ŷ ����
    //���������� �� ��Ŷ�� �޾� ��� Ŭ���̾�Ʈ(��Ŷ ���� Ŭ���̾�Ʈ ����)�� ��ε�ĳ���� ����
    public void SendDataToInGame<T>(T msg)
    {
        Backend.Match.SendDataToInGameRoom(DataParser.DataToJsonData<T>(msg));
    }
    #endregion

    #region ���� ���� ����
    public bool PrevGameMessage(byte[] BinaryUserData)
    {
        Message msg = DataParser.ReadJsonData<Message>(BinaryUserData);
        if (msg == null) return false;

        //���� ���� ���� �۾� ��Ŷ �˻�
        switch (msg.type)
        {
            case Type.AIPlayerInfo:
                AIPlayerInfo aiPlayerInfo = DataParser.ReadJsonData<AIPlayerInfo>(BinaryUserData);
                ProcessAIData(aiPlayerInfo);
                return true;

            case Type.LoadRoomScene:
                GameManager.GetInstance().ChangeState(GameManager.GameState.Ready); //�� ���Ƿ� �̵�
                if (IsHost())
                {
                    print("�� ������");
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

        ProcessMatchInGameAccess(args); //���� �ؾ��ϳ� ����
    }

    //ȣ��Ʈ���� ���� ���Ǹ���Ʈ�� ����
    public void SetPlayerSessionList(List<SessionId> sessions)
    {
        sessionIdList = sessions;
    }

    //���� ���̵� Ȯ��
    public bool IsMySessionId(SessionId session)
    {
        return Backend.Match.GetMySessionId() == session;
    }

    public string GetNicknameBySessionId(SessionId session)
    {
        return gameRecords[session].m_nickname;
    }
}
