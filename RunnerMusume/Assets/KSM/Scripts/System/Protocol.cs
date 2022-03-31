using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd.Tcp;

namespace Protocol
{
    //�̺�Ʈ Ÿ��
    public enum Type : sbyte
    {
        AIPlayerInfo,           //AI�� �����ϴ� ��� AI ����
        LoadRoomScene,          //�� ������ ��ȯ
        RoamCount,              //�� �ȿ��� ī��Ʈ �ٿ�
        LoadGameScene,          //���� ������ ��ȯ
        GameCount,              //���� �ȿ��� ī��Ʈ �ٿ�
        GameStart,              //���� ����
        EquipmentInfo,          //�÷��̾ ������ ��� ����
        
        Key,

        PlayerMove,
        PlayerNoMove,
        PlayerRotate,
        PlayerNoRotate
    }

    

    public static class KeyEventCode
    {
        public const int NONE = 0;
        public const int ROTATE = 1;
        public const int NO_ROTATE = 2;
    }

    public class KeyMessage : Message
    {
        public int keyData;
        public float x;

        public KeyMessage(int data, float x) : base(Type.Key)
        {
            this.keyData = data;
            this.x = x;
        }
    }


    public class Message
    {
        public Type type;
        public Message(Type type)
        {
            this.type = type;
        }
    }

    public class PlayerRotateMessage : Message
    {
        public SessionId playerSession;
        public float xPos;
        public float yPos;
        public float zPos;
        public float xDir;
        public float yDir;
        public float zDir;

        public float key;

        public PlayerRotateMessage(SessionId session, Vector3 pos, Vector3 dir, float key) : base(Type.PlayerRotate)
        {
            this.playerSession = session;
            this.xPos = pos.x;
            this.yPos = pos.y;
            this.zPos = pos.z;
            this.xDir = dir.x;
            this.yDir = dir.y;
            this.zDir = dir.z;

            this.key = key;
        }
    }

    public class PlayerNoRotateMessage : Message
    {
        public SessionId playerSession;
        public float xPos;
        public float yPos;
        public float zPos;
        public float xDir;
        public float yDir;
        public float zDir;

        public PlayerNoRotateMessage(SessionId session, Vector3 pos, Vector3 dir) : base(Type.PlayerNoRotate)
        {
            this.playerSession = session;
            this.xPos = pos.x;
            this.yPos = pos.y;
            this.zPos = pos.z;
            this.xDir = dir.x;
            this.yDir = dir.y;
            this.zDir = dir.z;

        }
    }

    #region AI �÷��̾� ����
    public class AIPlayerInfo : Message
    {
        public string nickname;


        public SessionId sessionId;
        public string headName;
        public string grade;
        public int bestSpeed;
        public int acceleration;
        public int luck;
        public int power;
        public string passive;

        public AIPlayerInfo(SessionId sessionId, string headName, string grade, int bestSpeed, int accceleration, int luck, int power, string passive) : base(Type.AIPlayerInfo)
        {
            this.sessionId = sessionId;
            this.headName = headName;
            this.grade = grade;
            this.bestSpeed = bestSpeed;
            this.acceleration = accceleration;
            this.luck = luck;
            this.power = power;
            this.passive = passive;
        }
        public AIPlayerInfo(MatchUserGameRecord gameRecord) : base(Type.AIPlayerInfo)
        {
            this.sessionId = gameRecord.m_sessionId;
            this.nickname = gameRecord.m_nickname;
        }

        public MatchUserGameRecord GetMatchRecord()
        {
            MatchUserGameRecord gameRecord = new MatchUserGameRecord();
            gameRecord.m_sessionId = this.sessionId;
            gameRecord.m_nickname = this.nickname;

            return gameRecord;
        }
    }
    #endregion

    #region �� �� �̵� ����
    public class LoadRoomSceneMessage : Message
    {
        public LoadRoomSceneMessage() : base(Type.LoadRoomScene)
        {

        }
    }
    #endregion

    #region �� ī��Ʈ
    public class RoomCountMessage : Message
    {
        public int time;
        
        public RoomCountMessage(int time) : base(Type.RoamCount)
        {
            this.time = time;
        }
    }
    #endregion

    #region ���� �� �̵� ����
    public class LoadGameSceneMessage : Message
    {
        public LoadGameSceneMessage() : base(Type.LoadGameScene)
        {

        }
    }
    #endregion

    #region ���� ī��Ʈ
    public class GameCountMessage : Message
    {
        public int time;

        public GameCountMessage(int time) : base(Type.GameCount)
        {
            this.time = time;
        }
    }
    #endregion

    #region ���� ����
    public class GameStartMessage : Message
    {
        public GameStartMessage() : base(Type.GameStart)
        {

        }
    }
    #endregion


    #region �÷��̾� ��� ����
    public class PlayerEquipmentMessage : Message
    {
        public SessionId sessionId;
        public string headName;
        public string grade;
        public int bestSpeed;
        public int acceleration;
        public int luck;
        public int power;
        public string passive;

        public PlayerEquipmentMessage(SessionId sessionId, string headName, string grade, int bestSpeed, int acceleration, int luck, int power, string passive) : base(Type.EquipmentInfo)
        {
            this.sessionId = sessionId;
            this.headName = headName;
            this.grade = grade;
            this.bestSpeed = bestSpeed;
            this.acceleration = acceleration;
            this.luck = luck;
            this.power = power;
            this.passive = passive;
        }
    }
    #endregion
}