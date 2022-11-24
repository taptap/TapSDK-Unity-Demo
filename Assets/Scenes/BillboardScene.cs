using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.Bootstrap;
using TapTap.Billboard;

public class BillboardScene : MonoBehaviour
{
        public GUISkin demoSkin;

    // Start is called before the first frame update
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "打开公告", style))
		{
            openBillboard();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取小红点", style))
		{
           getRedDot();
        }
         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "注册自定义事件监听", style))
		{

            TapBillboard.RegisterCustomLinkListener(url =>
                {
                    // 这里返回的 url 地址和游戏在公告系统内配置的地址是一致的
                     UnityNativeToastsHelper.ShowShortText(url);

                });
        }






    }


   public void openBillboard(){
        TapBillboard.OpenPanel((any, error) =>
        {
            if (error != null)
            {
                // 打开公告失败  可以根据 error.code 和 error.errorDescription 来判断错误原因
                UnityNativeToastsHelper.ShowShortText("打开公告失败");

            } else
            {
                // 打开公告成功
              UnityNativeToastsHelper.ShowShortText("打开公告成功！");

            }
        }, () => {
                // 公告已关闭
               UnityNativeToastsHelper.ShowShortText("公告已关闭");
        });


    }

    public void  getRedDot(){
        TapBillboard.QueryBadgeDetails((badgeDetails, error) =>
        {
            if (error != null)
            {
                // 获取小红点信息失败 可以根据 error.code 和 error.errorDescription 来判断错误原因
                UnityNativeToastsHelper.ShowShortText("获取小红点信息失败: "+ error.errorDescription );
           
            }
            else
            {
                // 获取小红点信息成功
                if (badgeDetails.showRedDot == 1) {
                    // 有新的公告信息
                  UnityNativeToastsHelper.ShowShortText("有新的公告信息 "+ badgeDetails.ToString() );

                } else {
                    // 没有新的公告信息
                  UnityNativeToastsHelper.ShowShortText("没有新的公告信息 " );

                }
            }
        });

    }

}
