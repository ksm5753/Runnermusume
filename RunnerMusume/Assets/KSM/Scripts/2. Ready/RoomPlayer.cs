using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;
using UnityEngine.UI;
using BackEnd.Tcp;

public class RoomPlayer : MonoBehaviour
{
    public SessionId index = 0;
    private string nickName = string.Empty;

    private bool isMe = false;

    public string headName;
    public string grade;
    public int bestSpeed;
    public int acceleration;
    public int luck;
    public int power;
    public string passive;

    //UI
    public Text nickNameText;
    public Text test;

    public void Initialize(bool isMe, SessionId index, string nickName)
    {
        this.isMe = isMe;
        this.index = index;
        this.nickName = nickName;

        nickNameText.text = nickName;

            var server = BackendServerManager.GetInstance().myEquipment;
            this.headName = server.headName;
            this.grade = server.grade;
            this.bestSpeed = server.bestSpeed;
            this.acceleration = server.acceleration;
            this.luck = server.luck;
            this.power = server.power;
            this.passive = server.passive;

            GetComponentsInChildren<Text>()[1].text = index + ", " + bestSpeed + ", " + acceleration + ", " + luck + ", " + power;

    }

    public void SetEquipment(SessionId index, string headName, string grade, int bestSpeed, int acceleration, int luck, int power, string passive)
    {
        GetComponentsInChildren<Text>()[1].text = "ANG : " + index + ", " + bestSpeed + ", " + acceleration + ", " + luck + ", " + power;
    }
}
