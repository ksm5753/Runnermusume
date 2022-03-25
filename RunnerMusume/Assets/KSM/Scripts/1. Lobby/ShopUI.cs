using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Battlehub.Dispatcher;

public partial class LobbyUI : MonoBehaviour
{
    #region 재화 구매

    public void BuyItem(string name)
    {
        foreach (var item in BackendServerManager.GetInstance().shopSheet)
        {
            if (item.name == name)
            {
                string changeGold = goldText.text.Split('K')[0];
                string changeDiamond = diamondText.text.Split('K')[0];
                int gold = int.Parse(goldText.text);
                int diamond = int.Parse(diamondText.text);

                

                if (gold >= item.gold && diamond >= item.diamond)
                {

                    if (item.gold > 0)
                    {
                        loadingObject.SetActive(true);

                        BackendServerManager.GetInstance().SaveGold(gold - item.gold, (bool result, string error) =>
                        {
                            Dispatcher.Current.BeginInvoke(() =>
                            {
                                loadingObject.SetActive(false);
                                if (result)
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "구매 성공!";
                                    errorObject.SetActive(true);
                                    return;
                                }
                                if (!error.Equals(string.Empty))
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "구매 실패 \n\n" + error;
                                    errorObject.SetActive(true);
                                    return;
                                }
                            });
                        });
                    }

                    if (item.diamond > 0)
                    {
                        loadingObject.SetActive(true);
                        BackendServerManager.GetInstance().SaveDiamond(diamond - item.diamond, (bool result, string error) =>
                        {
                            Dispatcher.Current.BeginInvoke(() =>
                            {
                                loadingObject.SetActive(false);
                                if (result)
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "구매 성공!";
                                    errorObject.SetActive(true);
                                    return;
                                }
                                if (!error.Equals(string.Empty))
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "구매 실패 \n\n" + error;
                                    errorObject.SetActive(true);
                                    return;
                                }
                            });
                        });
                    }
                }
                else
                {
                    errorObject.GetComponentInChildren<Text>().text = "구매 실패\n\n재화가 부족합니다.";
                    errorObject.SetActive(true);
                }
            }
        }
    }
    #endregion

    #region 골드 획득
    public void GiveGold(int num)
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().SaveGold(int.Parse(goldText.text) + num, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
            });
        });
    }
    #endregion

    #region 다이아몬드 획득
    public void GiveDiamond(int num)
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().SaveDiamond(int.Parse(diamondText.text) + num, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
            });
        });
    }
    #endregion

    #region 골드 텍스트 수정
    public void GoldText(string num)
    {
        goldText.text = num;
    }
    #endregion

    #region 다이아 텍스트 수정
    public void DiamondText(string num)
    {
        diamondText.text = num;
    }
    #endregion
}
