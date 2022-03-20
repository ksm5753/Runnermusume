using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundManager : MonoBehaviour
{
    private static SoundManager instance;

    public AudioSource bgmSource;
    public AudioSource effectSource;

    public AudioClip[] bgmClips;
    public AudioClip[] effectClips;

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

    public void SetBGM(bool isMute)
    {
        bgmSource.mute = isMute;
        PlayerPrefs.SetInt("BGM_Mute", (isMute) ? 1 : 0);
    }

    public void SetEffect(bool isMute)
    {
        effectSource.mute = isMute;
        PlayerPrefs.SetInt("Effect_Mute", (isMute) ? 1 : 0);
    }

    public void PlayBGM(int num)
    {
        bgmSource.clip = bgmClips[num];
        bgmSource.Play();
    }

    public void PlayEffect(int num)
    {
        effectSource.clip = effectClips[num];
        effectSource.Play();
    }
}
