using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BackEnd.Tcp;

public class GamePlayerIcon : MonoBehaviour
{
    private SessionId index = 0;
    private bool isMe = false;

    Slider slider;

    public Image playerIcon;
    public Sprite[] sprites;

    public float score;

    void Awake()
    {
        slider = GetComponent<Slider>();
    }

    public void Initialize(bool isMe, SessionId index)
    {
        this.isMe = isMe;
        this.index = index;

        if (isMe)
        {
            playerIcon.sprite = sprites[1];
        }
        else
            playerIcon.sprite = sprites[0];
    }

    public void SetValue(GameObject player, GameObject final)
    {
        slider.value = player.transform.position.z / final.transform.position.z;
        score = player.transform.position.z / final.transform.position.z;
    }

}
