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
        //GameManager.InGame += MobileInput; //È¸Àü°ª
    }
    private void Update()
    {
        MobileInput();
    }
    void MobileInput()
    {
        if (!virtualStick) return;

        int keyCode = 0;
        isRotate = false;

        if (virtualStick.isInputEnable)
            isRotate = true;

        keyCode |= /*KeyEventCode.ROTATE;*/(isRotate ? KeyEventCode.ROTATE : KeyEventCode.NO_ROTATE);

        if(keyCode <= 0)
        {
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
