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
            gameId = "n0bnxy5dfvuq0opmnd",      // TapTap 开发者中心对应 Client ID
            useTapLogin = true,             // 是否启动 TapTap 快速认证
            showSwitchAccount = true,      // 是否显示切换账号按钮
        };         

        Action<int, string> callback = (code, errorMsg) => {
           if (code == 500)
                {
                    AntiAddictionUIKit.EnterGame();
                    Debug.Log("AntiAddiction： "+"玩家登录后判断当前玩家可以进行游戏");
                }
                if (code == 1030)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"未成年玩家当前无法进行游戏");
                }
                if (code == 1095)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"未成年允许游戏弹窗  ");
                }

                if (code == 1000)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"退出账号   ");
                }

                if (code == 9002)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"实名过程中点击了关闭实名窗");
                }
                if (code == 1001)
                {
                    // 开始计时
                    Debug.Log("AntiAddiction： "+"点击切换账号按钮");
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "快速认证"))
		{
        
        }

    }
}
