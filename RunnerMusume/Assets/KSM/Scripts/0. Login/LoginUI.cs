using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using Battlehub.Dispatcher;

public class LoginUI : MonoBehaviour
{
    [Header("Start Button")]
    public GameObject startButton; //시작 버튼

    [Header("Login Object")]
    [Space(10f)]
    public GameObject loginObject; //로그인 창
    public GameObject googleButton;
    public GameObject appleButton;

    [Header("Nickname Object")]
    [Space(10f)]
    public GameObject nicknameObject; //닉네임 창
    public InputField nicknameInputField; //닉네임 입력

    [Space(10f)]
    [Header("Error Object")]
    public GameObject errorObject; //에러 창

    [Space(10f)]
    [Header("Loading Object")]
    public GameObject loadingObject; //로딩 창

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
#if UNITY_ANDROID || UNITY_EDITOR
        googleButton.SetActive(true);
        appleButton.SetActive(false);
#elif UNITY_IOS
        googleButton.SetActive(false);
        appleButton.SetActive(true);
#endif
    }

    //======================================================================
    #region 해상도 대응
    public void SetScale()
    {
        loadingObject.SetActive(false);
        errorObject.SetActive(false);

        loginObject.SetActive(false);
        nicknameObject.SetActive(false);
    }
    #endregion
    //======================================================================
    #region 터치 후 자동 로그인
    public void TouchStart()
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().BackendTokenLogin((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (result)
                {
                    //씬 전환
                    GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
                    return;
                }
                loadingObject.SetActive(false);
                if (!error.Equals(string.Empty))
                {
                    errorObject.GetComponentInChildren<Text>().text = "유저 정보 불러오기 실패 \n\n" + error;
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
    #region 구글 로그인
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
                    errorObject.GetComponentInChildren<Text>().text = "로그인 에러\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //로비 씬 이동
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region 애플 로그인
    public void AppleFederation()
    {
        if (errorObject.activeSelf)
            return;

        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().AppleAuthorizeFederation((bool result, string error) =>
        {
            if (!result)
            {
                loadingObject.SetActive(false);
                errorObject.GetComponentInChildren<Text>().text = "로그인 에러\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //로비 씬 이동
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region 게스트 로그인
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
                errorObject.GetComponentInChildren<Text>().text = "로그인 에러\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //로비 씬 이동
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region 닉네임 설정
    public void UpdateNickname()
    {
        if (errorObject.activeSelf)
            return;
        string nickname = nicknameInputField.text;
        if (nickname.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "닉네임을 먼저 입력해주세요";
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
                    errorObject.GetComponentInChildren<Text>().text = "닉네임 생성 오류\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //로비 씬 이동
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region 닉네임 활성
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
    #region 커스텀 회원가입
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
            errorObject.GetComponentInChildren<Text>().text = "ID 혹은 PW 를 먼저 입력해주세요.";
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
                    errorObject.GetComponentInChildren<Text>().text = "회원가입 에러\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                //로비 씬 이동
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
}
