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
        GameManager.InGame += MobileInput; //ȸ����
    }

    void MobileInput()
    {
        if (!virtualStick) return;

        int keyCode = 0;
        isRotate = false;

        if (virtualStick.isInputEnable)
            isRotate = true;

        keyCode |= /*KeyEventCode.ROTATE;*/(isRotate ? KeyEventCode.ROTATE : KeyEventCode.NO_ROTATE);
        print("Ű�� : " + keyCode);

        if(keyCode <= 0)
        {
            print("���� ����");
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
