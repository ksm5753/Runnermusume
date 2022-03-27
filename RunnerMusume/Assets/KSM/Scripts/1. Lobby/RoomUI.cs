using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;
using UnityEngine.UI;
using Battlehub.Dispatcher;

public partial class LobbyUI : MonoBehaviour
{
    [Space(25f)]
    [Header("< Match Room Panel >")]
    public GameObject matchRequestPanel;
    public GameObject matchDonePanel;

    #region 대기방 생성
    public void MakeRoom()
    {
        //매치 서버에 대기방 생성 요청
        if (BackendMatchManager.GetInstance().CreateMatchRoom())
        {
            SetLoadingObject(true);
        }
    }
    #endregion

    #region 대기방 생성 성공시 리턴값
    public void RoomResult(bool isSuccess, List<MatchMakingUserInfo> userList = null)
    {
        //대기방 생성 성공시
        if (isSuccess)
        {
            SetLoadingObject(false);
            print("대기방 생성 성공");

            if (loadingObject.activeSelf)
                return;
            //BackendMatchManager.GetInstance().RequestMatchMaking(0);
        }
    }
    #endregion

    #region 대기방 나가기
    public void LeaveReadyRoom() => BackendMatchManager.GetInstance().LeaveMatchRoom();
    #endregion

    #region 매칭 취소
    public void CancelMatch()
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf)
            return;

        BackendMatchManager.GetInstance().CancelRequestMatchMaking();
    }
    #endregion

    #region 매칭 요청
    public void RequestMatch(int num)
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf)
            return;

        string title = "";
        switch (num)
        {
            case 0:
                title = "일반 대전";
                break;
            case 1:
                title = "랭킹전";
                break;
        }
        matchRequestPanel.GetComponentsInChildren<Text>()[0].text = title;
        BackendMatchManager.GetInstance().RequestMatchMaking(num);
    }
    #endregion

    #region 매칭 완료 콜백
    public void MatchDoneCallback()
    {
        matchRequestPanel.SetActive(false);
        matchDonePanel.SetActive(true);
    }
    #endregion

    #region 매칭 요청 콜백
    public void MatchRequestCallback(bool result)
    {
        matchRequestPanel.SetActive(result);
    }
    #endregion
}
