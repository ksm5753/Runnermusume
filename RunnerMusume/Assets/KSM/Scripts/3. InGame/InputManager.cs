using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Protocol;

public class InputManager : MonoBehaviour
{
    private bool isRotate = false;

    public Movement_Joystick virtualStick;

    void Start()
    {
        GameManager.InGame += MobileInput; //회전값
    }

    void MobileInput()
    {
        if (!virtualStick) return;

        int keyCode = 0;
        isRotate = false;

        if (virtualStick.isInputEnable)
            isRotate = true;

        keyCode |= /*KeyEventCode.ROTATE;*/(isRotate ? KeyEventCode.ROTATE : KeyEventCode.NO_ROTATE);
        print("키값 : " + keyCode);

        if(keyCode <= 0)
        {
            print("동작 없음");
            return;
        }


        KeyMessage msg = new KeyMessage(keyCode, virtualStick.joystickVec.x);
        if (BackendMatchManager.GetInstance().IsHost())
        {
            BackendMatchManager.GetInstance().AddMsgToLocalQueue(msg);
        }
        else
        {
            BackendMatchManager.GetInstance().SendDataToInGame(msg);
        }
    }
}
