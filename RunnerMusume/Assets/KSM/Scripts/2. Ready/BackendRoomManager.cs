using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using Protocol;
using BackEnd.Tcp;

public class BackendRoomManager : MonoBehaviour
{
    private static BackendRoomManager instance;

    private SessionId myPlayerIndex = SessionId.None;

    #region Player
    public GameObject playerPool;           //플레이어 넣을곳
    public GameObject playerPrefab;         //플레이어 프리팹
    private const int MAX_PLAYER = 8;
    #endregion

    private Dictionary<SessionId, RoomPlayer> players;
    private Stack<SessionId> gameRecord;

    void Awake()
    {
        if (!instance) instance = this;
    }

    public static BackendRoomManager GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Start()
    {
        if (BackendMatchManager.GetInstance() == null) return;

        InitializeGame();
    }

    /*
     * 플레이어 설정
     * 게임 상태 함수 설정
     */
    public bool InitializeGame()
    {
        if (!playerPool)
        {
            Debug.LogError("Player Pool Not Exist!");
            return false;
        }
        print("게임 초기화 진행");

        myPlayerIndex = SessionId.None;

        GameReady();
        return true;
    }

    public void GameReady()
    {
        if (BackendMatchManager.GetInstance() == null)
            return;

        if (BackendMatchManager.GetInstance().IsHost())
        {
            print("플레이어 세션 정보 확인");

            if (BackendMatchManager.GetInstance().IsSessionListNull())
            {
                Debug.LogError("Player Index Not Exist!");
            }
        }

        SetPlayerInfo();
    }

    public void SetPlayerInfo()
    {
        if(BackendMatchManager.GetInstance().sessionIdList == null)
        {
            //현재 세션 ID리스트가 존재하지 않으면 0.5초 후 다시 실행
            Invoke("SetPlayerInfo", 0.5f);
            return;
        }

        var gamers = BackendMatchManager.GetInstance().sessionIdList;
        print(gamers.Count);
        
        if(gamers.Count <= 0)
        {
            Debug.LogError("No Player Exist!");
            return;
        }
        if(gamers.Count > MAX_PLAYER)
        {
            Debug.LogError("Player Pool Exceed!");
            return;
        }

        players = new Dictionary<SessionId, RoomPlayer>();
        BackendMatchManager.GetInstance().SetPlayerSessionList(gamers);

        int index = 0;
        foreach(var sessionId in gamers)
        {
            GameObject player = Instantiate(playerPrefab, new Vector3(0, 0, 0), Quaternion.identity, playerPool.transform);
            players.Add(sessionId, player.GetComponent<RoomPlayer>());

            

            if (BackendMatchManager.GetInstance().IsMySessionId(sessionId))
            {
                myPlayerIndex = sessionId;
                print("내꼬");
                players[myPlayerIndex].Initialize(true, myPlayerIndex, BackendMatchManager.GetInstance().GetNicknameBySessionId(sessionId));
            }
            else
            {
                print("다른놈꺼");
                players[sessionId].Initialize(false, sessionId, BackendMatchManager.GetInstance().GetNicknameBySessionId(sessionId));
            }
            index += 1;
        }

        Invoke("Test", 1);
    }

    void Test() //이게 나중에 로딩 해줌
    {
        PlayerEquipmentMessage message = new PlayerEquipmentMessage(players[myPlayerIndex].index, players[myPlayerIndex].headName, players[myPlayerIndex].grade, players[myPlayerIndex].bestSpeed, players[myPlayerIndex].acceleration, players[myPlayerIndex].luck, players[myPlayerIndex].power, players[myPlayerIndex].passive);
        BackendMatchManager.GetInstance().SendDataToInGame<PlayerEquipmentMessage>(message);

        foreach(var sessionId in BackendMatchManager.GetInstance().sessionIdList)
        {
            
                print(sessionId) ;
                if (sessionId < (SessionId)10)
                {
                    print("A");
                    players[sessionId].SetEquipment(sessionId, "1", "1", 1, 2, 3, 4, "");
                    PlayerEquipmentMessage msg = new PlayerEquipmentMessage(players[sessionId].index, players[sessionId].headName, players[sessionId].grade, 1, 2, 3, 4, players[sessionId].passive);
                    BackendMatchManager.GetInstance().SendDataToInGame<PlayerEquipmentMessage>(msg);
                }
            
        }
    }

    public void OnRecieve(MatchRelayEventArgs args)
    {
        if (args.BinaryUserData == null)
        {
            Debug.LogError(string.Format("빈 데이터가 브로드캐스팅 되었습니다.\n{0} - {1}", args.From, args.ErrInfo));
            // 데이터가 없으면 그냥 리턴
            return;
        }

        Message msg = DataParser.ReadJsonData<Message>(args.BinaryUserData);
        if (msg == null)
            return;

        if (BackendMatchManager.GetInstance().IsHost() != true && args.From.SessionId == myPlayerIndex) return;

        if (players == null)
            return;

        switch (msg.type)
        {
            case Type.EquipmentInfo:
                PlayerEquipmentMessage playerEquipmentMessage = DataParser.ReadJsonData<PlayerEquipmentMessage>(args.BinaryUserData);
                ProcessPlayerData(playerEquipmentMessage);
                break;
        }
    }

    private void ProcessPlayerData(PlayerEquipmentMessage data)
    {
       players[data.sessionId].SetEquipment(data.sessionId, data.headName, data.grade, data.bestSpeed, data.acceleration, data.luck, data.power, data.passive);
    }
}
