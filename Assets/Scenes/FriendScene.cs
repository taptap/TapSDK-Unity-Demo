using System.Collections;
using UnityEngine;
using TapTap.Friends;
using UnityNative.Toasts.Example;
using System;
using LeanCloud;
using System.Collections.ObjectModel;
using LeanCloud.Storage;




// ptwpjq

public class FriendScene : MonoBehaviour
{

    public GUISkin demoSkin;

    // Start is called before the first frame update
   async void Start()
    {
        TDSFriends.FriendStatusChangedDelegate = new TDSFriendStatusChangedDelegate {
            // 新增好友（触发时机同「已发送的好友申请被接受」）
            OnFriendAdd = friendInfo => {
                Debug.Log("新增好友（触发时机同「已发送的好友申请被接受」）");
                UnityNativeToastsHelper.ShowShortText("新增好友（触发时机同「已发送的好友申请被接受」）");

            },
            // 新增好友申请
            OnNewRequestComing = req => {
                Debug.Log("新增好友申请");
                UnityNativeToastsHelper.ShowShortText("新增好友申请");

            },
            // 已发送的好友申请被接受
            OnRequestAccepted = req => {
                Debug.Log("已发送的好友申请被接受");
                UnityNativeToastsHelper.ShowShortText("已发送的好友申请被接受");
                
            },
            // 已发送的好友申请被拒绝
            OnRequestDeclined = req => {
                Debug.Log("已发送的好友申请被拒绝");
                UnityNativeToastsHelper.ShowShortText("已发送的好友申请被拒绝");
            },
            // 好友上线
            OnFriendOnline = userId => {
                Debug.Log("好友上线");
                UnityNativeToastsHelper.ShowShortText("好友上线");

            },
            // 好友下线
            OnFriendOffline = userId => {
                Debug.Log("好友下线");
                UnityNativeToastsHelper.ShowShortText("好友下线");


            },
            // 好友富信息变更
            OnRichPresenceChanged = (userId, richPresence) => {
                Debug.Log("好友富信息变更");
                UnityNativeToastsHelper.ShowShortText("好友富信息变更");

            },
            // 当前玩家成功上线（长连接建立成功）
            OnConnected = () => {
                Debug.Log("当前玩家成功上线（长连接建立成功）");
                UnityNativeToastsHelper.ShowShortText("当前玩家成功上线（长连接建立成功）");

            },
            // 当前玩家长连接断开，SDK 会自动重试，开发者通常无需额外处理
            OnDisconnected = () => {
                Debug.Log("当前玩家长连接断开，SDK 会自动重试，开发者通常无需额外处理");
                UnityNativeToastsHelper.ShowShortText("当前玩家长连接断开，SDK 会自动重试，开发者通常无需额外处理");

            },
            // 当前连接异常
            OnConnectionError = (code, message) => {
                Debug.Log("当前连接异常");
                UnityNativeToastsHelper.ShowShortText("当前连接异常");

            },
        };

        await TDSFriends.Online();


    }


    // Update is called once per frame
    void Update()
    {
        
    }


    private string textArea = "请输入 shorid";

    private async void OnGUI()
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

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 30;
        labelStyle.alignment = TextAnchor.MiddleLeft;

        
        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

        }

        btnTop += btnHeight + 20 * scale;

        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth / 2, btnHeight), "shorid：", labelStyle);
        GUIStyle inputStyle = new GUIStyle(GUI.skin.textArea);
        inputStyle.fontSize = 30;
        inputStyle.alignment = TextAnchor.MiddleCenter;

        textArea = GUI.TextArea(new Rect(btnWidth / 2, btnTop, btnWidth, btnHeight), textArea , inputStyle);
        

		if (GUI.Button(new Rect( btnWidth+ btnWidth/2+20, btnTop, btnWidth/2, btnHeight), "添加好友", style))
		{
            await TDSFriends.AddFriendByShortCode(textArea);

        }

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "同意好友申请", style))
		{
            // 查询好友申请列表
            var from = 0;
            var limit = 100;
            
            ReadOnlyCollection<LCFriendshipRequest> requests = await TDSFriends.QueryFriendRequestList (
                LCFriendshipRequest.STATUS_PENDING, from, limit
            );

            // 接受
            foreach(var item in requests)
            {
                 await TDSFriends.AcceptFriendshipRequest(item);
            }
            
        }

       

        


    }
}
