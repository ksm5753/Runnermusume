using System;
using System.Collections.Generic;
using UnityEngine;
// Include Backend
using BackEnd;
using static BackEnd.SendQueue;
//  Include GPGS namespace
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using LitJson;
using System.Collections;
#if UNITY_IOS
using UnityEngine.SignInWithApple;
#endif

public class RankItem //Rank Class
{
    public string nickname { get; set; } // �г���
    public string score { get; set; }    // ����
    public string rank { get; set; }     // ��ũ
}

public class Equipment
{
    public string headName;
    public string name;
    public string grade;
    public int bestSpeed;
    public int acceleration;
    public int luck;
    public int power;
    public string passive = "";
}

public class Shop
{
    public string name;
    public int gold;
    public int diamond;
    public string compensate;
}

public class BackendServerManager : MonoBehaviour
{
    [Header("<Backend SHEET CODE >")]
    public string equipmentCode = "";
    public string shopCode = "";

    private static BackendServerManager instance;   // �ν��Ͻ�

    private string tempNickName;                        // ������ �г��� (id�� ����)
    public string myNickName { get; private set; } = string.Empty;  // �α����� ������ �г���
    public string myIndate { get; private set; } = string.Empty;    // �α����� ������ inDate
    private Action<bool, string> loginSuccessFunc = null;

    private const string BackendError = "statusCode : {0}\nErrorCode : {1}\nMessage : {2}";

    public string appleToken = ""; // SignInWithApple.cs���� ��ū���� ���� ���ڿ�

    public string userIndate;
    public string user_ID;


    public string rankUuid = "";

    //��� ���
    public List<Equipment> headEquipment = new List<Equipment>();
    public Equipment myEquipment = new Equipment();

    //���� ���
    public List<Shop> shopSheet = new List<Shop>();

    //=================================================================================================
    #region ���� �ʱ�ȭ
    void Initialize()
    {
#if UNITY_ANDROID
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration
            .Builder()
            .RequestServerAuthCode(false)
            .RequestIdToken()
            .Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.DebugLogEnabled = false;

        PlayGamesPlatform.Activate();
#endif

        var bro = Backend.Initialize(true);

        if (bro.IsSuccess())
        {

#if UNITY_ANDROID //�ȵ���̵忡���� �۵�
            Debug.Log("GoogleHash - " + Backend.Utils.GetGoogleHash());
#endif
#if !UNITY_EDITOR //�ȵ���̵�, iOS ȯ�濡���� �۵�
            GetVersionInfo();
#endif
        }
        else Debug.LogError("�ڳ� �ʱ�ȭ ���� : " + bro);
    }
    #endregion

    #region ���� Ȯ�� (�����)
    private void GetVersionInfo()
    {
        Enqueue(Backend.Utils.GetLatestVersion, callback =>
        {
            if (callback.IsSuccess() == false)
            {
                Debug.LogError("���������� �ҷ����� �� �����Ͽ����ϴ�.\n" + callback);
                return;
            }

            var version = callback.GetReturnValuetoJSON()["version"].ToString();

            Version server = new Version(version);
            Version client = new Version(Application.version);

            var result = server.CompareTo(client);
            if (result == 0)
            {
                // 0 �̸� �� ������ ��ġ
                return;
            }
            else if (result < 0)
            {
                // 0 �̸��̸� server ������ client ���� ����
                // �˼��� �־��� ��� ���⿡ �ش�ȴ�.
                // ex) �˼����� 3.0.0, ���̺꿡 ���ǰ� �ִ� ���� 2.0.0, �ܼ� ���� 2.0.0
                return;
            }
            else
            {
                // 0���� ũ�� server ������ client ���� ����
                if (client == null)
                {
                    // Ŭ���̾�Ʈ�� null�� ��� ����ó��
                    Debug.LogError("Ŭ���̾�Ʈ ���������� null �Դϴ�.");
                    return;
                }
            }

            // ���� ������Ʈ �˾�
            //LoginUI.GetInstance().OpenUpdatePopup();
        });
    }
    #endregion

    #region ��ū���� �α���
    public void BackendTokenLogin(Action<bool, string> func)
    {
        Enqueue(Backend.BMember.LoginWithTheBackendToken, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("��ū �α��� ����");
                loginSuccessFunc = func; //�α��� ���� ���� ������ �Է�

                OnBackendAuthorized(); //���� ���� �ҷ�����
                return;
            }

            Debug.Log("��ū �α��� ����\n" + callback.ToString());
            func(false, string.Empty); //���н� ��ū �ʱ�ȭ
        });
    }
    #endregion

    #region ���� ������̼� �α��� / ȸ������
    public void GoogleAuthorizeFederation(Action<bool, string> func)
    {
#if UNITY_ANDROID //�ȵ���̵� �� ���

        if (Social.localUser.authenticated) // �̹� gpgs �α����� �� ���
        {
            var token = GetFederationToken();
            if (token.Equals(string.Empty)) //��ū�� �������� ���� ���
            {
                Debug.LogError("GPGS ��ū�� �������� �ʽ��ϴ�.");
                func(false, "GPGS ������ �����Ͽ����ϴ�.\nGPGS ��ū�� �������� �ʽ��ϴ�.");
                return;
            }

            Enqueue(Backend.BMember.AuthorizeFederation, token, FederationType.Google, "gpgs ����", callback =>
            {
                if (callback.IsSuccess())
                {
                    Debug.Log("GPGS ���� ����");
                    loginSuccessFunc = func;

                    OnBackendAuthorized(); //���� ���� ���� �ҷ�����
                    return;
                }

                Debug.LogError("GPGS ���� ����\n" + callback.ToString());
                func(false, string.Format(BackendError,
                    callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
            });
        }

        else // gpgs �α����� �ؾ��ϴ� ���
        {
            Social.localUser.Authenticate((bool success) =>
            {
                if (success)
                {
                    var token = GetFederationToken();
                    if (token.Equals(string.Empty))
                    {
                        Debug.LogError("GPGS ��ū�� �������� �ʽ��ϴ�.");
                        func(false, "GPGS ������ �����Ͽ����ϴ�.\nGPGS ��ū�� �������� �ʽ��ϴ�.");
                        return;
                    }

                    Enqueue(Backend.BMember.AuthorizeFederation, token, FederationType.Google, "gpgs ����", callback =>
                    {
                        if (callback.IsSuccess())
                        {
                            Debug.Log("GPGS ���� ����");
                            loginSuccessFunc = func;

                            OnBackendAuthorized(); //���� ���� ���� �ҷ�����
                            return;
                        }

                        Debug.LogError("GPGS ���� ����\n" + callback.ToString());
                        func(false, string.Format(BackendError,
                            callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
                    });
                }
                else
                {
                    Debug.LogError("GPGS �α��� ����");
                    func(false, "GPGS ������ �����Ͽ����ϴ�.\nGPGS �α����� �����Ͽ����ϴ�.");
                    return;
                }
            });
        }
#endif
    }
    #endregion

    #region ���� ������̼� �α��� / ȸ������
    public void AppleAuthorizeFederation(Action<bool, string> func)
    {
#if UNITY_IOS
        loginSuccessFunc = func;
        var siwa = gameObject.GetComponent<SignInWithApple>();
        siwa.Login(AppleFedeCallback);
#endif
    }

#if UNITY_IOS
    private void AppleFedeCallback(SignInWithApple.CallbackArgs args)
    {
        Debug.Log("���� ��ū���� �ڳ��� �α���");
        Enqueue(Backend.BMember.AuthorizeFederation, appleToken, FederationType.Apple, "apple ����", callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("Apple ���� ����");

                OnBackendAuthorized();
                return;
            }

            Debug.LogError("Apple ���� ����\n" + callback.ToString());
            loginSuccessFunc(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
        });

    }
#endif
    #endregion

    #region ���� ��ū �ޱ�
    private string GetFederationToken()
    {
#if UNITY_ANDROID
        if (!PlayGamesPlatform.Instance.localUser.authenticated)
        {
            Debug.LogError("GPGS�� ���ӵǾ����� �ʽ��ϴ�. PlayGamesPlatform.Instance.localUser.authenticated :  fail");
            return string.Empty;
        }
        // ���� ��ū �ޱ�
        string _IDtoken = PlayGamesPlatform.Instance.GetIdToken();
        tempNickName = PlayGamesPlatform.Instance.GetUserDisplayName();
        Debug.Log(tempNickName);
        return _IDtoken;

#elif UNITY_IOS
        return string.Empty;
#else
        return string.Empty;
#endif
    }
    #endregion

    #region �г��� �� �Է�
    public void UpdateNickname(string nickname, Action<bool, string> func)
    {
        Enqueue(Backend.BMember.UpdateNickname, nickname, bro =>
        {
            // �г����� ������ ��ġ���� ������ �ȵ�
            if (!bro.IsSuccess())
            {
                Debug.LogError("�г��� ���� ����\n" + bro.ToString());
                func(false, string.Format(BackendError,
                    bro.GetStatusCode(), bro.GetErrorCode(), bro.GetMessage()));
                return;
            }
            loginSuccessFunc = func;
            OnBackendAuthorized(); //���� ���� ���� �ҷ�����
        });
    }
    #endregion

    #region �Խ�Ʈ �α���
    public void GuestLogin(Action<bool, string> func)
    {
        Enqueue(Backend.BMember.GuestLogin, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("�Խ�Ʈ �α��� ����");
                loginSuccessFunc = func;

                OnBackendAuthorized(); //���� ���� ���� �ҷ�����
                return;
            }

            Debug.Log("�Խ�Ʈ �α��� ����\n" + callback);
            func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
        });
    }
    #endregion

    #region Ŀ���� ȸ������
    public void CustomSignIn(string id, string pw, Action<bool, string> func)
    {
        tempNickName = id;
        Enqueue(Backend.BMember.CustomSignUp, id, pw, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("Ŀ���� ȸ������ ����");
                loginSuccessFunc = func; //�α��� ���� ������ �Է�

                OnBackendAuthorized(); //���� ���� ���� �ҷ�����
                return;
            }

            Debug.LogError("Ŀ���� ȸ������ ����\n" + callback.ToString());
            func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
        });
    }
    #endregion

    #region �α׾ƿ�
    public void LogOut()
    {
        Backend.BMember.Logout();
    }
    #endregion

    #region ���� ���� ���� �ҷ�����
    private void OnBackendAuthorized()
    {
        Enqueue(Backend.BMember.GetUserInfo, callback =>
        {
            if (!callback.IsSuccess())
            {
                Debug.LogError("���� ���� �ҷ����� ����\n" + callback);
                loginSuccessFunc(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
                return;
            }
            Debug.Log("��������\n" + callback);

            var info = callback.GetReturnValuetoJSON()["row"];
            

            if (info["nickname"] == null) //�г��� ���� ���� ��� �г��� ���� UI����
            {
                LoginUI.GetInstance().ActiveNicknameObject();
                return;
            }
            myNickName = info["nickname"].ToString();
            myIndate = info["inDate"].ToString();
            user_ID = info["gamerId"].ToString();

            if (loginSuccessFunc != null)
            {
                InitialUserCheck();
                //GetEquipment();
                //RefreshInfo(loginSuccessFunc);
                //�α��� ���������Ƿ� ��Ī ����Ʈ �� �ҷ���
                BackendMatchManager.GetInstance().GetMatchList(loginSuccessFunc);

                
            }
        });
    }
    #endregion

    //=================================================================================================
    #region �ű� ���� üũ
    public void InitialUserCheck()
    {
        var bro = Backend.GameData.Get("User", new Where());

        if (bro.IsSuccess())
        {
            JsonData userData = bro.GetReturnValuetoJSON()["rows"];
            if (userData.Count == 0)
            {

                Param param = new Param();

                param.Add("Level", 1);
                param.Add("NowEnergy", 20);
                param.Add("MaxEnergy", 20);
                param.Add("Gold", 0);
                param.Add("Diamond", 0);
                param.Add("Head", "������");

                Backend.GameData.Insert("User", param);

                return;
            }
            userIndate = userData[0]["inDate"]["S"].ToString();
        }
    }
    #endregion

    #region ���� ���� ���ΰ�ħ
    public void RefreshInfo()
    {
        Enqueue(Backend.GameData.Get, "User", new Where(), callback =>
        {
            if (callback.IsSuccess())
            {
                LobbyUI.GetInstance().energyAmount = int.Parse(callback.GetReturnValuetoJSON()["rows"][0]["NowEnergy"]["N"].ToString());
                LobbyUI.GetInstance().energyMax = int.Parse(callback.GetReturnValuetoJSON()["rows"][0]["MaxEnergy"]["N"].ToString());
                LobbyUI.GetInstance().GoldText(callback.GetReturnValuetoJSON()["rows"][0]["Gold"]["N"].ToString());
                LobbyUI.GetInstance().DiamondText(callback.GetReturnValuetoJSON()["rows"][0]["Diamond"]["N"].ToString());

                myEquipment.headName = callback.GetReturnValuetoJSON()["rows"][0]["Head"]["S"].ToString();

                LobbyUI.GetInstance().LoadAppQuitTime();
                LobbyUI.GetInstance().SetRechargeScheduler();

            }
            else
            {
                print(callback.GetMessage());
            }
        });
    }
    #endregion

    #region ���� ��Ʈ �ҷ�����
    public void GetShopSheet(Action<bool, string> func)
    {
        Enqueue(Backend.Chart.GetChartContents, shopCode, callback =>
        {
            if (callback.IsSuccess())
            {
                JsonData json = callback.FlattenRows();

                shopSheet = new List<Shop>();
                for(int i = 0; i < json.Count; i++)
                {
                    Shop item = new Shop();
                    item.name = json[i]["Name"].ToString();
                    item.gold = int.Parse(json[i]["Gold"].ToString());
                    item.diamond = int.Parse(json[i]["Diamond"].ToString());
                    item.compensate = json[i]["Compensate"].ToString();

                    shopSheet.Add(item);
                }
                func(true, string.Empty);
            }
            else
            {
                Debug.LogError(callback.GetErrorCode() + ", " + callback.GetMessage());
                func(false, string.Format(BackendError,
                    callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));

            }
        });
    }
    #endregion

    #region ��� ��Ʈ �ҷ�����
    public void GetEquipment(Action<bool, string> func)
    {
        Enqueue(Backend.Chart.GetChartContents, equipmentCode, bro =>
        {
            // ���� �۾�
            if (bro.IsSuccess())
            {

                JsonData json = bro.FlattenRows();

                headEquipment = new List<Equipment>();

                for (int i = 0; i < json.Count; i++)
                {
                    Equipment item = new Equipment();

                    item.name = json[i]["Name"].ToString();
                    item.grade = json[i]["Grade"].ToString();
                    item.bestSpeed = int.Parse(json[i]["BestSpeed"].ToString());
                    item.acceleration = int.Parse(json[i]["Acceleration"].ToString());
                    item.luck = int.Parse(json[i]["Lucky"].ToString());
                    item.power = int.Parse(json[i]["Power"].ToString());
                    item.passive = json[i]["Passive"].ToString();

                    headEquipment.Add(item);
                }

                func(true, string.Empty);
            }
            else
            {
                Debug.LogError(bro.GetErrorCode() + ", " + bro.GetMessage());
                func(false, string.Format(BackendError,
                    bro.GetStatusCode(), bro.GetErrorCode(), bro.GetMessage()));

            }
        });
    }
    #endregion

    #region ��� ����
    public void SetEquipment()
    {
        for(int i = 0; i < headEquipment.Count; i++)
        {
            if(myEquipment.headName == headEquipment[i].name)
            {
                myEquipment.bestSpeed += headEquipment[i].bestSpeed;
                myEquipment.acceleration += headEquipment[i].acceleration;
                myEquipment.luck += headEquipment[i].luck;
                myEquipment.power += headEquipment[i].power;
            }
        }

        print(myEquipment.bestSpeed + ", " + myEquipment.acceleration + ", " + myEquipment.luck + ", " + myEquipment.power);
    }
    #endregion

    #region ������ ����(����)
    public void SaveEnergy(int num, Action<bool, string> func)
    {
        Param param = new Param();
        param.Add("NowEnergy", num);

        Enqueue(Backend.GameData.UpdateV2, "User", userIndate, Backend.UserInDate, param, callback =>
        {
            if (callback.IsSuccess())
            {
                LobbyUI.GetInstance().energyAmount = num;
                RefreshInfo();
                func(true, string.Empty);
            }
            else
            {
                func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
            }
        });
    }
    #endregion

    #region ������ ����
    public void SaveEnergyInfo()
    {
        if(userIndate == string.Empty)
            InitialUserCheck();

        Param param = new Param();
        param.Add("NowEnergy", LobbyUI.GetInstance().energyAmount);
        param.Add("MaxEnergy", LobbyUI.GetInstance().energyMax);

        Enqueue(Backend.GameData.UpdateV2, "User", userIndate, Backend.UserInDate, param, callback =>
        {
            if (callback.IsSuccess())
            {
                LobbyUI.GetInstance().SaveAppQuitTime();
            }
            else
            {
                Debug.LogError(callback.GetErrorCode() + ", " + callback.GetMessage());

            }
        });
    }
    #endregion

    #region ��ȭ ����
    public void SaveGold(int money, Action<bool, string> func)
    {
        Param param = new Param();
        param.Add("Gold", money);

        Enqueue(Backend.GameData.UpdateV2, "User", userIndate, Backend.UserInDate, param, callback =>
        {
            if (callback.IsSuccess())
            {
                LobbyUI.GetInstance().GoldText(money.ToString());
                func(true, string.Empty);
            }
            else
            {
                func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
            }
        });
    }

    public void SaveDiamond(int money, Action<bool, string> func)
    {
        Param param = new Param();
        param.Add("Diamond", money);

        Enqueue(Backend.GameData.UpdateV2, "User", userIndate, Backend.UserInDate, param, callback =>
        {
        if (callback.IsSuccess())
        {
            LobbyUI.GetInstance().DiamondText(money.ToString());
                func(true, string.Empty);
            }
            else
            {
                func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
            }
        });
    }
    #endregion

    void Awake()
    {
        if (instance != null)
        {
            Destroy(instance);
        }
        instance = this;
        // ��� ������ ����
        DontDestroyOnLoad(this.gameObject);
    }

    public static BackendServerManager GetInstance()
    {
        if (instance == null)
        {
            Debug.LogError("BackendServerManager �ν��Ͻ��� �������� �ʽ��ϴ�.");
            return null;
        }

        return instance;
    }

    void Start()
    {
        Initialize(); //���� �ʱ�ȭ
    }

    void Update()
    {
        //�񵿱��Լ� Ǯ��
        Backend.AsyncPoll();
    }

}