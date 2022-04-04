using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using BackEnd.Tcp;

public class GamePlayer : MonoBehaviour
{
    Animator anim;


    private SessionId index = 0;
    private string nickName = string.Empty;
    private bool isMe = false;

    //UI
    public TextMesh nicknameText;

    //이동 관련
    public bool isMove;
    public bool isRotate;

    public double moveVector;

    void Awake()
    {
        anim = GetComponent<Animator>();
    }

    public void Initialize(bool isMe, SessionId index, string nickName)
    {
        this.isMe = isMe;
        this.index = index;
        this.nickName = nickName;

        nicknameText.text = nickName;

        var CM = GameObject.FindWithTag("PlayerCamera").GetComponent<CinemachineVirtualCamera>();

        if (this.isMe)
        {
            CM.Follow = this.transform.GetChild(0);
            CM.LookAt = this.transform.GetChild(0);

            //Camera.main.GetComponent<FollowCamera>().target = this.transform;
        }

        this.isMove = false;
        this.isRotate = false;
        this.moveVector = 0;
    }

    float fx = 0;

    public void SetRotateVector(float x)
    {
        if (x.Equals(0))
        {
            isRotate = false;
        }
        else
        {
            isRotate = true;
        }

        fx += x * 10;
    }

    public void Move()
    {
        var pos = transform.position + transform.forward * 10 * Time.deltaTime;

        SetPosition(pos);
    }

    public void Rotate()
    {
        if (fx.Equals(0))
        {
            isRotate = false;
            return;
        }

        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(0, fx, 0), Time.deltaTime * 10);


    }

    public void SetPosition(Vector3 pos)
    {
        transform.position = pos;
    }

    public Vector3 GetPosition()
    {
        return transform.position;
    }

    public void SetRotation(Vector3 pos)
    {
        transform.transform.rotation = Quaternion.Euler(pos);

    }

    public Vector3 GetRotation()
    {
        //return gameObject.transform.rotation;
        return gameObject.transform.rotation.eulerAngles;
    }

    public void SetMoveAnimation(bool isMove)
    {
        anim.SetBool("isMove", isMove);
    }

    

    void Update()
    {

        SetMoveAnimation(isMove);
        if (isMove) Move();

        if (isRotate) Rotate();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Fall"))
        {
            print("바닥");
            SetPosition(new Vector3(0, 3, -11));
        }
    }
}
