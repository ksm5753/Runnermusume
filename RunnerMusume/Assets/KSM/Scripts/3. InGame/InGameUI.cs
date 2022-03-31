using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InGameUI : MonoBehaviour
{
    private static InGameUI instance;

    public GameObject startCountObject;


    void Awake()
    {
        if (!instance) instance = this;
    }

    public static InGameUI GetInstance()
    {
        if (instance == null)
            return null;
        return instance;
    }

    public void SetCount(int num, bool isEnable = true)
    {
        startCountObject.SetActive(isEnable);
        if (isEnable)
            startCountObject.GetComponentInChildren<Text>().text = num.ToString();
    }
}
