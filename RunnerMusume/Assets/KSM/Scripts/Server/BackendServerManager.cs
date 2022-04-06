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
using System.Text;
#if UNITY_IOS
using AppleAuth;
using AppleAuth.Enums;
using AppleAuth.Extensions;
using AppleAuth.Interfaces;
using AppleAuth.Native;
#endif

public class RankItem //Rank Class
{
    public string nickname { get; set; } // ??????
    public string score { get; set; }    // ????
    public string rank { get; set; }     // ????
}

public class PlayerLevel
{
    public int level;
    public int energyMax;
    public int exp;
    public int gold;
    public int diamond;
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
    public string levelCode = "";

    private static BackendServerManager instance;   // ????????

    private IAppleAuthManager appleAuthManager; 

    private string tempNickName;                        // ?????? ?????? (id?? ????)
    public string myNickName { get; private set; } = string.Empty;  // ???????? ?????? ??????
    public string myIndate { get; private set; } = string.Empty;    // ???????? ?????? inDate
    private Action<bool, string> loginSuccessFunc = null;

    private const string BackendError = "statusCode : {0}\nErrorCode : {1}\nMessage : {2}";

    public string appleToken = ""; // SignInWithApple.cs???? ???????? ???? ??????



    public string userIndate;
    public string user_ID;


    public string rankUuid = "";

    //???? ????
    public List<Equipment> headEquipment = new List<Equipment>();
    public Equipment myEquipment = new Equipment();

    //???? ????
    public List<Shop> shopSheet = new List<Shop>();

    //???? ????
    public List<PlayerLevel> levelSheet = new List<PlayerLevel>();

    //=================================================================================================
    #region ???? ??????
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

#if UNITY_ANDROID //???????????????? ????
            Debug.Log("GoogleHash - " + Backend.Utils.GetGoogleHash());
#endif
#if !UNITY_EDITOR //??????????, iOS ?????????? ????
            GetVersionInfo();

#endif

#if UNITY_IOS
            if (AppleAuthManager.IsCurrentPlatformSupported)
            {
                var deserializer = new PayloadDeserializer();
                appleAuthManager = new AppleAuthManager(deserializer);
            }
#endif
        }
        else Debug.LogError("???? ?????? ???? : " + bro);
    }
#endregion

    public void AppleLogin(Action<bool, string> func)
    {
        var loginArgs = new AppleAuthLoginArgs(LoginOptions.IncludeEmail | LoginOptions.IncludeFullName);

        this.appleAuthManager.LoginWithAppleId(
            loginArgs,
            credential =>
            {
        // Obtained credential, cast it to IAppleIDCredential
        var appleIdCredential = credential as IAppleIDCredential;
                if (appleIdCredential != null)
                {
            // Apple User ID
            // You should save the user ID somewhere in the device
            var userId = appleIdCredential.User;
                    PlayerPrefs.SetString(appleToken, userId);

            // Email (Received ONLY in the first login)
            var email = appleIdCredential.Email;

            // Full name (Received ONLY in the first login)
            var fullName = appleIdCredential.FullName;

            // Identity token
            var identityToken = Encoding.UTF8.GetString(
                        appleIdCredential.IdentityToken,
                        0,
                        appleIdCredential.IdentityToken.Length);

            // Authorization code
            var authorizationCode = Encoding.UTF8.GetString(
                        appleIdCredential.AuthorizationCode,
                        0,
                        appleIdCredential.AuthorizationCode.Length);

                    // And now you have all the information to create/login a user in your system
                    Enqueue(Backend.BMember.AuthorizeFederation, identityToken, FederationType.Apple, "apple ????", callback =>
                    {
                        if (callback.IsSuccess())
                        {
                            loginSuccessFunc = func;
                            Debug.Log("Apple ???? ????");

                            OnBackendAuthorized();
                            return;
                        }

                        Debug.LogError("Apple ???? ????\n" + callback.ToString());
                        loginSuccessFunc(false, string.Format(BackendError,
                            callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
                    });
                }
            },
            error =>
            {
        // Something went wrong
        var authorizationErrorCode = error.GetAuthorizationErrorCode();
            });
    }
    
#region ???? ???? (??????)
    private void GetVersionInfo()
    {
        Enqueue(Backend.Utils.GetLatestVersion, callback =>
        {
            if (callback.IsSuccess() == false)
            {
                Debug.LogError("?????????? ???????? ?? ??????????????.\n" + callback);
                return;
            }

            var version = callback.GetReturnValuetoJSON()["version"].ToString();

            Version server = new Version(version);
            Version client = new Version(Application.version);

            var result = server.CompareTo(client);
            if (result == 0)
            {
                // 0 ???? ?? ?????? ????
                return;
            }
            else if (result < 0)
            {
                // 0 ???????? server ?????? client ???? ????
                // ?????? ?????? ???? ?????? ????????.
                // ex) ???????? 3.0.0, ???????? ???????? ???? ???? 2.0.0, ???? ???? 2.0.0
                return;
            }
            else
            {
                // 0???? ???? server ?????? client ???? ????
                if (client == null)
                {
                    // ???????????? null?? ???? ????????
                    Debug.LogError("?????????? ?????????? null ??????.");
                    return;
                }
            }

            // ???? ???????? ????
            //LoginUI.GetInstance().OpenUpdatePopup();
        });
    }
#endregion

#region ???????? ??????
    public void BackendTokenLogin(Action<bool, string> func)
    {
        Enqueue(Backend.BMember.LoginWithTheBackendToken, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("???? ?????? ????");
                loginSuccessFunc = func; //?????? ???? ???? ?????? ????

                OnBackendAuthorized(); //???? ???? ????????
                return;
            }

            Debug.Log("???? ?????? ????\n" + callback.ToString());
            func(false, string.Empty); //?????? ???? ??????
        });
    }
#endregion

#region ???? ?????????? ?????? / ????????
    public void GoogleAuthorizeFederation(Action<bool, string> func)
    {
#if UNITY_ANDROID //?????????? ?? ????

        if (Social.localUser.authenticated) // ???? gpgs ???????? ?? ????
        {
            var token = GetFederationToken();
            if (token.Equals(string.Empty)) //?????? ???????? ???? ????
            {
                Debug.LogError("GPGS ?????? ???????? ????????.");
                func(false, "GPGS ?????? ??????????????.\nGPGS ?????? ???????? ????????.");
                return;
            }

            Enqueue(Backend.BMember.AuthorizeFederation, token, FederationType.Google, "gpgs ????", callback =>
            {
                if (callback.IsSuccess())
                {
                    Debug.Log("GPGS ???? ????");
                    loginSuccessFunc = func;

                    OnBackendAuthorized(); //???? ???? ???? ????????
                    return;
                }

                Debug.LogError("GPGS ???? ????\n" + callback.ToString());
                func(false, string.Format(BackendError,
                    callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
            });
        }

        else // gpgs ???????? ???????? ????
        {
            Social.localUser.Authenticate((bool success) =>
            {
                if (success)
                {
                    var token = GetFederationToken();
                    if (token.Equals(string.Empty))
                    {
                        Debug.LogError("GPGS ?????? ???????? ????????.");
                        func(false, "GPGS ?????? ??????????????.\nGPGS ?????? ???????? ????????.");
                        return;
                    }

                    Enqueue(Backend.BMember.AuthorizeFederation, token, FederationType.Google, "gpgs ????", callback =>
                    {
                        if (callback.IsSuccess())
                        {
                            Debug.Log("GPGS ???? ????");
                            loginSuccessFunc = func;

                            OnBackendAuthorized(); //???? ???? ???? ????????
                            return;
                        }

                        Debug.LogError("GPGS ???? ????\n" + callback.ToString());
                        func(false, string.Format(BackendError,
                            callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
                    });
                }
                else
                {
                    Debug.LogError("GPGS ?????? ????");
                    func(false, "GPGS ?????? ??????????????.\nGPGS ???????? ??????????????.");
                    return;
                }
            });
        }
#endif
    }
#endregion

#region ???? ???? ????
    private string GetFederationToken()
    {
#if UNITY_ANDROID
        if (!PlayGamesPlatform.Instance.localUser.authenticated)
        {
            Debug.LogError("GPGS?? ???????????? ????????. PlayGamesPlatform.Instance.localUser.authenticated :  fail");
            return string.Empty;
        }
        // ???? ???? ????
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

#region ?????? ?? ????
    public void UpdateNickname(string nickname, Action<bool, string> func)
    {
        Enqueue(Backend.BMember.UpdateNickname, nickname, bro =>
        {
            // ???????? ?????? ???????? ?????? ????
            if (!bro.IsSuccess())
            {
                Debug.LogError("?????? ???? ????\n" + bro.ToString());
                func(false, string.Format(BackendError,
                    bro.GetStatusCode(), bro.GetErrorCode(), bro.GetMessage()));
                return;
            }
            loginSuccessFunc = func;
            OnBackendAuthorized(); //???? ???? ???? ????????
        });
    }
#endregion

#region ?????? ??????
    public void GuestLogin(Action<bool, string> func)
    {
        Enqueue(Backend.BMember.GuestLogin, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("?????? ?????? ????");
                loginSuccessFunc = func;

                OnBackendAuthorized(); //???? ???? ???? ????????
                return;
            }

            Debug.Log("?????? ?????? ????\n" + callback);
            func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
        });
    }
#endregion

#region ?????? ????????
    public void CustomSignIn(string id, string pw, Action<bool, string> func)
    {
        tempNickName = id;
        Enqueue(Backend.BMember.CustomSignUp, id, pw, callback =>
        {
            if (callback.IsSuccess())
            {
                Debug.Log("?????? ???????? ????");
                loginSuccessFunc = func; //?????? ???? ?????? ????

                OnBackendAuthorized(); //???? ???? ???? ????????
                return;
            }

            Debug.LogError("?????? ???????? ????\n" + callback.ToString());
            func(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
        });
    }
#endregion

#region ????????
    public void LogOut()
    {
        Backend.BMember.Logout();
    }
#endregion

#region ???? ???? ???? ????????
    private void OnBackendAuthorized()
    {
        Enqueue(Backend.BMember.GetUserInfo, callback =>
        {
            if (!callback.IsSuccess())
            {
                Debug.LogError("???? ???? ???????? ????\n" + callback);
                loginSuccessFunc(false, string.Format(BackendError,
                callback.GetStatusCode(), callback.GetErrorCode(), callback.GetMessage()));
                return;
            }
            Debug.Log("????????\n" + callback);

            var info = callback.GetReturnValuetoJSON()["row"];
            

            if (info["nickname"] == null) //?????? ???? ???? ???? ?????? ???? UI??????
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
                //?????? ???????????? ???? ?????? ?? ??????
                BackendMatchManager.GetInstance().GetMatchList(loginSuccessFunc);

                
            }
        });
    }
#endregion

    //=================================================================================================
#region ???? ???? ????
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
                param.Add("Exp", 0);
                param.Add("NowEnergy", 20);
                param.Add("MaxEnergy", 20);
                param.Add("Gold", 0);
                param.Add("Diamond", 0);
                param.Add("Head", "??????");

                Backend.GameData.Insert("User", param);

                return;
            }
            userIndate = userData[0]["inDate"]["S"].ToString();
        }
    }
#endregion

#region ???? ???? ????????
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

                LobbyUI.GetInstance().level = int.Parse(callback.GetReturnValuetoJSON()["rows"][0]["Level"]["N"].ToString());
                LobbyUI.GetInstance().expAmount = int.Parse(callback.GetReturnValuetoJSON()["rows"][0]["Exp"]["N"].ToString());

                print(LobbyUI.GetInstance().expAmount);

                foreach(var level in levelSheet)
                {
                    if (level.level == LobbyUI.GetInstance().level)
                    {
                        LobbyUI.GetInstance().expMax = level.exp;
                    }
                }

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

#region ???? ???? ????????
    public void GetLevelSheet(Action<bool, string> func)
    {
        Enqueue(Backend.Chart.GetChartContents, levelCode, callback =>
        {
            if (callback.IsSuccess())
            {
                JsonData json = callback.FlattenRows();

                levelSheet = new List<PlayerLevel>();
                for (int i = 0; i < json.Count; i++)
                {
                    PlayerLevel ls = new PlayerLevel();
                    ls.level = int.Parse(json[i]["Level"].ToString());
                    ls.energyMax = int.Parse(json[i]["Emax"].ToString());
                    ls.exp = int.Parse(json[i]["Exp"].ToString());
                    ls.gold = int.Parse(json[i]["Gold"].ToString());
                    ls.diamond = int.Parse(json[i]["Diamond"].ToString());


                    levelSheet.Add(ls);
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

#region ???? ???? ????????
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

#region ???? ???? ????????
    public void GetEquipment(Action<bool, string> func)
    {
        Enqueue(Backend.Chart.GetChartContents, equipmentCode, bro =>
        {
            // ???? ????
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

#region ???? ????
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

#region ?????? ????(????)
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

#region ?????? ????
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

#region ???? ????
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
        // ???? ?????? ????
        DontDestroyOnLoad(this.gameObject);
    }

    public static BackendServerManager GetInstance()
    {
        if (instance == null)
        {
            Debug.LogError("BackendServerManager ?????????? ???????? ????????.");
            return null;
        }

        return instance;
    }

    void Start()
    {
        Initialize(); //???? ??????
    }

    void Update()
    {
        //?????????? ????
        Backend.AsyncPoll();

        if (this.appleAuthManager != null)
        {
            this.appleAuthManager.Update();
        }
    }

}