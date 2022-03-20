using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleExtension : MonoBehaviour
{
    private Toggle tg;
    public GameObject go_On;
    public GameObject go_Off;

    void Start()
    {
        tg = GetComponent<Toggle>();
        ToggleValueChanged(tg.isOn);
    }

    public void ToggleValueChanged(bool value)
    {
        if (value)
        {
            if (go_On != null)
            {
                go_On.SetActive(true);
            }
                
            if (go_Off != null)
            {
                go_Off.SetActive(false);
            }
                
        }
        else
        {
            if (go_On != null)
                go_On.SetActive(false);
            if (go_Off != null)
            {
                go_Off.SetActive(true);
            }
        }
    }
}
