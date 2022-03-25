using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public partial class LobbyUI : MonoBehaviour
{
    [Space(15f)]
    [Header("Settings")]
    public Toggle bgmToggle;
    public GameObject bgm_On;
    public GameObject bgm_Off;

    public Toggle effectToggle;
    public GameObject effect_On;
    public GameObject effect_Off;

    public void BGMValueChanged(bool value)
    {
        if (value)
        {
            if (bgm_On != null)
            {
                bgm_On.SetActive(true);
                SoundManager.GetInstance().MuteBGM(false);
            }

            if (bgm_Off != null)
            {
                bgm_Off.SetActive(false);
            }

        }
        else
        {
            if (bgm_On != null)
            {
                bgm_On.SetActive(false);
            }
            if (bgm_Off != null)
            {
                bgm_Off.SetActive(true);
                SoundManager.GetInstance().MuteBGM(true);
            }
        }
    }

    public void EffectValueChanged(bool value)
    {
        if (value)
        {
            if (effect_On != null)
            {
                effect_On.SetActive(true);
                SoundManager.GetInstance().MuteEffect(false);
            }

            if (effect_Off != null)
            {
                effect_Off.SetActive(false);
            }

        }
        else
        {
            if (effect_On != null)
                effect_On.SetActive(false);
            if (effect_Off != null)
            {
                effect_Off.SetActive(true);
                SoundManager.GetInstance().MuteEffect(true);
            }
        }
    }
}
