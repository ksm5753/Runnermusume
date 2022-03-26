using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/*
 * 로비 화면에서 스와이프 기능
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

    #region 메인 화면 설정

    public void SetMainUI()
    {
        //스크롤 되는 페이지의 각 value 값을 저장하는 배열 메모리 할당
        scrollPageValues = new float[mainParent.transform.childCount];

        //스크롤 되는 페이지 사이의 거리
        valueDistance = 1f / (scrollPageValues.Length - 1f);

        //스크롤 되는 페이지의 각 value 위치 설정 [0 <= value <= 1]
        for (int i = 0; i < scrollPageValues.Length; i++)
            scrollPageValues[i] = valueDistance * i;

        //최대 페이지의 수
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
                //터치 시작 지점(Swipe 방향 구분)
                startTouchX = Input.mousePosition.x;
            }
            else if (touch.phase == TouchPhase.Ended)
            {
                //터치 종료 지점 (Swipe 방향 구분)
                endTouchX = Input.mousePosition.x;
                UpdateSwipe();
            }
        }
#endif
    }
    private void UpdateSwipe()
    {
        //너무 작은 거리를 움직였을 때는 Swipe X
        if (Mathf.Abs(startTouchX - endTouchX) < swipeDistance)
        {
            //원래 페이지로 Swipe해서 돌아간다
            StartCoroutine(OnSwipeOneStep(currentPage));
            return;
        }

        //Swipe 방향
        bool isLeft = startTouchX < endTouchX ? true : false;

        //이동 방향이 왼쪽일 때
        if (isLeft)
        {
            //현재 페이지가 왼쪽 끝이면 종료
            if (currentPage == 0) return;

            //왼쪽으로 이동을 위해 현재 페이지를 1 감소
            currentPage--;
        }

        //이동 방향이 오른쪽일 때
        else
        {
            //현재 페이지가 오른쪽 끝이면 종료
            if (currentPage == maxPage - 1) return;

            //오른쪽으로 이동을 위해 현재 페이지를 1 증가
            currentPage++;
        }

        //currentIndex 번째 페이지로 Swipe해서 이동
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
