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
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
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

                    // tdsUser.ObjectId;
                    // tdsUser.AuthData;
                    UnityNativeToastsHelper.ShowShortText($"login sucess:{tdsUser}");
                    
                }
                catch (Exception e)
                {
                    if (e is TapException tapError)
                    {
                        Debug.Log($"get AccessToken exception:{tapError.code} message:{tapError.message}");
                        UnityNativeToastsHelper.ShowShortText($"get AccessToken exception:{tapError.code} message:{tapError.message}");
                    }
                    // ignored
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

    private string label;

    private void OnGUI()
    {
        var style = new GUIStyle(GUI.skin.button) { fontSize = 40 };

        GUI.depth = 0;

        var labelStyle = new GUIStyle(GUI.skin.label)
        {
            fontSize = 20
        };

        GUI.Label(new Rect(400, 100, 400, 300), label, labelStyle);

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            Login();   
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "登录状态", style))
        {
            IsLogin();   
        }

        //if (GUI.Button(new Rect(60, 750, 260, 100), "用户中心", style))
        //{
        //    // TapBootstrap.OpenUserCenter();
        //}

        if (GUI.Button(new Rect(60, 450, 260, 100), "篝火测试", style))
        {
            GouhuoTest();

            // TapLogin.GetTestQualification((valid, error) => {
            //     if (error)
            //     {
            //         // 网络异常或游戏未开启篝火测试
            //         Debug.Log("网络异常或游戏未开启篝火测试");
            //         UnityNativeToastsHelper.ShowShortText("网络异常或游戏未开启篝火测试");
            //     }
            //     else
            //     {
            //         if(valid)
            //         {
            //             // 有篝火测试资格
            //             Debug.Log("该玩家具有篝火测试资格");
            //             UnityNativeToastsHelper.ShowShortText("该玩家具有篝火测试资格");
            //         }
            //     }
            // });
        }

        if (GUI.Button(new Rect(60, 600, 180, 100), "退出登录", style))
        {
            TDSUser.Logout();
        }

        if (GUI.Button(new Rect(60, 750, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
