using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.Login;


public class LoginScene : MonoBehaviour
{

    public GUISkin demoSkin;
    private string label;


    void Start()
    {
    }

    void Update()
    {
    }

    public static async void Login()
    {
        try
        {
            var currentUser = await TDSUser.GetCurrent();
            if (null == currentUser)
            {
                Debug.Log("当前未登录");
                try
                {
                    var tdsUser = await TDSUser.LoginWithTapTap();
                    Debug.Log($"login sucess:{tdsUser}");

                    UnityNativeToastsHelper.ShowShortText($"login sucess:{tdsUser}");
                    
                }
                catch (Exception e)
                {
                    if (e is TapException tapError)
                    {
                        Debug.Log($"get AccessToken exception:{tapError.code} message:{tapError.message}");
                        UnityNativeToastsHelper.ShowShortText($"get AccessToken exception:{tapError.code} message:{tapError.message}");
                    }
                }
            }
            else 
            {
                Debug.Log("已登录");
                UnityNativeToastsHelper.ShowShortText("已登录");
            }
        }
        catch (Exception e)
        {
             Debug.Log($"判断登陆状态失败： message:{e}");
             UnityNativeToastsHelper.ShowShortText($"判断登陆状态失败： message:{e}");
        }    
    }

    public static async void IsLogin()
    {
        try
        {
            var currentUser = await TDSUser.GetCurrent();
            if (null == currentUser)
            {
                Debug.Log("当前未登录");
                UnityNativeToastsHelper.ShowShortText("当前未登录");
            }
            else 
            {
                Debug.Log("已登录");
                UnityNativeToastsHelper.ShowShortText("已登录");
            }
        }catch (Exception e)
        {
            Debug.Log($"判断登陆状态失败： message:{e}");
            UnityNativeToastsHelper.ShowShortText($"判断登陆状态失败： message:{e}");
        }       
    }

    public static async void GouhuoTest()
    {
        try{
            var test = await TapLogin.GetTestQualification();
            if(test)
            {
                UnityNativeToastsHelper.ShowShortText($"该玩家具备篝火测试资格");
            }
            else
            {
                UnityNativeToastsHelper.ShowShortText($"该玩家不具备篝火测试资格");
            }
            
        }
        catch(Exception e)
        {
            UnityNativeToastsHelper.ShowShortText($"篝火测试 error：{e.Message}");
        }
    }


    public async void getUserInfo(){
       
        var profile = await TapLogin.FetchProfile();
        Debug.Log($"profile: {profile.ToJson()}");
        label = profile.ToJson()+ "";

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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "登录", style))
		{
            Login();  
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "登录状态", style))
		{
            IsLogin();   
        }

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "篝火测试", style))
		{

            GouhuoTest();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "退出登录", style))
		{
            TDSUser.Logout();
		}

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "获取用户信息", style))
		{

            getUserInfo();
        }

        btnTop += btnHeight + 20 * scale;

        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, Screen.width / 5 * 4, Screen.height / 4), label, labelStyle);


        




    
    }
}
