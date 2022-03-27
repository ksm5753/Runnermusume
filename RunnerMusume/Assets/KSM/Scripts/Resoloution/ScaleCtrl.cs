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
                case "Element2":
                    temp[i].GetComponent<RectTransform>().anchoredPosition *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);
                    temp[i].GetComponent<RectTransform>().sizeDelta *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);

                    if (temp[i].GetComponent<Text>() != null)
                        temp[i].GetComponent<Text>().fontSize = Mathf.FloorToInt(temp[i].GetComponent<Text>().fontSize / Fixed.GetInstance().value);

                    if (temp[i].GetComponent<HorizontalLayoutGroup>())
                    {
                        temp[i].GetComponent<HorizontalLayoutGroup>().spacing *= Fixed.GetInstance().x;
                    }

                    if (temp[i].GetComponent<VerticalLayoutGroup>())
                    {
                        temp[i].GetComponent<VerticalLayoutGroup>().spacing *= Fixed.GetInstance().x;
                    }

                    else if (temp[i].GetComponent<GridLayoutGroup>())
                    {
                        temp[i].GetComponent<GridLayoutGroup>().cellSize = new Vector2(temp[i].GetComponent<GridLayoutGroup>().cellSize.x * Fixed.GetInstance().x, temp[i].GetComponent<GridLayoutGroup>().cellSize.y * Fixed.GetInstance().x);
                        temp[i].GetComponent<GridLayoutGroup>().spacing = new Vector2(temp[i].GetComponent<GridLayoutGroup>().spacing.x * Fixed.GetInstance().x, temp[i].GetComponent<GridLayoutGroup>().spacing.y * Fixed.GetInstance().x);
                    }
                    break;
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
                    temp[i].GetComponent<RectTransform>().anchoredPosition *= new Vector3(Fixed.GetInstance().x, Fixed.GetInstance().x, Fixed.GetInstance().x);

                    if (temp[i].GetComponent<VerticalLayoutGroup>())
                    {
                        temp[i].GetComponent<VerticalLayoutGroup>().padding.left = Mathf.RoundToInt(temp[i].GetComponent<VerticalLayoutGroup>().padding.left * Fixed.GetInstance().x);
                        temp[i].GetComponent<VerticalLayoutGroup>().padding.right = Mathf.RoundToInt(temp[i].GetComponent<VerticalLayoutGroup>().padding.right * Fixed.GetInstance().x);
                        temp[i].GetComponent<VerticalLayoutGroup>().padding.top = Mathf.RoundToInt(temp[i].GetComponent<VerticalLayoutGroup>().padding.top * Fixed.GetInstance().x);
                        temp[i].GetComponent<VerticalLayoutGroup>().padding.bottom = Mathf.RoundToInt(temp[i].GetComponent<VerticalLayoutGroup>().padding.bottom * Fixed.GetInstance().x);
                        temp[i].GetComponent<VerticalLayoutGroup>().spacing *= Fixed.GetInstance().x;
                    }
                    else if (temp[i].GetComponent<HorizontalLayoutGroup>())
                    {
                        temp[i].GetComponent<HorizontalLayoutGroup>().padding.left = Mathf.RoundToInt(temp[i].GetComponent<HorizontalLayoutGroup>().padding.left * Fixed.GetInstance().x);
                        temp[i].GetComponent<HorizontalLayoutGroup>().padding.right = Mathf.RoundToInt(temp[i].GetComponent<HorizontalLayoutGroup>().padding.right * Fixed.GetInstance().x);
                        temp[i].GetComponent<HorizontalLayoutGroup>().padding.top = Mathf.RoundToInt(temp[i].GetComponent<HorizontalLayoutGroup>().padding.top * Fixed.GetInstance().x);
                        temp[i].GetComponent<HorizontalLayoutGroup>().padding.bottom = Mathf.RoundToInt(temp[i].GetComponent<HorizontalLayoutGroup>().padding.bottom * Fixed.GetInstance().x);
                        temp[i].GetComponent<HorizontalLayoutGroup>().spacing *= Fixed.GetInstance().x;
                    }

                    if (temp[i].GetComponent<VerticalLayoutGroup>() != null || temp[i].GetComponent<HorizontalLayoutGroup>() != null || temp[i].GetComponent<GridLayoutGroup>() != null)
                        temp[i].GetComponent<RectTransform>().localScale = new Vector3(temp[i].GetComponent<RectTransform>().localScale.x * Fixed.GetInstance().x, temp[i].GetComponent<RectTransform>().localScale.y * Fixed.GetInstance().x, temp[i].GetComponent<RectTransform>().localScale.z * Fixed.GetInstance().x);
                    else temp[i].GetComponent<RectTransform>().sizeDelta *= new Vector3(Fixed.GetInstance().x, Fixed.GetInstance().x, Fixed.GetInstance().x);

                    //텍스트일 경우 폰트 크기 조절
                    if (temp[i].GetComponent<Text>() != null)
                        temp[i].GetComponent<Text>().fontSize = Mathf.FloorToInt(temp[i].GetComponent<Text>().fontSize / Fixed.GetInstance().value);
                    break;

                case "3DObject":
                    temp[i].GetComponent<RectTransform>().anchoredPosition *= new Vector2(Fixed.GetInstance().x, Fixed.GetInstance().x);
                    temp[i].GetComponent<RectTransform>().localScale = new Vector3(temp[i].GetComponent<RectTransform>().localScale.x * Fixed.GetInstance().x, temp[i].GetComponent<RectTransform>().localScale.y * Fixed.GetInstance().x, temp[i].GetComponent<RectTransform>().localScale.z);
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
