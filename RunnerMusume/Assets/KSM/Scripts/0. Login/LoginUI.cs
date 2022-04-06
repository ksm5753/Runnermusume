using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using Battlehub.Dispatcher;

public class LoginUI : MonoBehaviour
{
    [Header("Start Button")]
    public GameObject startButton; //???? ????

    [Header("Login Object")]
    [Space(10f)]
    public GameObject loginObject; //?????? ??
    public GameObject googleButton;
    public GameObject appleButton;

    [Header("Nickname Object")]
    [Space(10f)]
    public GameObject nicknameObject; //?????? ??
    public InputField nicknameInputField; //?????? ????

    [Space(10f)]
    [Header("Error Object")]
    public GameObject errorObject; //???? ??

    [Space(10f)]
    [Header("Loading Object")]
    public GameObject loadingObject; //???? ??

    private static LoginUI instance;

    public static LoginUI GetInstance()
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
#if UNITY_ANDROID
        googleButton.SetActive(true);
        appleButton.SetActive(false);
#elif UNITY_IOS
        googleButton.SetActive(false);
        appleButton.SetActive(true);
#endif
    }

    //======================================================================
    #region ?????? ????
    public void SetScale()
    {
        loadingObject.SetActive(false);
        errorObject.SetActive(false);

        loginObject.SetActive(false);
        nicknameObject.SetActive(false);
    }
    #endregion
    //======================================================================
    #region ???? ?? ???? ??????
    public void TouchStart()
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().BackendTokenLogin((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (result)
                {
                    //?? ????
                    GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
                    return;
                }
                loadingObject.SetActive(false);
                if (!error.Equals(string.Empty))
                {
                    errorObject.GetComponentInChildren<Text>().text = "???? ???? ???????? ???? \n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                startButton.SetActive(false);
                loginObject.SetActive(true);
                nicknameObject.SetActive(false);
            });
        });
    }
    #endregion
    //======================================================================
    #region ???? ??????
    public void GoogleFederation()
    {
        if (errorObject.activeSelf)
            return;

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GoogleAuthorizeFederation((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "?????? ????\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //???? ?? ????
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region ???? ??????
    public void AppleFederation()
    {
        if (errorObject.activeSelf)
            return;

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().AppleLogin((bool result, string error) =>
        {
            if (!result)
            {
                loadingObject.SetActive(false);
                errorObject.GetComponentInChildren<Text>().text = "?????? ????\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //???? ?? ????
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region ?????? ??????
    public void GuestLogin()
    {
        if (errorObject.activeSelf)
            return;

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().GuestLogin((bool result, string error) =>
        {
            if (!result)
            {
                loadingObject.SetActive(false);
                errorObject.GetComponentInChildren<Text>().text = "?????? ????\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //???? ?? ????
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region ?????? ????
    public void UpdateNickname()
    {
        if (errorObject.activeSelf)
            return;
        string nickname = nicknameInputField.text;
        if (nickname.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "???????? ???? ????????????";
            errorObject.SetActive(true);
            return;
        }
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().UpdateNickname(nickname, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "?????? ???? ????\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //???? ?? ????
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region ?????? ????
    public void ActiveNicknameObject()
    {
        Dispatcher.Current.BeginInvoke(() =>
        {
            startButton.SetActive(false);
            loginObject.SetActive(false);
            errorObject.SetActive(false);
            loadingObject.SetActive(false);
            nicknameObject.SetActive(true);
        });
    }
    #endregion
    //======================================================================
    #region ?????? ????????
    public void SignUp()
    {
        if (errorObject.activeSelf)
        {
            return;
        }
        string id = "1";
        string pw = "1";

        if (id.Equals(string.Empty) || pw.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "ID ???? PW ?? ???? ????????????.";
            errorObject.SetActive(true);
            return;
        }

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().CustomSignIn(id, pw, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (!result)
                {
                    loadingObject.SetActive(false);
                    errorObject.GetComponentInChildren<Text>().text = "???????? ????\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                //???? ?? ????
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
}
