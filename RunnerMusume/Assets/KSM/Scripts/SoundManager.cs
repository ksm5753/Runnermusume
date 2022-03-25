using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundManager : MonoBehaviour
{
    private static SoundManager instance;

    public AudioSource bgmSource;
    public AudioSource effectSource;

    [System.Serializable]
    public struct bgmType
    {
        public string name;
        public AudioClip bgmClip;
    }
    public bgmType[] bgmList;

    [System.Serializable]
    public struct effectType
    {
        public string name;
        public AudioClip effectClip;
    }
    public effectType[] effectList;

    public static SoundManager GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }
    void Awake()
    {
        if (!instance) instance = this;
        DontDestroyOnLoad(this.gameObject);
    }

    void Start()
    {
        if (!PlayerPrefs.HasKey("BGM_Mute"))
        {
            PlayerPrefs.SetInt("BGM_Mute", 0);
            PlayerPrefs.SetInt("Effect_Mute", 0);
        }
    }

    void Update()
    {
        bgmSource.mute = PlayerPrefs.GetInt("BGM_Mute") == 1 ? true : false;
        effectSource.mute = PlayerPrefs.GetInt("Effect_Mute") == 1 ? true : false;

        if(SceneManager.GetActiveScene().buildIndex == 0)
        {
            bgmSource.mute = true;
            effectSource.mute = true;
        }
    }

    public void MuteBGM(bool isMute)
    {
        bgmSource.mute = isMute;
        PlayerPrefs.SetInt("BGM_Mute", (isMute) ? 1 : 0);
    }

    public void MuteEffect(bool isMute)
    {
        effectSource.mute = isMute;
        PlayerPrefs.SetInt("Effect_Mute", (isMute) ? 1 : 0);
    }

    public void SetBGM(string name)
    {
        for(int i = 0; i < bgmList.Length; i++)
            if (bgmList[i].name.Equals(name))
                bgmSource.clip = bgmList[i].bgmClip;
    }

    public void SetEffect(string name)
    {
        for (int i = 0; i < effectList.Length; i++)
            if (effectList[i].name.Equals(name))
                effectSource.clip = effectList[i].effectClip;
    }

    public void PlayBGM(bool isPlay)
    {
        if (isPlay)
            bgmSource.Play();
        else
            bgmSource.Pause();
    }

    public void PlayEffect(bool isPlay)
    {
        if (isPlay)
            effectSource.Play();
        else
            effectSource.Pause();
    }
}
