using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;

public partial class BackendMatchManager : MonoBehaviour
{
    //����� �α�
    private string NOTCONNECT_MATCHSERVER = "��ġ ������ ����Ǿ� ���� �ʽ��ϴ�.";
    private string RECONNECT_MATCHSERVER = "��ġ ������ ������ �õ��մϴ�.";
    private string FAIL_CONNECT_MATCHSERVER = "��ġ ���� ���� ���� : {0}";
    private string SUCCESS_CONNECT_MATCHSERVER = "��ġ ���� ���� ����";
    private string SUCCESS_MATCHMAKE = "��Ī ���� : {0}";
    private string SUCCESS_REGIST_MATCHMAKE = "��Ī ��⿭�� ��ϵǾ����ϴ�.";
    private string FAIL_REGIST_MATCHMAKE = "��Ī ���� : {0}";
    private string CANCEL_MATCHMAKE = "��Ī ��û ��� : {0}";
    private string INVAILD_MATCHTYPE = "�߸��� ��ġ Ÿ���Դϴ�.";
    private string INVAILD_MODETYPE = "�߸��� ��� Ÿ���Դϴ�.";
    private string INVAILD_OPERATION = "�߸��� ��û�Դϴ�\n{0}";
    private string EXCEPTION_OCCUR = "���� �߻� : {0}\n�ٽ� ��Ī�� �õ��մϴ�.";


    #region ��Ī ���� ���� ���� ���ϰ�
    private void ProcessAccessMatchMakingServer(ErrorInfo errInfo)
    {
        //���� ���н�
        if (errInfo != ErrorInfo.Success)
            isConnectMatchServer = false;

        if (!isConnectMatchServer) //������ ���� �������
            print("���� ���� : " + string.Format(FAIL_CONNECT_MATCHSERVER, errInfo.ToString()));
        else //������ ������ ���
            print("���� ���� : " + string.Format(SUCCESS_CONNECT_MATCHSERVER, errInfo.ToString()));
    }
    #endregion

    #region ��Ī ��û ���� ���ϰ�
    /*
     * ��Ī ��û�� ���� ���ϰ� (ȣ��Ǵ� ����)
     * ��Ī ��û �������� ��
     * ��Ī �������� ��
     * ��Ī ��û �������� ��
     */
    private void ProcessMatchMakingResponse(MatchMakingResponseEventArgs args)
    {
        string debugLog = string.Empty;
        switch (args.ErrInfo)
        {
            case ErrorCode.Success:
                //��Ī �������� ��
                debugLog = string.Format(SUCCESS_MATCHMAKE, args.Reason);
                LobbyUI.GetInstance().MatchDoneCallback();
                ProcessMatchSuccess(args);
                break;

            case ErrorCode.Match_InProgress:
                //��Ī ��û �������� �� or ��Ī ���� �� ��Ī ��û�� �õ����� ��
                if (args.Reason == string.Empty)
                {
                    debugLog = SUCCESS_REGIST_MATCHMAKE;

                    LobbyUI.GetInstance().MatchRequestCallback(true);
                }
                break;

            case ErrorCode.Match_MatchMakingCanceled:
                //��Ī ��û�� ��ҵǾ��� ��
                debugLog = string.Format(CANCEL_MATCHMAKE, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                LeaveMatchRoom();
                break;

            case ErrorCode.Match_InvalidMatchType:
                //��ġ Ÿ���� �߸� �������� ��
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVAILD_MATCHTYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Match_InvalidModeType:
                //��ġ ��带 �߸� �������� ��
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVAILD_MODETYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.InvalidOperation:
                //�߸��� ��û�� �������� ��
                debugLog = string.Format(INVAILD_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Match_Making_InvalidRoom:
                //���� �ο��� �� �ο����� ���� ������ ��
                debugLog = string.Format(INVAILD_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Exception:
                //��Ī �ǰ� �������� �� ������ �� ���� �߻��� ��
                //�� ��� �ٽ� ��Ī ��û�ؾ���
                debugLog = string.Format(EXCEPTION_OCCUR, args.Reason);

                LobbyUI.GetInstance().RequestMatch();
                break;
        }

        if (!debugLog.Equals(string.Empty))
        {
            Debug.Log("ProcessMatchMakingResponse - " + debugLog);
        }
    }
    #endregion

    #region ��Ī ��û ���������ν� �ΰ��� ���� ���� ���� ���ϰ�
    private void ProcessMatchSuccess(MatchMakingResponseEventArgs args)
    {
        ErrorInfo errorInfo;
        if(sessionIdList != null)
        {
            print("ProcessMatchSuccess - ���� ���� ���� ����");
            sessionIdList.Clear();
        }

        if (!Backend.Match.JoinGameServer(args.RoomInfo.m_inGameServerEndPoint.m_address, args.RoomInfo.m_inGameServerEndPoint.m_port, false, out errorInfo))
            Debug.LogError("ProcessMatchSuccess - " + string.Format(FAIL_ACCESS_INGAME));

        //���ڰ����� �ΰ��� ����ū�� �����صξ�� �Ѵ�.
        //�ΰ��� �������� �뿡 ������ �� �ʿ�
        //1�� ���� ��� ������ �뿡 �������� ������ �ش� ���� �ı���.
        isConnectInGameServer = true;
        isJoinGameRoom = false;
        inGameRoomToken = args.RoomInfo.m_inGameRoomToken;
        isSandBoxGame = args.RoomInfo.m_enableSandbox;

        var info = GetMatchInfo(args.MatchCardIndate);
        if (info == null)
        {
            Debug.LogError("ProcessMatchSuccess - ��ġ ������ �ҷ����� �� �����߽��ϴ�.");
            return;
        }

    }
    #endregion

    //=================================================================================

    #region ��Ī ���� ����
    public void JoinMatchServer()
    {
        if (isConnectMatchServer) return;

        isConnectMatchServer = true;

        ErrorInfo errorInfo;
        if (!Backend.Match.JoinMatchMakingServer(out errorInfo))
            Debug.LogError("JoinMatchServer - " + string.Format(FAIL_CONNECT_MATCHSERVER, errorInfo.ToString()));
    }
    #endregion

    #region ��Ī ���� ���� ����
    public void LeaveMatchServer()
    {
        isConnectMatchServer = false;
        Backend.Match.LeaveMatchMakingServer();
    }
    #endregion

    #region ��Ī ���� �����
    public bool CreateMatchRoom()
    {
        //��Ī ������ ����Ǿ� ���� ������ ��Ī ���� ����
        if (!isConnectMatchServer)
        {
            print("������ ����Ǿ� �����ʾ� ������");
            JoinMatchServer();
            return false;
        }

        print("�� ���� ��û�� ������ ����");
        Backend.Match.CreateMatchRoom();
        return true;
    }
    #endregion

    #region ��Ī ���� ������
    public void LeaveMatchRoom() => Backend.Match.LeaveMatchRoom();
    #endregion

    #region ��Ī ��û�ϱ�
    //MatchType ( 1:1 / ������ / ����)
    //MatchModeType ( ���� / ����Ʈ / MMR )
    public void RequestMatchMaking(int index)
    {
        //��Ī ������ ����Ǿ� ���� ������ ��Ī ���� ����
        if (!isConnectMatchServer)
        {
            print("��Ī ������ ����Ǿ� ���� �ʾ� ������");
            JoinMatchServer();
            return;
        }

        //���� �ʱ�ȭ
        isConnectInGameServer = false;

        Backend.Match.RequestMatchMaking(matchInfos[index].matchType, matchInfos[index].matchModeType, matchInfos[index].inDate);

        //�ΰ��� ���� ���ӵǾ� ���� ��츦 ����� �ΰ��� ���� ������ ȣ��
        if (isConnectInGameServer)
            Backend.Match.LeaveGameServer();
    }
    #endregion

    #region ��Ī ��û ����ϱ�
    public void CancelRequestMatchMaking() => Backend.Match.CancelMatchMaking();
    #endregion
}
