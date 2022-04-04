using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;

    #region Scene
    private const string LOGIN = "0. Login";
    private const string LOBBY = "1. Lobby";
    private const string READY = "2. Ready";
    private const string INGAME = "3. InGame";
    #endregion

    #region Actions-Events
    public static event Action InGame = delegate { };
    public static event Action AfterInGame = delegate { };
    #endregion

    public enum GameState { Login, Lobby, Ready, InGame, Start};
    public GameState gameState;

    private IEnumerator InGameUpdateCoroutine;

    public static GameManager GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;

        // 60프레임 고정
        Application.targetFrameRate = 60;
        // 게임중 슬립모드 해제
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        DontDestroyOnLoad(this.gameObject);

        InGameUpdateCoroutine = InGameUpdate();
    }
    void Update()
    {
        if(gameState == GameState.Start)
        {
            //InGame();
        }
    }

    IEnumerator InGameUpdate()
    {
        while (true)
        {
            if(gameState != GameState.Start)
            {
                StopCoroutine(InGameUpdateCoroutine);
                yield return null;
            }
            InGame();
            //AfterInGame();
            yield return new WaitForSeconds(.1f);
        }
    }

    //=======================================================================
    public void ChangeState(GameState state)
    {
        gameState = state;
        switch (gameState)
        {
            case GameState.Login:
                ChangeScene(LOGIN);
                break;
            case GameState.Lobby:
                ChangeScene(LOBBY);
                break;
            case GameState.Ready:
                ChangeScene(READY);
                break;
            case GameState.InGame:
                ChangeScene(INGAME);
                break;
            case GameState.Start:
                StartCoroutine(InGameUpdateCoroutine);
                break;
        }
    }
    //=======================================================================
    private void ChangeScene(string scene) => SceneManager.LoadScene(scene);
}
