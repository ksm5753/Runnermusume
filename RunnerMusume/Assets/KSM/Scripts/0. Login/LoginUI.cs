using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using Battlehub.Dispatcher;

public class LoginUI : MonoBehaviour
{
    [Header("Start Button")]
    public GameObject startButton; //���� ��ư

    [Header("Login Object")]
    [Space(10f)]
    public GameObject loginObject; //�α��� â
    public GameObject googleButton;
    public GameObject appleButton;

    [Header("Nickname Object")]
    [Space(10f)]
    public GameObject nicknameObject; //�г��� â
    public InputField nicknameInputField; //�г��� �Է�

    [Space(10f)]
    [Header("Error Object")]
    public GameObject errorObject; //���� â

    [Space(10f)]
    [Header("Loading Object")]
    public GameObject loadingObject; //�ε� â

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
    #region �ػ� ����
    public void SetScale()
    {
        loadingObject.SetActive(false);
        errorObject.SetActive(false);

        loginObject.SetActive(false);
        nicknameObject.SetActive(false);
    }
    #endregion
    //======================================================================
    #region ��ġ �� �ڵ� �α���
    public void TouchStart()
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().BackendTokenLogin((bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                if (result)
                {
                    //�� ��ȯ
                    GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
                    return;
                }
                loadingObject.SetActive(false);
                if (!error.Equals(string.Empty))
                {
                    errorObject.GetComponentInChildren<Text>().text = "���� ���� �ҷ����� ���� \n\n" + error;
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
    #region ���� �α���
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
                    errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //�κ� �� �̵�
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region ���� �α���
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
                errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //�κ� �� �̵�
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region �Խ�Ʈ �α���
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
                errorObject.GetComponentInChildren<Text>().text = "�α��� ����\n\n" + error;
                errorObject.SetActive(true);
                return;
            }

            //�κ� �� �̵�
            GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
        });
    }
    #endregion
    //======================================================================
    #region �г��� ����
    public void UpdateNickname()
    {
        if (errorObject.activeSelf)
            return;
        string nickname = nicknameInputField.text;
        if (nickname.Equals(string.Empty))
        {
            errorObject.GetComponentInChildren<Text>().text = "�г����� ���� �Է����ּ���";
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
                    errorObject.GetComponentInChildren<Text>().text = "�г��� ���� ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }

                //�κ� �� �̵�
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
    //======================================================================
    #region �г��� Ȱ��
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
    #region Ŀ���� ȸ������
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
            errorObject.GetComponentInChildren<Text>().text = "ID Ȥ�� PW �� ���� �Է����ּ���.";
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
                    errorObject.GetComponentInChildren<Text>().text = "ȸ������ ����\n\n" + error;
                    errorObject.SetActive(true);
                    return;
                }
                //�κ� �� �̵�
                GameManager.GetInstance().ChangeState(GameManager.GameState.Lobby);
            });
        });
    }
    #endregion
}
