using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Battlehub.Dispatcher;

public partial class LobbyUI : MonoBehaviour
{
    #region ��ȭ ����

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

                string compensateCode = item.compensate.Substring(0, 1);
                string compensateAmount = item.compensate.Substring(1);


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
                                    errorObject.GetComponentInChildren<Text>().text = "���� ����!";
                                    errorObject.SetActive(true);
                                    return;
                                }
                                if (!error.Equals(string.Empty))
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "���� ���� \n\n" + error;
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
                                print(compensateCode);
                                print(compensateAmount);
                                loadingObject.SetActive(false);
                                if (result)
                                {
                                    switch (compensateCode)
                                    {
                                        case "E":
                                            GiveEnergy(int.Parse(compensateAmount));
                                            break;
                                        case "G":
                                            GiveGold(int.Parse(compensateAmount));
                                            break;
                                    }
                                    errorObject.GetComponentInChildren<Text>().text = "���� ����!";
                                    errorObject.SetActive(true);
                                    return;
                                }
                                if (!error.Equals(string.Empty))
                                {
                                    errorObject.GetComponentInChildren<Text>().text = "���� ���� \n\n" + error;
                                    errorObject.SetActive(true);
                                    return;
                                }
                            });
                        });
                    }
                }
                else
                {
                    errorObject.GetComponentInChildren<Text>().text = "���� ����\n\n��ȭ�� �����մϴ�.";
                    errorObject.SetActive(true);
                }
            }
        }
    }
    #endregion

    #region ������ ȹ��
    public void GiveEnergy(int num)
    {
        loadingObject.SetActive(true);
        BackendServerManager.GetInstance().SaveEnergy(energyAmount + num, (bool result, string error) =>
        {
            Dispatcher.Current.BeginInvoke(() =>
            {
                loadingObject.SetActive(false);
            });
        });
    }
    #endregion

    #region ��� ȹ��
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

    #region ���̾Ƹ�� ȹ��
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

    #region ��� �ؽ�Ʈ ����
    public void GoldText(string num)
    {
        goldText.text = num;
    }
    #endregion

    #region ���̾� �ؽ�Ʈ ����
    public void DiamondText(string num)
    {
        diamondText.text = num;
    }
    #endregion
}
