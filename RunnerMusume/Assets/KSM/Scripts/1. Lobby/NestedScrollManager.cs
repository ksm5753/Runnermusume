using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class NestedScrollManager : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    private static NestedScrollManager instance;

    [Header("< Main Scroll >")]
    public Slider tabSlider;
    public RectTransform[] BtnRect, BtnImageRect;

    public Scrollbar scrollbar;
    public Transform contentTr;

    const int SIZE = 5;
    float[] pos = new float[SIZE];
    float distance, curPos, targetPos;
    public bool isDrag;
    int targetIndex;

    void Awake()
    {
        if (!instance) instance = this;
    }

    public static NestedScrollManager GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        curPos = SetPos();
    }

    public void OnDrag(PointerEventData eventData)
    {
        isDrag = true;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        isDrag = false;

        targetPos = SetPos();

        //���ݰŸ��� ���� �ʾƵ� ���콺�� ������ �̵��ϸ�
        if(curPos == targetPos)
        {
            // �������� ������ ��ǥ�� �ϳ� ����
            if (eventData.delta.x > 18 && curPos - distance >= 0)
            {
                --targetIndex;
                targetPos = curPos - distance;
            }
            //���������� ������ ��ǥ�� �ϳ� ����
            else if (eventData.delta.x < -18 && curPos + distance <= 1.01f)
            {
                ++targetIndex;
                targetPos = curPos + distance;
            }
        }

        //��ǥ�� ���� ��ũ���̰�, ������ �ŰܿԴٸ� ���� ��ũ���� �� ���� �ø�
        for(int i = 0; i < SIZE; i++)
        {
            if (contentTr.GetChild(i).GetComponent<CCCC>() && curPos != pos[i] && targetPos == pos[i])
                contentTr.GetChild(i).GetChild(1).GetComponent<Scrollbar>().value = 1;
        }
    }

    public void SetScale()
    {
        distance = 1f / (SIZE - 1);
        for (int i = 0; i < SIZE; i++)
            pos[i] = distance * i;

        TabClick(2);
    }

    private float SetPos()
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
            {
                targetIndex = i;
                return pos[i];
            }
        }
        return 0;
    }

    void Update()
    {
        tabSlider.value = scrollbar.value;

        if (!isDrag)
            scrollbar.value = Mathf.Lerp(scrollbar.value, targetPos, 0.1f);

        //��ǥ ��ư�� ũ�Ⱑ Ŀ��
        for (int i = 0; i < SIZE; i++)
            BtnRect[i].sizeDelta = new Vector2(i == targetIndex ? 360 : 180, BtnRect[i].sizeDelta.y);

        if (Time.time < 0.1f) return;

        for(int i = 0; i < SIZE; i++)
        {
            Vector3 BtnTargetPos = BtnRect[i].anchoredPosition3D;
            Vector3 BtnTargetScale = Vector3.one;
            bool isActive = false;

            if (i == targetIndex)
            {
                BtnTargetPos.y = -23f;
                BtnTargetScale = new Vector3(1.2f, 1.2f, 1);
                isActive = true;
            }

            BtnImageRect[i].anchoredPosition3D = Vector3.Lerp(BtnImageRect[i].anchoredPosition3D, BtnTargetPos, 0.25f);
            BtnImageRect[i].localScale = Vector3.Lerp(BtnImageRect[i].localScale, BtnTargetScale, 0.25f);
            BtnImageRect[i].transform.GetChild(0).gameObject.SetActive(isActive);
            BtnImageRect[i].transform.GetChild(1).gameObject.SetActive(isActive);
        }
    }

    public void TabClick(int n)
    {
        targetIndex = n;
        targetPos = pos[n];
        for (int i = 0; i < SIZE; i++)
        {
            if (contentTr.GetChild(i).GetComponent<CustomScrollRect>() && curPos != pos[i] && targetPos == pos[i])
                contentTr.GetChild(i).GetChild(1).GetComponent<Scrollbar>().value = 1;
        }
    }

    public void SetScroll(float num)
    {
        contentTr.GetChild(0).GetChild(1).GetComponent<Scrollbar>().value = num;
    }
}
