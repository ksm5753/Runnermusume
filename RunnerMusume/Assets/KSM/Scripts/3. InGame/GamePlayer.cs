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

    public GameObject distanceLine;
    public GameObject myIcon;

    //이동 관련
    public bool isMove;
    public bool isRotate;

    public bool isWall;

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

        this.isMove = true;
        this.isRotate = false;
    }

    float rx = 0, fx = 0;

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

        fx = x * 70;
    }

    public void Move()
    {

        if (isWall) return;
        var pos = transform.position + transform.forward * 10 * Time.deltaTime;

        SetPosition(pos);
        SetRotation(transform.localEulerAngles);
    }

    public void Rotate()
    {
        //if (fx.Equals(0))
        //{
        //    isRotate = false;
        //    return;
        //}
        transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(0, rx + fx, 0), Time.deltaTime * 3);
        //transform.localEulerAngles = Quaternion.Slerp(transform.rotation, Quaternion.EulerAngles(0, 0, 0) new Vector3(0, rx + fx, 0), Time.deltaTime * 10);

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

    IEnumerator IsRespawn()
    {
        SetPosition(new Vector3(Random.Range(-2f, 2f), 3, -11));
        transform.localEulerAngles = new Vector3(0, 0, 0);

        isMove = false;
        for(int i = 0; i < 5; i++)
        {
            transform.GetChild(2).gameObject.SetActive(false);
            yield return new WaitForSeconds(.2f);
            transform.GetChild(2).gameObject.SetActive(true);
            yield return new WaitForSeconds(.2f);
        }
        isMove = true;

        yield return null;
    }

    void StopToWall()
    {
        isWall = Physics.Raycast(transform.position, transform.forward, 3, LayerMask.GetMask("Wall"));
    }



    void Update()
    {
        //지도표시
        InGameManager.GetInstance().playersIcon[index].SetValue(this.gameObject, InGameManager.GetInstance().finalObject);

        if (GameManager.GetInstance().gameState != GameManager.GameState.Start) return;

        //플레이어가 리스폰 애니매이션 발동중이 아닐때
        SetMoveAnimation(isMove);


        //플레이어 이동 / 회전 관련
        if (isMove) Move();

        if (isRotate) Rotate();
        else
        {
            rx = transform.localEulerAngles.y + fx;
        }
    }

    void FixedUpdate()
    {
        StopToWall();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Fall"))
        {
            StartCoroutine(IsRespawn());
        }
    }
}
