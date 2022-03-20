using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ScaleCtrl : MonoBehaviour
{
    /*
     * 배경 = 위치, 크기
     * 팝업창 = 위치, 정비율
     */

    private static ScaleCtrl instance;

    public static ScaleCtrl GetInstance()
    {
        if (instance == null) return null;
        return instance;
    }

    void Awake()
    {
        if (!instance) instance = this;
    }

    void Start()
    {
        GameObject[] temp = GameObject.FindObjectsOfType<GameObject>();

        for (int i = 0; i < temp.Length; i++)
        {
            switch (temp[i].tag)
            {
                case "Background":
                    temp[i].GetComponent<RectTransform>().anchoredPosition *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().y);

                    if (temp[i].GetComponent<VerticalLayoutGroup>() != null || temp[i].GetComponent<HorizontalLayoutGroup>() != null || temp[i].GetComponent<GridLayoutGroup>() != null)
                        temp[i].GetComponent<RectTransform>().localScale *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().y);
                    else temp[i].GetComponent<RectTransform>().sizeDelta *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().y);

                    //텍스트일 경우 폰트 크기 조절
                    if (temp[i].GetComponent<Text>() != null)
                        temp[i].GetComponent<Text>().fontSize = Mathf.FloorToInt(temp[i].GetComponent<Text>().fontSize / Fixed.GetInstance().value);
                    //temp[i].GetComponent<RectTransform>().sizeDelta *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().y);
                    //temp[i].GetComponent<RectTransform>().localScale /= new Vector2(Fixed.GetInstance().value, Fixed.GetInstance().value);
                    break;
                case "Element":
                    temp[i].GetComponent<RectTransform>().anchoredPosition *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);

                    if (temp[i].GetComponent<VerticalLayoutGroup>() != null || temp[i].GetComponent<HorizontalLayoutGroup>() != null || temp[i].GetComponent<GridLayoutGroup>() != null) temp[i].GetComponent<RectTransform>().localScale *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);
                    else temp[i].GetComponent<RectTransform>().sizeDelta *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);

                    //텍스트일 경우 폰트 크기 조절
                    if (temp[i].GetComponent<Text>() != null)
                        temp[i].GetComponent<Text>().fontSize = Mathf.FloorToInt(temp[i].GetComponent<Text>().fontSize / Fixed.GetInstance().value);
                    break;
            }
        }

        switch (SceneManager.GetActiveScene().buildIndex)
        {
            case 0: //로그인
                LoginUI.GetInstance().SetScale();
                break;

            case 1: //로비
                LobbyUI.GetInstance().SetScale();
                break;
        }
    }
}
