using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using BackEnd.Tcp;

public partial class BackendMatchManager : MonoBehaviour
{
    //디버그 로그
    private string NOTCONNECT_MATCHSERVER = "매치 서버에 연결되어 있지 않습니다.";
    private string RECONNECT_MATCHSERVER = "매치 서버에 접속을 시도합니다.";
    private string FAIL_CONNECT_MATCHSERVER = "매치 서버 접속 실패 : {0}";
    private string SUCCESS_CONNECT_MATCHSERVER = "매치 서버 접속 성공";
    private string SUCCESS_MATCHMAKE = "매칭 성공 : {0}";
    private string SUCCESS_REGIST_MATCHMAKE = "매칭 대기열에 등록되었습니다.";
    private string FAIL_REGIST_MATCHMAKE = "매칭 실패 : {0}";
    private string CANCEL_MATCHMAKE = "매칭 신청 취소 : {0}";
    private string INVAILD_MATCHTYPE = "잘못된 매치 타입입니다.";
    private string INVAILD_MODETYPE = "잘못된 모드 타입입니다.";
    private string INVAILD_OPERATION = "잘못된 요청입니다\n{0}";
    private string EXCEPTION_OCCUR = "예외 발생 : {0}\n다시 매칭을 시도합니다.";


    #region 매칭 서버 접속 관련 리턴값
    private void ProcessAccessMatchMakingServer(ErrorInfo errInfo)
    {
        //접속 실패시
        if (errInfo != ErrorInfo.Success)
            isConnectMatchServer = false;

        if (!isConnectMatchServer) //접속이 되지 않을경우
            print("접속 오류 : " + string.Format(FAIL_CONNECT_MATCHSERVER, errInfo.ToString()));
        else //접속이 성공할 경우
            print("접속 성공 : " + string.Format(SUCCESS_CONNECT_MATCHSERVER, errInfo.ToString()));
    }
    #endregion

    #region 매칭 신청 관련 리턴값
    /*
     * 매칭 신청에 대한 리턴값 (호출되는 종류)
     * 매칭 신청 성공했을 때
     * 매칭 성공했을 때
     * 매칭 신청 실패했을 때
     */
    private void ProcessMatchMakingResponse(MatchMakingResponseEventArgs args)
    {
        string debugLog = string.Empty;
        switch (args.ErrInfo)
        {
            case ErrorCode.Success:
                //매칭 성사했을 때
                debugLog = string.Format(SUCCESS_MATCHMAKE, args.Reason);
                LobbyUI.GetInstance().MatchDoneCallback();
                ProcessMatchSuccess(args);
                break;

            case ErrorCode.Match_InProgress:
                //매칭 신청 성공했을 때 or 매칭 중일 때 매칭 신청을 시도했을 때
                if (args.Reason == string.Empty)
                {
                    debugLog = SUCCESS_REGIST_MATCHMAKE;

                    LobbyUI.GetInstance().MatchRequestCallback(true);
                }
                break;

            case ErrorCode.Match_MatchMakingCanceled:
                //매칭 신청이 취소되었을 때
                debugLog = string.Format(CANCEL_MATCHMAKE, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                LeaveMatchRoom();
                break;

            case ErrorCode.Match_InvalidMatchType:
                //매치 타입을 잘못 전송했을 때
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVAILD_MATCHTYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Match_InvalidModeType:
                //매치 모드를 잘못 전송했을 때
                debugLog = string.Format(FAIL_REGIST_MATCHMAKE, INVAILD_MODETYPE);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.InvalidOperation:
                //잘못된 요청을 전송했을 때
                debugLog = string.Format(INVAILD_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Match_Making_InvalidRoom:
                //대기방 인원이 팀 인원보다 많이 존재할 때
                debugLog = string.Format(INVAILD_OPERATION, args.Reason);

                LobbyUI.GetInstance().MatchRequestCallback(false);
                break;

            case ErrorCode.Exception:
                //매칭 되고 서버에서 방 생성할 때 에러 발생할 때
                //이 경우 다시 매칭 신청해야함
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

    #region 매칭 신청 성공함으로써 인게임 서버 접속 관련 리턴값
    private void ProcessMatchSuccess(MatchMakingResponseEventArgs args)
    {
        ErrorInfo errorInfo;
        if(sessionIdList != null)
        {
            print("ProcessMatchSuccess - 이전 세션 저장 정보");
            sessionIdList.Clear();
        }

        if (!Backend.Match.JoinGameServer(args.RoomInfo.m_inGameServerEndPoint.m_address, args.RoomInfo.m_inGameServerEndPoint.m_port, false, out errorInfo))
            Debug.LogError("ProcessMatchSuccess - " + string.Format(FAIL_ACCESS_INGAME));

        //인자값에서 인게임 룸토큰을 저장해두어야 한다.
        //인게임 서버에서 룸에 접속할 때 필요
        //1분 내에 모든 유저가 룸에 접속하지 않으면 해당 룸은 파괴됨.
        isConnectInGameServer = true;
        isJoinGameRoom = false;
        inGameRoomToken = args.RoomInfo.m_inGameRoomToken;
        isSandBoxGame = args.RoomInfo.m_enableSandbox;

        var info = GetMatchInfo(args.MatchCardIndate);
        if (info == null)
        {
            Debug.LogError("ProcessMatchSuccess - 매치 정보를 불러오는 데 실패했습니다.");
            return;
        }

    }
    #endregion

    //=================================================================================

    #region 매칭 서버 접속
    public void JoinMatchServer()
    {
        if (isConnectMatchServer) return;

        isConnectMatchServer = true;

        ErrorInfo errorInfo;
        if (!Backend.Match.JoinMatchMakingServer(out errorInfo))
            Debug.LogError("JoinMatchServer - " + string.Format(FAIL_CONNECT_MATCHSERVER, errorInfo.ToString()));
    }
    #endregion

    #region 매칭 서버 접속 종료
    public void LeaveMatchServer()
    {
        isConnectMatchServer = false;
        Backend.Match.LeaveMatchMakingServer();
    }
    #endregion

    #region 매칭 대기방 만들기
    public bool CreateMatchRoom()
    {
        //매칭 서버에 연결되어 있지 않으면 매칭 서버 접속
        if (!isConnectMatchServer)
        {
            print("서버에 연결되어 있지않아 재접속");
            JoinMatchServer();
            return false;
        }

        print("방 생성 요청을 서버로 보냄");
        Backend.Match.CreateMatchRoom();
        return true;
    }
    #endregion

    #region 매칭 대기방 나가기
    public void LeaveMatchRoom() => Backend.Match.LeaveMatchRoom();
    #endregion

    #region 매칭 신청하기
    //MatchType ( 1:1 / 개인전 / 팀전)
    //MatchModeType ( 랜덤 / 포인트 / MMR )
    public void RequestMatchMaking(int index)
    {
        //매칭 서버에 연결되어 있지 않으면 매칭 서버 접속
        if (!isConnectMatchServer)
        {
            print("매칭 서버에 연결되어 있지 않아 재접속");
            JoinMatchServer();
            return;
        }

        //변수 초기화
        isConnectInGameServer = false;

        Backend.Match.RequestMatchMaking(matchInfos[index].matchType, matchInfos[index].matchModeType, matchInfos[index].inDate);

        //인게임 서버 접속되어 있을 경우를 대비해 인게임 서버 나가기 호출
        if (isConnectInGameServer)
            Backend.Match.LeaveGameServer();
    }
    #endregion

    #region 매칭 신청 취소하기
    public void CancelRequestMatchMaking() => Backend.Match.CancelMatchMaking();
    #endregion
}
