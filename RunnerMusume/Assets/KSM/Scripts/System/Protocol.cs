using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd.Tcp;

namespace Protocol
{
    //이벤트 타입
    public enum Type : sbyte
    {
        AIPlayerInfo,           //AI가 존재하는 경우 AI 정보
        LoadRoomScene,          //룸 씬으로 전환
        EquipmentInfo,          //플레이어가 장착한 장비 정보
        Testing
    }

    



    public class Message
    {
        public Type type;
        public Message(Type type)
        {
            this.type = type;
        }
    }

    #region AI 플레이어 정보
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

    #region 룸 씬 이동 정보
    public class LoadRoomSceneMessage : Message
    {
        public LoadRoomSceneMessage() : base(Type.LoadRoomScene)
        {

        }
    }
    #endregion

    #region 플레이어 장비 정보
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