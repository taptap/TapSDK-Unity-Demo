using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;

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

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 40;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 150, 180, 100), "登录", style))
        {
            Debug.Log("onLoginClick");
            TapBootstrap.GetAccessToken((accessToken, error) => {
                if (accessToken == null)
                {
                    TapConfig config = new TapConfig();
                    LoginType loginType = LoginType.TAPTAP;
                    TapBootstrap.Login(loginType, new string[] { "public_profile" });
                }
                else
                {
                    UnityNativeToastsHelper.ShowShortText("已经登录");
                }
            });
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "退出登录", style))
        {
            TapBootstrap.GetAccessToken((accessToken, error) => {
                if (accessToken == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else
                {
                    UnityNativeToastsHelper.ShowShortText("退出登录");
                    TapBootstrap.Logout();
                }
            });
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "用户信息", style))
        {
            TapBootstrap.GetAccessToken((accessToken, error) => {
                if (accessToken == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else
                {
                    TapBootstrap.GetDetailUser((userDetail, error1) => {
                        string str = userDetail.ToJSON();
                        UnityNativeToastsHelper.ShowShortText(str);
                    });
                    

                }
            });
        }
        if (GUI.Button(new Rect(60, 600, 180, 100), "获取Token", style))
        {
            TapBootstrap.GetAccessToken((accessToken, error) => {
                if (accessToken == null)
                {
                    UnityNativeToastsHelper.ShowShortText("当前未登录");
                }
                else
                {
                    string str = accessToken.ToJSON();
                    UnityNativeToastsHelper.ShowShortText(str);
                }
            });
        }

        if (GUI.Button(new Rect(60, 750, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
