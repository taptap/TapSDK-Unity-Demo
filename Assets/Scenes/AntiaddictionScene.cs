using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.AntiAddiction;
using TapTap.AntiAddiction.Model;
using TapTap.Login;

public class AntiaddictionScene : MonoBehaviour
{

    public GUISkin demoSkin;
    public bool isOpenTestEnvironment = false;

    private string rechargeAmount = "输入充值金额";

    private string inspectAmount = "输入检查金额";

    void Start()
    {


        Action<int, string> callback = (code, errorMsg) => {
               UnityEngine.Debug.LogFormat($"code: {code} error Message: {errorMsg}");

           if (code == 500)
                {
                    Debug.Log("AntiAddiction： "+"玩家登录后判断当前玩家可以进行游戏");
                    UnityNativeToastsHelper.ShowShortText("已实名，可进入游戏");

                }
                if (code == 1030)
                {
                    Debug.Log("AntiAddiction： "+"未成年玩家当前无法进行游戏");
                    UnityNativeToastsHelper.ShowShortText("未成年玩家当前无法进行游戏");

                }
                if (code == 1095)
                {
                    Debug.Log("AntiAddiction： "+"未成年允许游戏弹窗  ");
                    UnityNativeToastsHelper.ShowShortText("未成年允许游戏弹窗");

                }

                if (code == 1000)
                {
                    Debug.Log("AntiAddiction： "+"退出账号   ");
                    UnityNativeToastsHelper.ShowShortText("退出账号");

                }

                if (code == 9002)
                {
                    Debug.Log("AntiAddiction： "+"实名过程中点击了关闭实名窗");
                    UnityNativeToastsHelper.ShowShortText("实名过程中点击了关闭实名窗");

                }
                if (code == 1001)
                {
                    Debug.Log("AntiAddiction： "+"点击切换账号按钮");
                    UnityNativeToastsHelper.ShowShortText("点击切换账号按钮");

                }
                if (code == 1100)
                {
                    Debug.Log("AntiAddiction： "+"当前用户因触发应用设置的年龄限制无法进入游戏");
                    UnityNativeToastsHelper.ShowShortText("当前用户因触发应用设置的年龄限制无法进入游戏");

                }
                if (code == 1200)
                {
                    Debug.Log("AntiAddiction： "+"数据请求失败，游戏需检查当前设置的应用信息是否正确及判断当前网络连接是否正常");
                    UnityNativeToastsHelper.ShowShortText("数据请求失败，游戏需检查当前设置的应用信息是否正确及判断当前网络连接是否正常");

                }
        };

        // 防沉迷单独初始化
        // AntiAddictionConfig config = new AntiAddictionConfig()
        // {
        //     gameId = "hskcocvse6x1cgkklm",      // TapTap 开发者中心对应 Client ID
        //     showSwitchAccount = false,      // 是否显示切换账号按钮
        //     useAgeRange = true      // 是否使用年龄段信息
        // };         
        // //设置配置及回调，callback 为开发者实现的自定义防沉迷回调对象
        // AntiAddictionUIKit.Init(config);

        AntiAddictionUIKit.SetAntiAddictionCallback(callback);
    }

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

        GUIStyle centeredTextFieldStyle = new GUIStyle(GUI.skin.textArea);

        centeredTextFieldStyle.alignment = TextAnchor.MiddleCenter;
        centeredTextFieldStyle.fontSize = 20;



        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

        }

        btnTop += btnHeight + 20 * scale;
		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "快速认证", style))
		{
        

            toAnti();
        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "登出", style))
		{
          AntiAddictionUIKit.Exit();
        }
         btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "获取玩家年龄段", style))
		{
            int ageRange = AntiAddictionUIKit.AgeRange;
            UnityNativeToastsHelper.ShowShortText("年龄段为："+ ageRange);

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取剩余时长(分钟)", style))
		{
            int remainingTimeInMinutes = AntiAddictionUIKit.RemainingTimeInMinutes;
             UnityNativeToastsHelper.ShowShortText($"剩余时长: {remainingTimeInMinutes} 分钟");
        }
        btnTop += btnHeight + 20 * scale;

      // 充值金额输入框
        inspectAmount = GUI.TextArea(new Rect ((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), inspectAmount, centeredTextFieldStyle);

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "检查消费上限", style))
		{
               isPayLimit(inspectAmount);
        }

        btnTop += btnHeight + 20 * scale;

        // 充值金额输入框
        rechargeAmount = GUI.TextArea(new Rect ((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), rechargeAmount, centeredTextFieldStyle);


         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "充值上报", style))
		{
            upPayAmount(rechargeAmount);

        }



         btnTop += btnHeight + 20 * scale;
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "开启/关闭测试环境", style))
		{

              isOpenTestEnvironment = !isOpenTestEnvironment;
            // 设置测试环境  
            if(isOpenTestEnvironment){
                UnityNativeToastsHelper.ShowShortText("开启测试环境！");
            }else{
                UnityNativeToastsHelper.ShowShortText("关闭测试环境！");
            }
            AntiAddictionUIKit.SetTestEnvironment(isOpenTestEnvironment);
               
        }


    }


    public async void toAnti(){

            var profile = await TapLogin.FetchProfile();
            Debug.Log("unionID==: "+profile.unionid);
            AntiAddictionUIKit.StartupWithTapTap(profile.unionid);
    }
       


    public async void isPayLimit(string amount){

        if (IsNumeric(amount, out long resultAmout))
            {
             AntiAddictionUIKit.CheckPayLimit(resultAmout,
                    (result) => {
                        int status = result.status;
                        if (status == 1) {
                            Debug.Log("该玩家可以进行充值"+amount+" 分" );
                            UnityNativeToastsHelper.ShowShortText("该玩家可以进行充值"+amount+" 分" );
                        }else{
                            Debug.Log("该玩家充值"+amount+" 分 受限");
                            UnityNativeToastsHelper.ShowShortText("该玩家充值"+amount+" 分 受限");
                        }
                    },
                    (exception) => {
                        // 处理异常
                         Debug.Log("检查异常："+ exception.ToString());
                        UnityNativeToastsHelper.ShowShortText("检查异常："+ exception.ToString());
                    }
                );
            }
            else
            {
                UnityNativeToastsHelper.ShowShortText("请输入正常的金额");

            }


                

    }

    public void upPayAmount(string amount){

         if (IsNumeric(amount, out long result))
            {
                // 金额单位为：分
                AntiAddictionUIKit.SubmitPayResult(result,
                    () => {
                        Debug.Log("充值金额上报成功！");
                        UnityNativeToastsHelper.ShowShortText("充值金额上报成功！");
                    }, (exception) => {
                        // 处理异常
                        Debug.Log("充值金额上报失败："+ exception.ToString());
                        UnityNativeToastsHelper.ShowShortText("充值金额上报失败："+ exception.ToString());
                    }
                );
            }
            else
            {
                UnityNativeToastsHelper.ShowShortText("请输入正常的金额");

            }
      

    }

    // 判断字符串是否为数字，并转换为 long 类型
    public static bool IsNumeric(string input, out long number)
    {
        return long.TryParse(input, out number);
    }

}
