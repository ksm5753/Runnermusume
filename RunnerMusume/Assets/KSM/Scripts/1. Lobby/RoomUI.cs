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

    #region ���� ����
    public void MakeRoom()
    {
        //��ġ ������ ���� ���� ��û
        if (BackendMatchManager.GetInstance().CreateMatchRoom())
        {
            SetLoadingObject(true);
        }
    }
    #endregion

    #region ���� ���� ������ ���ϰ�
    public void RoomResult(bool isSuccess, List<MatchMakingUserInfo> userList = null)
    {
        //���� ���� ������
        if (isSuccess)
        {
            SetLoadingObject(false);
            print("���� ���� ����");

            if (loadingObject.activeSelf)
                return;
            BackendMatchManager.GetInstance().RequestMatchMaking(0);
        }
    }
    #endregion

    #region ��Ī ���
    public void CancelMatch()
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf)
            return;

        BackendMatchManager.GetInstance().CancelRequestMatchMaking();
    }
    #endregion

    #region ��Ī ��û
    public void RequestMatch()
    {
        if (loadingObject.activeSelf || errorObject.activeSelf || matchDonePanel.activeSelf)
            return;

        BackendMatchManager.GetInstance().RequestMatchMaking(0);
    }
    #endregion

    #region ��Ī �Ϸ� �ݹ�
    public void MatchDoneCallback()
    {
        matchRequestPanel.SetActive(false);
        matchDonePanel.SetActive(true);
    }
    #endregion

    #region ��Ī ��û �ݹ�
    public void MatchRequestCallback(bool result)
    {
        matchRequestPanel.SetActive(result);
    }
    #endregion
}
