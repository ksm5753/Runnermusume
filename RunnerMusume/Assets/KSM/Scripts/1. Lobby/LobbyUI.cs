using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Battlehub.Dispatcher;
using UnityEngine.UI;
using System;

public partial class LobbyUI : MonoBehaviour
{
    [Header("Menu Button")]

    public Toggle[] menuButtons;
    public GameObject mainParent;
    public Scrollbar scrollBar;
    public float swipeTime = 0.01f;
    public float swipeDistance = 50.0f;

    private float[] scrollPageValues;
    private float valueDistance = 0;
    private int currentPage = 0;
    private int maxPage = 0;
    private float startTouchX;
    private float endTouchX;
    private bool isSwipeMode = false;

    [Space(15f)]
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

    [Space(15f)]
    [Header("< Energy Shop Panel >")]
    public GameObject energyShopPanel;

    [Space(15f)]
    [Header("Error Object")]
    public GameObject errorObject; //���� â

    [Space(15f)]
    [Header("Loading Object")]
    public GameObject loadingObject; //�ε� â

    private static LobbyUI instance;

    public static LobbyUI GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
        //SetMainUI();
    }

    void Start()
    {
        SoundManager.GetInstance().PlayBGM(0);

        SetMainUI();

        BackendServerManager.GetInstance().RefreshInfo();
    }

    void Update()
    {
        UpdateInput();
    }

    //���� �ʱ�ȭ, �߰� ��Ż, �߰� ���� �� ����Ǵ� �Լ�
    public void OnApplicationFocus(bool focus)
    {
        if (focus)
        {
            BackendServerManager.GetInstance().RefreshInfo();
            print("������");
        }
        else
        {
            BackendServerManager.GetInstance().SaveEnergyInfo();
            print("������2");

            if (rechargeTimerCoroutine != null)
                StopCoroutine(rechargeTimerCoroutine);
        }
    }

    //���� ���� �� ����Ǵ� �Լ�
    public void OnApplicationQuit()
    {
        BackendServerManager.GetInstance().SaveEnergyInfo();
    }

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
            print("setRechargeScheduler : " + timeDifferenceInSec);

            if (timeDifferenceInSec <= 0)
            {
                energyAmount++;
                timeDifferenceInSec = Mathf.Abs(timeDifferenceInSec);
                energyToAdd = Mathf.FloorToInt(timeDifferenceInSec / energyRechargeInterval);
                print("A : Energy to add : " + energyToAdd);
                if (energyToAdd == 0)
                    remainTime = energyRechargeInterval - timeDifferenceInSec;
                else
                    remainTime = energyRechargeInterval - (timeDifferenceInSec % energyRechargeInterval);
            }
            else
            {
                energyToAdd = Mathf.FloorToInt(timeDifferenceInSec / energyRechargeInterval);
                print("B : Energy to add " + energyToAdd);
                if (energyToAdd == 0)
                    remainTime = PlayerPrefs.GetFloat("RemainTime") - originTimeDifferenceInSec;
            }

            print("RemainTime : " + remainTime);
            print(energyAmount + ", " + energyToAdd);
            energyAmount += energyToAdd;
        }

        else if (timeDifferenceInSec <= 0)
            print("�����ߴ�?");

        if (energyAmount >= energyMax)
        {
            //energyAmount = energyMax;

            SetEnergyText(energyAmount + " / " + energyMax);
        }
        else
            rechargeTimerCoroutine = StartCoroutine(DoRechargeTimer(remainTime, onFinish));

        print("���� ������ ���� : " + energyAmount);
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
            print("�˿�");
            rechargeRemainTime = energyRechargeInterval;
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
                print("������ ���� �ð� : " + rechargeRemainTime);
                SetEnergyText(energyAmount + " / " + energyMax, ((int)rechargeRemainTime / 60) + " : " + string.Format("{0:D2}", (int)rechargeRemainTime % 60));
                rechargeRemainTime--;

                yield return new WaitForSeconds(1);
            }

            energyAmount++;

            if (energyAmount >= energyMax)
            {
                rechargeRemainTime = 0;
                print("�������� ���� á���ϴ�.");
                SetEnergyText(energyAmount + " / " + energyMax);
                rechargeTimerCoroutine = null;
            }
            else
            {
                rechargeTimerCoroutine = StartCoroutine(DoRechargeTimer(energyRechargeInterval, onFinish));
            }

            print("������ ���� : " + energyAmount);
        }
    }
    public void OnClickEnergy(int amount)
    {
        print("������ ���");
        UseEnergy(amount);
    }

    //===================================================================
    #region �ػ� ����
    public void SetScale()
    {
        SetMainUI();
        SetScrollBarValue(1, false);
        bgmToggle.isOn = PlayerPrefs.GetInt("BGM_Mute") == 0 ? true : false; //����� ����
        effectToggle.isOn = PlayerPrefs.GetInt("Effect_Mute") == 0 ? true : false; //ȿ���� ����

        bgm_On.SetActive(PlayerPrefs.GetInt("BGM_Mute") == 0 ? true : false);
        bgm_Off.SetActive(PlayerPrefs.GetInt("BGM_Mute") == 0 ? false : true);

        effect_On.SetActive(PlayerPrefs.GetInt("Effect_Mute") == 0 ? true : false);
        effect_Off.SetActive(PlayerPrefs.GetInt("Effect_Mute") == 0 ? false : true);

        energyShopPanel.SetActive(false);
        loadingObject.SetActive(false);
        errorObject.SetActive(false);
    }
    #endregion
    //===================================================================
    #region ���� ȭ�� ����

    public void SetMainUI()
    {
        //��ũ�� �Ǵ� �������� �� value ���� �����ϴ� �迭 �޸� �Ҵ�
        scrollPageValues = new float[mainParent.transform.childCount];

        //��ũ�� �Ǵ� ������ ������ �Ÿ�
        valueDistance = 1f / (scrollPageValues.Length - 1f);

        //��ũ�� �Ǵ� �������� �� value ��ġ ���� [0 <= value <= 1]
        for (int i = 0; i < scrollPageValues.Length; i++)
            scrollPageValues[i] = valueDistance * i;

        //�ִ� �������� ��
        maxPage = mainParent.transform.childCount;
    }

    public void SetScrollValue(int index)
    {
        if (index == currentPage) return;
        currentPage = index;
        scrollBar.value = scrollPageValues[index];

        StartCoroutine(OnSwipeOneStep(currentPage));

        SoundManager.GetInstance().PlayEffect(0);
    }
    public void SetScrollBarValue(int index, bool mode = true)
    {
        currentPage = index;

        if (!mode)
            scrollBar.value = scrollPageValues[index];

        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private void UpdateInput()
    {
        if (isSwipeMode) return;

#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
            startTouchX = Input.mousePosition.x;
        else if (Input.GetMouseButtonUp(0))
        {
            endTouchX = Input.mousePosition.x;
            UpdateSwipe();
        }
#endif

#if UNITY_ANDROID
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                //��ġ ���� ����(Swipe ���� ����)
                startTouchX = Input.mousePosition.x;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                //��ġ ���� ���� (Swipe ���� ����)
                endTouchX = Input.mousePosition.x;
                UpdateSwipe();
            }
        }
#endif
    }
    private void UpdateSwipe()
    {
        //�ʹ� ���� �Ÿ��� �������� ���� Swipe X
        if (Mathf.Abs(startTouchX - endTouchX) < swipeDistance)
        {
            //���� �������� Swipe�ؼ� ���ư���
            StartCoroutine(OnSwipeOneStep(currentPage));
            return;
        }

        //Swipe ����
        bool isLeft = startTouchX < endTouchX ? true : false;

        //�̵� ������ ������ ��
        if (isLeft)
        {
            //���� �������� ���� ���̸� ����
            if (currentPage == 0) return;

            //�������� �̵��� ���� ���� �������� 1 ����
            currentPage--;
        }

        //�̵� ������ �������� ��
        else
        {
            //���� �������� ������ ���̸� ����
            if (currentPage == maxPage - 1) return;

            //���������� �̵��� ���� ���� �������� 1 ����
            currentPage++;
        }

        //currentIndex ��° �������� Swipe�ؼ� �̵�
        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private IEnumerator OnSwipeOneStep(int index)
    {
        float start = scrollBar.value;
        float current = 0;
        float percent = 0;

        isSwipeMode = true;

        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / swipeTime;

            scrollBar.value = Mathf.Lerp(start, scrollPageValues[index], percent);
            menuButtons[currentPage].isOn = true;
            yield return null;
        }

        isSwipeMode = false;
    }

    public void MoveMenu(Toggle toggle)
    {
        if (toggle.isOn)
        {
            switch (toggle.name)
            {
                case "ShopButton":
                    SetScrollBarValue(0);
                    break;
                case "HomeButton":
                    SetScrollBarValue(1);

                    break;
                case "SettingButton":
                    SetScrollBarValue(2);

                    break;
            }
        }
    }
    #endregion
    //===================================================================
    #region �α׾ƿ�
    public void LogOut()
    {
        BackendServerManager.GetInstance().LogOut();
        GameManager.GetInstance().ChangeState(GameManager.GameState.Login);
    }
    #endregion
    //===================================================================
    public void SetEnergyText(string energyCount, string energyTimer = "")
    {
        energyCountText.GetComponent<Text>().text = energyCount;
        energyTimerText.text = energyTimer;
        energyBar.maxValue = energyMax;
        energyBar.value = energyAmount;
    }
}
