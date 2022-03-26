using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * �κ� ȭ�鿡�� �������� ���
 */

public partial class LobbyUI : MonoBehaviour
{
    [Header("< SwipeMenu.cs >")]

    public Toggle[] menuButtons;
    public GameObject mainParent;
    public Scrollbar scrollBar;
    public Scrollbar scrollbar2;
    public float swipeTime = 0.01f;
    public float swipeDistance = 50.0f;

    private float[] scrollPageValues;
    private float valueDistance = 0;
    private int currentPage = 0;
    private int maxPage = 0;
    private float startTouchX;
    private float endTouchX;
    private bool isSwipeMode = false;
    private bool isLoading = false;

    #region ���� ȭ�� ����

    public void SetMainUI()
    {
        //��ũ�� �Ǵ� �������� �� value ���� �����ϴ� �迭 �޸� �Ҵ�
        scrollPageValues = new float[mainParent.transform.childCount];

        //��ũ�� �Ǵ� ������ ������ �Ÿ�
        valueDistance = 1f / (scrollPageValues.Length - 1f);

        //��ũ�� �Ǵ� �������� �� value ��ġ ���� [0 <= value <= 1]
        for (int i = 0; i < scrollPageValues.Length; i++)
            scrollPageValues[i] = valueDistance * i;

        //�ִ� �������� ��
        maxPage = mainParent.transform.childCount;

    }

    public void SetScrollValue(float index)
    {
        scrollbar2.value = index;
    }
    public void SetScrollValue(int index)
    {
        if (index == currentPage) return;
        currentPage = index;
        scrollBar.value = scrollPageValues[index];

        StartCoroutine(OnSwipeOneStep(currentPage));

        SoundManager.GetInstance().PlayEffect(true);
    }
    public void SetScrollBarValue(int index, bool mode = true)
    {
        currentPage = index;

        if (!mode)
            scrollBar.value = scrollPageValues[index];

        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private void UpdateInput()
    {
        if (isSwipeMode) return;

#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
            startTouchX = Input.mousePosition.x;
        else if (Input.GetMouseButtonUp(0))
        {
            endTouchX = Input.mousePosition.x;
            UpdateSwipe();
        }
#endif

#if UNITY_ANDROID
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                //��ġ ���� ����(Swipe ���� ����)
                startTouchX = Input.mousePosition.x;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                //��ġ ���� ���� (Swipe ���� ����)
                endTouchX = Input.mousePosition.x;
                UpdateSwipe();
            }
        }
#endif
    }
    private void UpdateSwipe()
    {
        //�ʹ� ���� �Ÿ��� �������� ���� Swipe X
        if (Mathf.Abs(startTouchX - endTouchX) < swipeDistance)
        {
            //���� �������� Swipe�ؼ� ���ư���
            StartCoroutine(OnSwipeOneStep(currentPage));
            return;
        }

        //Swipe ����
        bool isLeft = startTouchX < endTouchX ? true : false;

        //�̵� ������ ������ ��
        if (isLeft)
        {
            //���� �������� ���� ���̸� ����
            if (currentPage == 0) return;

            //�������� �̵��� ���� ���� �������� 1 ����
            currentPage--;
        }

        //�̵� ������ �������� ��
        else
        {
            //���� �������� ������ ���̸� ����
            if (currentPage == maxPage - 1) return;

            //���������� �̵��� ���� ���� �������� 1 ����
            currentPage++;
        }

        //currentIndex ��° �������� Swipe�ؼ� �̵�
        StartCoroutine(OnSwipeOneStep(currentPage));
    }

    private IEnumerator OnSwipeOneStep(int index)
    {
        float start = scrollBar.value;
        float current = 0;
        float percent = 0;

        isSwipeMode = true;

        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / swipeTime;

            scrollBar.value = Mathf.Lerp(start, scrollPageValues[index], percent);
            menuButtons[currentPage].isOn = true;
            yield return null;
        }

        isSwipeMode = false;
    }

    public void MoveMenu(Toggle toggle)
    {
        if (!isLoading) return;
        if (toggle.isOn)
        {
            switch (toggle.name)
            {
                case "ShopButton":
                    
                    SetScrollBarValue(0);
                    break;
                case "HomeButton":
                    SetScrollBarValue(1);

                    break;
                case "SettingButton":
                    SetScrollBarValue(2);

                    break;
            }
        }
    }
    #endregion
}
