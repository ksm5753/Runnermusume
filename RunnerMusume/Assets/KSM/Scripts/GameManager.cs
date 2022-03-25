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
    private const string READY = "2. READY";
    #endregion

    public enum GameState { Login, Lobby, Ready};
    private GameState gameState;

    public static GameManager GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;

        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        DontDestroyOnLoad(this.gameObject);
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
        }
    }
    //=======================================================================
    private void ChangeScene(string scene) => SceneManager.LoadScene(scene);
}
