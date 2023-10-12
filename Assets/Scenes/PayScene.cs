using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityNative.Toasts.Example;
using System;
using TapTap.Payment;
using System.Collections.Generic;


public class PayScene : MonoBehaviour
{
    public GUISkin demoSkin;
    private String skuId_01 = "xiaohao001";
    private String skuId_02 = "xiaohao002";
    private String skuId_03 = "feixiaohao001";
    private String skuId_04 = "feixiaohao002";

    public string [] skuIds = new string[4];    


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

     private void OnGUI()
    {

        GUI.skin = demoSkin;
		
		float scale = 1.0f;

		
		float btnWidth= Screen.width / 5 * 2;
        float btnWidth2 = btnWidth + 80 * scale;

        float btnHeight = Screen.height / 25;
		float btnTop = 30 * scale;
		float btnGap = 20 * scale;

		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);
         var style = new GUIStyle(GUI.skin.button) { fontSize = 20 };
        var labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 30 };

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "查询单个商品", style))
		{
            searchSingleCommodity();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "查询多个商品", style))
		{
            searchMultipleCommodity();

        }

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "购买商品", style))
		{
            payGoods();
        }
		

    }

// 查询单个商品
    public void searchSingleCommodity(){
        TapPayment.QueryProduct(skuId_01, (skuDetail, error) =>
        {
            if (error != null)
            {
                UnityNativeToastsHelper.ShowShortText("获取商品异常");
            }
            else
            {
                if (skuDetail == null) {
                    UnityNativeToastsHelper.ShowShortText("当前商品为空");
                } else {
                    Debug.Log(skuDetail.ToJson());
                    UnityNativeToastsHelper.ShowShortText("商品名："+ skuDetail.goodsConfig.goodsName+ "  价格："+ skuDetail.goodsPrice.goodsPriceAmount+"元");
                   
                }
            }
        });
        
    }

// 查询多个商品
    public void searchMultipleCommodity(){

        skuIds[0] = skuId_01;
        skuIds[1] = skuId_02;
        skuIds[2] = skuId_03;
        skuIds[3] = skuId_04;

        TapPayment.QueryProducts(skuIds, (list, error) =>
        {
            if (error != null)
            {
                UnityNativeToastsHelper.ShowShortText("获取商品异常");
            }
            else
            {
                if (list == null || list.Count == 0) {
                    UnityNativeToastsHelper.ShowShortText("当前商品为空");
                } else {
                    String pointText = "";

                    for ( int i = 0; i < list.ToArray().Length; i++ )
                    {
                        pointText = pointText+ "商品名："+list[i].goodsConfig.goodsName+"  价格："+list[i].goodsPrice.goodsPriceAmount+"元\n";

                    }
                    Debug.Log(list);
                    UnityNativeToastsHelper.ShowShortText(pointText);                }
            }
        });
    }


        public void payGoods(){
            TapPayment.QueryProduct(skuId_01, (skuDetail, error) =>
            {
                if (error != null)
                {
                    UnityNativeToastsHelper.ShowShortText("获取商品异常");
                }
                else
                {
                    if (skuDetail == null) {
                        UnityNativeToastsHelper.ShowShortText("当前商品为空");
                    } else {
                        // 开始购买商品
                        TapPayment.LaunchBillingFlow(skuDetail, "", "", "", (responseCode, error) =>
                        {
                            if (error != null)
                            {
                                UnityNativeToastsHelper.ShowShortText("购买有异常");
                            }
                            else
                            {
                                if (responseCode == 0)
                                {
                                    UnityNativeToastsHelper.ShowShortText("购买完成");
                                }
                                else if (responseCode == 1)
                                {
                                    UnityNativeToastsHelper.ShowShortText("购买异常");
                                }
                                else if (responseCode == 2)
                                {
                                    UnityNativeToastsHelper.ShowShortText("购买取消");
                                }
                            }
                        });
                    
                    }
                }
            });

            
        }


}
