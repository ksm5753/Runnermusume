using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ReadyRoomUI : MonoBehaviour
{
    [Header("Count")]
    public Text countText;

    private static ReadyRoomUI instance;

    void Awake()
    {
        if (!instance) instance = this;
    }

    public static ReadyRoomUI GetInstance()
    {
        if (instance == null)
            return null;
        return instance;
    }

    public void SetCount(string num)
    {
        countText.text = num;
    }
}
