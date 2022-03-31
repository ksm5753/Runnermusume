using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Battlehub.Dispatcher;
using UnityEngine.UI;
using System;

public partial class LobbyUI : MonoBehaviour
{
    [Space(25f)]
    [Header("< SelectMode Panel >")]
    public GameObject selectModePanel;

    [Space(25f)]
    [Header("< Energy Panel >")]
    public GameObject energyCountText;
    public Text energyTimerText;
    public Slider energyBar;
    public int energyAmount = 0; //������ ���� *
    private DateTime AppQuitTime = new DateTime(2001, 6, 30).ToLocalTime();
    public int energyMax = 20; //������ �ִ� *
    public int energyRechargeInterval = 60; //������ ���� ����(���� : ��) *
    private Coroutine rechargeTimerCoroutine = null;
    private float rechargeRemainTime = 0;

    [Space(25f)]
    [Header("< Profile Panel >")]
    public GameObject profilePanel;
    public Text levelText;
    public Image expBar;
    public int expAmount;
    public int expMax;
    public int level;

    [Space(25f)]
    [Header("< Coin Panel >")]
    public Text goldText;
    public Text diamondText;

    [Space(25f)]
    [Header("< Close App Object >")]
    public GameObject closeAppPanel; //���� â

    [Space(25f)]
    [Header("< Error Object >")]
    public GameObject errorObject; //���� â

    [Space(25f)]
    [Header("< Loading Object >")]
    public GameObject loadingObject; //�ε� â

    [Space(25f)]
    [Header("< GAMER ID >")]
    public GameObject gamerIDText; //���� â

    private static LobbyUI instance;

    public static LobbyUI GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
    }

    void Start()
    {
        SetSound();                                                                             //����� ����

        BackendMatchManager.GetInstance().JoinMatchServer();                                    //���� ��ġ ����

        BackendServerManager.GetInstance().InitialUserCheck();                                  //�ű� ���� üũ


        #region ��� ���� �ҷ�����
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GetEquipment((bool result, string error) =>          //��� ���� �ҷ�����
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
                if (result)
                {
                    BackendServerManager.GetInstance().SetEquipment();
                    return;
                }
                errorObject.GetComponentInChildren<Text>().text = error;
                errorObject.SetActive(true);
            });
        });
        #endregion

        #region ���� ���� �ҷ�����
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GetShopSheet((bool result, string error) =>          //��� ���� �ҷ�����
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
                if (result)
                {
                    print("���� ���� �ҷ����� ����");
                    return;
                }
                errorObject.GetComponentInChildren<Text>().text = error;
                errorObject.SetActive(true);
            });
        });
        #endregion

        #region ���� ���� �ҷ�����
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GetLevelSheet((bool result, string error) =>          //��� ���� �ҷ�����
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
                if (result)
                {
                    print("���� ���� �ҷ����� ����");
                    return;
                }
                errorObject.GetComponentInChildren<Text>().text = error;
                errorObject.SetActive(true);
            });
        });
        #endregion

        BackendServerManager.GetInstance().RefreshInfo();                                       //���ΰ�ħ



        gamerIDText.GetComponentInChildren<Text>().text = "User ID : " + BackendServerManager.GetInstance().user_ID;

    }

    void Update()
    {
        //������ �ǽð� ��ȭ
        SetEnergyText(energyAmount + " / " + energyMax, (energyAmount >= energyMax) ? "" : ((int)rechargeRemainTime / 60) + " : " + string.Format("{0:D2}", (int)rechargeRemainTime % 60));

        //���� �ؽ�Ʈ ��ȭ
        SetLevelText(level);

        //����ġ �� ��ȭ
        if (expMax != 0)
            SetExpBar(expAmount, expMax);

        //������ ����
        //if (expAmount >= expMax) print("������!");

        //���� ����
        if (Input.GetKey(KeyCode.Escape))
            closeAppPanel.SetActive(true);
    }

    public void QuitGame() => Application.Quit();

    //���� �ʱ�ȭ, �߰� ��Ż, �߰� ���� �� ����Ǵ� �Լ�
    public void OnApplicationFocus(bool focus)
    {
        if (focus)
            BackendServerManager.GetInstance().RefreshInfo();

        else
        {
            BackendServerManager.GetInstance().SaveEnergyInfo();

            if (rechargeTimerCoroutine != null)
                StopCoroutine(rechargeTimerCoroutine);
        }
    }

    //���� ���� �� ����Ǵ� �Լ�
    public void OnApplicationQuit()
    {
        BackendServerManager.GetInstance().SaveEnergyInfo();
    }

    #region ����� ����
    private void SetSound()
    {
        SoundManager.GetInstance().SetBGM("Lobby");
        SoundManager.GetInstance().PlayBGM(true);
    }
    #endregion

    #region ��ư ȿ����
    public void PlayEffect() => SoundManager.GetInstance().PlayEffect(true);
    #endregion

    #region ������ ���� ����
    public bool LoadAppQuitTime()
    {
        bool result = false;
        try
        {
            //�� �����ð��� ���� ������ �̹� �������
            if (PlayerPrefs.HasKey("AppQuitTime"))
            {
                var appQuitTime = string.Empty;
                appQuitTime = PlayerPrefs.GetString("AppQuitTime");
                this.AppQuitTime = DateTime.FromBinary(Convert.ToInt64(appQuitTime));
            }
            else
            {
                AppQuitTime = DateTime.Now.ToLocalTime();
            }

            result = true;
        }
        catch (Exception e)
        {
            Debug.LogError("LoadAppQuitTime Failed : " + e.Message);
        }

        return result;
    }

    public bool SaveAppQuitTime()
    {
        bool result = false;
        try
        {
            var appQuitTime = DateTime.Now.ToLocalTime().ToBinary().ToString();
            PlayerPrefs.SetString("AppQuitTime", appQuitTime);
            PlayerPrefs.SetFloat("RemainTime", rechargeRemainTime);
            PlayerPrefs.Save();

            result = true;
        }
        catch (Exception e)
        {
            Debug.LogError("SaveAppQuitTime Failed : " + e.Message);
        }

        return result;
    }

    public void SetRechargeScheduler(Action onFinish = null)
    {

        if (rechargeTimerCoroutine != null)
            StopCoroutine(rechargeTimerCoroutine);

        var timeDifferenceInSec = (float)(DateTime.Now.ToLocalTime() - AppQuitTime).TotalSeconds;

        float originTimeDifferenceInSec = timeDifferenceInSec;

        if (energyAmount >= energyMax)
        {
            SetEnergyText(energyAmount + " / " + energyMax);
            return;
        }

        float remainTime = 0;
        int energyToAdd;
        if (timeDifferenceInSec > 0)
        {
            timeDifferenceInSec = PlayerPrefs.GetFloat("RemainTime") - timeDifferenceInSec;

            if (timeDifferenceInSec <= 0)
            {
                energyAmount++;

                if (energyAmount >= energyMax)
                    energyAmount = energyMax;
                timeDifferenceInSec = Mathf.Abs(timeDifferenceInSec);
                energyToAdd = Mathf.FloorToInt(timeDifferenceInSec / energyRechargeInterval);
                if (energyToAdd == 0)
                    remainTime = energyRechargeInterval - timeDifferenceInSec;
                else
                    remainTime = energyRechargeInterval - (timeDifferenceInSec % energyRechargeInterval);
            }
            else
            {
                energyToAdd = Mathf.FloorToInt(timeDifferenceInSec / energyRechargeInterval);
                if (energyToAdd == 0)
                    remainTime = PlayerPrefs.GetFloat("RemainTime") - originTimeDifferenceInSec;
            }

            energyAmount += energyToAdd;
        }

        else if (timeDifferenceInSec <= 0)
            print("�����ߴ�?");

        if (energyAmount >= energyMax)
        {
            energyAmount = energyMax;

            SetEnergyText(energyAmount + " / " + energyMax);
        }
        else
            rechargeTimerCoroutine = StartCoroutine(DoRechargeTimer(remainTime, onFinish));
    }

    public void UseEnergy(int amount, Action onFinish = null)
    {
        if (energyAmount <= 0)
            return;

        energyAmount -= amount;

        if (rechargeTimerCoroutine == null)
            rechargeTimerCoroutine = StartCoroutine(DoRechargeTimer(energyRechargeInterval));

        if (onFinish != null)
            onFinish();
    }

    private IEnumerator DoRechargeTimer(float remainTime, Action onFinish = null)
    {
        if (energyAmount >= energyMax)
        {
            rechargeRemainTime = 0;
            StopAllCoroutines();
            SetEnergyText(energyAmount + " / " + energyMax);
        }
        else
        {
            if (remainTime <= 0)
                rechargeRemainTime = energyRechargeInterval;
            else
                rechargeRemainTime = remainTime;

            while (rechargeRemainTime > 0)
            {
                SetEnergyText(energyAmount + " / " + energyMax, ((int)rechargeRemainTime / 60) + " : " + string.Format("{0:D2}", (int)rechargeRemainTime % 60));
                rechargeRemainTime--;

                yield return new WaitForSeconds(1);
            }

            energyAmount++;

            if (energyAmount >= energyMax)
            {
                energyAmount = energyMax;
                rechargeRemainTime = 0;
                SetEnergyText(energyAmount + " / " + energyMax);
                rechargeTimerCoroutine = null;
            }
            else
            {
                rechargeTimerCoroutine = StartCoroutine(DoRechargeTimer(energyRechargeInterval, onFinish));
            }

        }
    }
    public void OnClickEnergy(int amount)
    {
        print("������ ���");
        UseEnergy(amount);
    }
    #endregion

    #region �ػ� ����
    public void SetScale()
    {
        NestedScrollManager.GetInstance().SetScale();

        bgm_On.SetActive(PlayerPrefs.GetInt("BGM_Mute") == 0 ? true : false);
        bgm_Off.SetActive(PlayerPrefs.GetInt("BGM_Mute") == 0 ? false : true);

        effect_On.SetActive(PlayerPrefs.GetInt("Effect_Mute") == 0 ? true : false);
        effect_Off.SetActive(PlayerPrefs.GetInt("Effect_Mute") == 0 ? false : true);

        bgmToggle.isOn = PlayerPrefs.GetInt("BGM_Mute") == 0 ? true : false; //����� ����
        effectToggle.isOn = PlayerPrefs.GetInt("Effect_Mute") == 0 ? true : false; //ȿ���� ����

        matchDonePanel.SetActive(false);
        matchRequestPanel.SetActive(false);
        closeAppPanel.SetActive(false);
        loadingObject.SetActive(false);
        errorObject.SetActive(false);

        selectModePanel.SetActive(false);
    }
    #endregion

    #region �α׾ƿ�
    public void LogOut()
    {
        BackendServerManager.GetInstance().LogOut();
        GameManager.GetInstance().ChangeState(GameManager.GameState.Login);
    }
    #endregion

    #region ������ �ؽ�Ʈ ����
    public void SetEnergyText(string energyCount, string energyTimer = "")
    {
        energyCountText.GetComponent<Text>().text = energyCount;
        energyTimerText.text = energyTimer;
        energyBar.maxValue = energyMax;
        energyBar.value = energyAmount;
    }
    #endregion

    #region ���� �ؽ�Ʈ ����
    public void SetLevelText(int level) => levelText.text = level.ToString();
    #endregion

    #region ����ġ �� ����
    public void SetExpBar(int expAmount, int expMax) => expBar.fillAmount = ((float)expAmount / (float)expMax);
    #endregion

    #region �������̵� ����
    public void CopyID()
    {
        UniClipboard.SetText(BackendServerManager.GetInstance().user_ID);
        errorObject.GetComponentInChildren<Text>().text = "���� ���̵� �����߽��ϴ�.";
        errorObject.SetActive(true);
    }
    #endregion

    #region �ε� ������Ʈ ON/OFF
    public void SetLoadingObject(bool isActive)
    {
        loadingObject.SetActive(isActive);
    }
    #endregion
}
