using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.License;


public class TdsDLCScene : MonoBehaviour
{
    public GUISkin demoSkin;
    // Start is called before the first frame update
    void Start()
    {
        TapLicense.SetDLCCallback(new MyTapDLCCallback());

    }

    // Update is called once per frame
    void Update()
    {
        
    }


     public void OnGUI ()
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
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "DLC 查询", style))
		{
            string[] skuIds = { "99", "100", "101"};

            TapLicense.QueryDLC(skuIds);

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "DLC 购买", style))
		{
            TapLicense.PurchaseDLC("99");


        }
       
      


    }



    public class MyTapDLCCallback:ITapDlcCallback
{
    public void OnQueryCallBack(TapLicenseQueryCode code, Dictionary<string, object> queryList)
    {
        // 查询回调
        UnityNativeToastsHelper.ShowShortText("查询回调"+ code);
         foreach (var kvp in queryList)
        {
            Console.WriteLine($"Key: {kvp.Key}, Value: {kvp.Value}");

            // 获取值的数据类型
            Type valueType = kvp.Value.GetType();
            Console.WriteLine($"Value Type: {valueType}");
        }

    }

    public void OnOrderCallBack(string sku, TapLicensePurchasedCode status)
    {
        // 购买回调
                UnityNativeToastsHelper.ShowShortText("购买商品 ID:"+ sku);
    }
}


}
