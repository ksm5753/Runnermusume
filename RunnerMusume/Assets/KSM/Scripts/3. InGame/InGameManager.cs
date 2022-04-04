using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;
using BackEnd;
using BackEnd.Tcp;

public class InGameManager : MonoBehaviour
{
    private static InGameManager instance;

    private const int START_COUNT = 3;

    private SessionId myPlayerIndex = SessionId.None;

    #region Player
    [Header("Player Setting")]
    public GameObject playerPool;           //플레이어 넣을곳
    public GameObject playerPrefab;         //플레이어
    public int numOfPlayer = 0;
    private const int MAX_PLAYER = 4;

    [Header("Player Icon")]
    public GameObject playerIconPool;       //플레이어 아이콘 넣을곳
    public GameObject playerIconPrefab;           //플레이어 아이콘
    public GameObject finalObject;

    public Dictionary<SessionId, GamePlayer> players;
    public Dictionary<SessionId, GamePlayerIcon> playersIcon;
    public GameObject startPoint;

    private Stack<SessionId> gameRecord;
    #endregion

    public static InGameManager GetInstance()
    {
        if (instance == null)
            return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
    }

    void Start()
    {
        if (BackendMatchManager.GetInstance() == null)
            return;

        InitializeGame();
    }

    public void InitializeGame()
    {
        if (!playerPool)
            return;

        gameRecord = new Stack<SessionId>();
        myPlayerIndex = SessionId.None;


        SetPlayerAttribute(); //플레이어 위치 세팅
        GameStart();
    }

    public void SetPlayerAttribute()
    {

    }

    public void GameStart()
    {
        if (BackendMatchManager.GetInstance() == null)
            return;

        if (BackendMatchManager.GetInstance().IsHost())
        {
            print("플레이어 세션 정보 확인");

            if (BackendMatchManager.GetInstance().IsSessionListNull())
            {
                print("Player Index Not Exist!");
                //호스트 기준 세션데이터가 없으면 게임을 바로 종료
                foreach (var session in BackendMatchManager.GetInstance().sessionIdList)
                {
                    gameRecord.Push(session);
                }

                return;
            }
        }

        SetPlayerInfo();
    }

    public void SetPlayerInfo()
    {
        if (BackendMatchManager.GetInstance().sessionIdList == null)
        {
            Invoke("SetPlayerInfo", 0.5f);
            return;
        }

        var gamers = BackendMatchManager.GetInstance().sessionIdList;
        int size = gamers.Count;
        if (size <= 0)
        {
            print("No Player Exist!");
            return;
        }
        if (size > MAX_PLAYER)
        {
            print("Player Pool Exceed!");
            return;
        }

        players = new Dictionary<SessionId, GamePlayer>();
        playersIcon = new Dictionary<SessionId, GamePlayerIcon>();
        BackendMatchManager.GetInstance().SetPlayerSessionList(gamers);

        int index = 0;
        foreach (var sessionId in gamers)
        {
            GameObject player = Instantiate(playerPrefab, startPoint.transform.GetChild(index).position, Quaternion.identity, playerPool.transform);
            players.Add(sessionId, player.GetComponent<GamePlayer>());

            GameObject playerIcon = Instantiate(playerIconPrefab, playerIconPool.transform);
            playersIcon.Add(sessionId, playerIcon.GetComponent<GamePlayerIcon>());

            if (BackendMatchManager.GetInstance().IsMySessionId(sessionId))
            {
                myPlayerIndex = sessionId;
                players[sessionId].Initialize(true, myPlayerIndex, BackendMatchManager.GetInstance().GetNicknameBySessionId(myPlayerIndex));
                playersIcon[sessionId].Initialize(true, myPlayerIndex);
            }
            else
            {
                players[sessionId].Initialize(false, sessionId, BackendMatchManager.GetInstance().GetNicknameBySessionId(sessionId));
                playersIcon[sessionId].Initialize(false, sessionId);
            }
            index++;
        }

        print(gamers.Count);

        if (BackendMatchManager.GetInstance().IsHost())
            StartCoroutine("StartCount");
    }

    private IEnumerator StartCount()
    {
        GameCountMessage msg = new GameCountMessage(5);

        for (int i = 0; i < 5; i++)
        {
            msg.time = 5 - i;

            BackendMatchManager.GetInstance().SendDataToInGame(msg);
            yield return new WaitForSeconds(1);
        }

        //게임 시작 메시지 전송
        GameStartMessage gameStartMessage = new GameStartMessage();
        BackendMatchManager.GetInstance().SendDataToInGame(gameStartMessage);
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

        if (BackendMatchManager.GetInstance().IsHost() != true && args.From.SessionId == myPlayerIndex)
            return;

        if (players == null)
            return;


        switch (msg.type)
        {
            case Type.GameCount:
                GameCountMessage gameCountMessage = DataParser.ReadJsonData<GameCountMessage>(args.BinaryUserData);
                InGameUI.GetInstance().SetCount(gameCountMessage.time);
                break;
            case Type.GameStart:
                InGameUI.GetInstance().SetCount(0, false);
                //players[args.From.SessionId].isMove = true; //방장만 움직임
                GameManager.GetInstance().ChangeState(GameManager.GameState.Start);
                break;
            case Type.Key:
                KeyMessage keyMessage = DataParser.ReadJsonData<KeyMessage>(args.BinaryUserData);
                ProcessKeyEvent(args.From.SessionId, keyMessage);
                break;
            case Type.PlayerRotate:
                PlayerRotateMessage rotateMessage = DataParser.ReadJsonData<PlayerRotateMessage>(args.BinaryUserData);
                ProcessPlayerData(rotateMessage);
                break;
            case Type.PlayerNoRotate:
                PlayerNoRotateMessage noRotateMessage = DataParser.ReadJsonData<PlayerNoRotateMessage>(args.BinaryUserData);
                ProcessPlayerData(noRotateMessage);
                break;
        }
    }

    private void ProcessKeyEvent(SessionId index, KeyMessage keyMessage)
    {
        if (!BackendMatchManager.GetInstance().IsHost())
            return;

        int keyData = keyMessage.keyData;

        Vector3 playerPos = players[index].GetPosition();
        Vector3 playerDir = players[index].GetRotation();

        if ((keyData & KeyEventCode.ROTATE) == KeyEventCode.ROTATE)
        {

            players[index].SetRotateVector(keyMessage.x);
            PlayerRotateMessage msg = new PlayerRotateMessage(index, playerPos, playerDir, keyMessage.x);
            BackendMatchManager.GetInstance().SendDataToInGame(msg);
        }

        if((keyData & KeyEventCode.NO_ROTATE) == KeyEventCode.NO_ROTATE)
        {
            players[index].SetRotateVector(0);
            PlayerNoRotateMessage msg = new PlayerNoRotateMessage(index, playerPos, playerDir);
            BackendMatchManager.GetInstance().SendDataToInGame(msg);
        }
    }

    private void ProcessPlayerData(PlayerRotateMessage data)
    {
        if (BackendMatchManager.GetInstance().IsHost())
            return;

        players[data.playerSession].SetRotateVector(data.key);
        players[data.playerSession].SetPosition(new Vector3(data.xPos, data.yPos, data.zPos));
        players[data.playerSession].SetRotation(new Vector3(data.xDir, data.yDir, data.zDir));

    }

    private void ProcessPlayerData(PlayerNoRotateMessage data)
    {
        if (BackendMatchManager.GetInstance().IsHost()) return;

        players[data.playerSession].SetRotateVector(0);
        players[data.playerSession].SetPosition(new Vector3(data.xPos, data.yPos, data.zPos));
        players[data.playerSession].SetRotation(new Vector3(data.xDir, data.yDir, data.zDir));
    }

    public void OnRecieveForLocal(KeyMessage keyMessage)
    {
        ProcessKeyEvent(myPlayerIndex, keyMessage);
    }

    public bool IsMyPlayerRotate()
    {
        return players[myPlayerIndex].isRotate;
    }
}
