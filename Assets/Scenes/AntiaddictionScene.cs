using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.AntiAddiction;
using TapTap.AntiAddiction.Model;

public class AntiaddictionScene : MonoBehaviour
{

    public GUISkin demoSkin;

    // Start is called before the first frame update
    void Start()
    {
         AntiAddictionConfig config_anti = new AntiAddictionConfig()
        {
            gameId = "hskcocvse6x1cgkklm",      // TapTap 开发者中心对应 Client ID
            useTapLogin = true,             // 是否启动 TapTap 快速认证
            showSwitchAccount = true,      // 是否显示切换账号按钮
        };         

        Action<int, string> callback = (code, errorMsg) => {
           if (code == 500)
                {
                    AntiAddictionUIKit.EnterGame();
                    Debug.Log("AntiAddiction： "+"玩家登录后判断当前玩家可以进行游戏");
                    UnityNativeToastsHelper.ShowShortText("已实名，可进入游戏");

                }
                if (code == 1030)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"未成年玩家当前无法进行游戏");
                    UnityNativeToastsHelper.ShowShortText("未成年玩家当前无法进行游戏");

                }
                if (code == 1095)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"未成年允许游戏弹窗  ");
                    UnityNativeToastsHelper.ShowShortText("未成年允许游戏弹窗");

                }

                if (code == 1000)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"退出账号   ");
                    UnityNativeToastsHelper.ShowShortText("退出账号");

                }

                if (code == 9002)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"实名过程中点击了关闭实名窗");
                    UnityNativeToastsHelper.ShowShortText("实名过程中点击了关闭实名窗");

                }
                if (code == 1001)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"点击切换账号按钮");
                    UnityNativeToastsHelper.ShowShortText("点击切换账号按钮");

                }
        };

        AntiAddictionUIKit.Init(config_anti, callback);
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
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "快速认证", style))
		{
            string userIdentifier = "Player_unique_Identifier1";
            AntiAddictionUIKit.Startup(userIdentifier);
        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "登出", style))
		{
          AntiAddictionUIKit.Exit();
        }
         btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "获取玩家年龄段", style))
		{
            int ageRange = AntiAddictionUIKit.AgeRange;
            UnityNativeToastsHelper.ShowShortText($"玩家年龄段:{ageRange}");

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取剩余时长(分钟)", style))
		{
            int remainingTimeInMinutes = AntiAddictionUIKit.RemainingTimeInMinutes;
             UnityNativeToastsHelper.ShowShortText($"剩余时长: {remainingTimeInMinutes} 分钟");
        }
        btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "检查消费上限", style))
		{
                long amount = 10000;
                AntiAddictionUIKit.CheckPayLimit(amount,
                    (result) => {
                        // status 为 1 时可以支付
                        int status = result.status;
                        if (status == 1) {
                            Debug.Log("该玩家可以进行充值");

                            // 可以进行支付
                            UnityNativeToastsHelper.ShowShortText("该玩家可以进行充值");

                        }
                    },
                    (exception) => {
                        // 处理异常
                    }
                );
        }


    }
}
