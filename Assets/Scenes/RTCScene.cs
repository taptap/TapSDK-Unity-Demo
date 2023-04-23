using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.RTC;
using UnityNative.Toasts.Example;
using System;

public class RTCScene : MonoBehaviour
{
    public GUISkin demoSkin;
    private string label;

    // Start is called before the first frame update
    async void Start()
    {
        // 初始化 RTC
        var config = new TapRTCConfig.Builder()
            .ClientID("hskcocvse6x1cgkklm")
            .ClientToken("XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf")
            .ServerUrl("https://hskcocvs.cloud.tds1.tapapis.cn")
            .UserId("UserId")
            .DeviceId("DeviceId")
            .AudioProfile(AudioPerfProfile.MID)
            .ConfigBuilder();
            
        ResultCode code = await TapRTC.Init(config);

        if (code == ResultCode.OK) {
            // 初始化成功
            Debug.Log("RTC 初始化成功");

        } else {
            // 失败
             Debug.Log("RTC 初始化失败");

        }
        
    }

    void Update()
    {
        ResultCode code = TapRTC.Poll();
        if (code == ResultCode.OK) {
            // 成功触发回调
            Debug.Log("RTC 成功触发回调");

        } else {
            // 失败
            Debug.Log("RTC 失败触发回调");

        }
        
    }


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
        var labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 30 };

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "创建并加入房间", style))
		{
           bool enableRangeAudio = false;
           var room =  TapRTC.AcquireRoom("ywj_roomId01", enableRangeAudio);

           room.RegisterEventAction(new TapRTCEvent()
            {
                OnDisconnect = (code, message) => {
                     Debug.Log($"断开连接 code:{code} msg:{message}");
                      },
                OnEnterFailure = s => { 
                    Debug.Log($"进入房间失败:{s}");
                     },
                OnEnterSuccess = () => {
                    Debug.Log($"进入房间成功");
                     },
                OnExit = () => {
                    Debug.Log($"退出房间成功");
                    },
                OnUserEnter = userId => { 
                    Debug.Log($"玩家{userId}进入房间");
                    },
                OnUserExit = userId => {
                     Debug.Log($"玩家{userId}退出房间");
                     },
                OnUserSpeaker = (userId, volume) => { 
                      Debug.Log($"玩家{userId}在房间说话，音量{volume}");
                     },
                OnUserSpeakEnd = userId => {
                    Debug.Log($"玩家{userId}在房间说话结束");
                     },
                // 返回切换后的音质，参见下文「切换音频质量」一节
                OnRoomTypeChanged = (i) => {
                    Debug.Log($"房间音质改为{i}");
                      },
                OnRoomQualityChanged = (weight, loss, delay) =>{
                    Debug.Log($"音频质量:{weight} 丢包率:{loss}% 延迟:{delay}ms");
                }

            });


           var authBuffer = AuthBufferHelper.GenToken("hskcocvse6x1cgkklm", "ywj_roomId01", "myuserId", "nZfLau9jFAj7GQi3l0xA3HNXTr7WxQ4M");

            ResultCode code = await room.Join(authBuffer);
            if (code == ResultCode.OK) {
                // 成功加入
                Debug.Log("加入成功");

            }
            if (code == ResultCode.ERROR_ALREADY_IN_ROOM) {
                // 玩家已经在此房间内
                Debug.Log("玩家已经在此房间内");
            }else{
                Debug.Log("加入房间其他的情况");
            }


            


        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "退出房间", style))
		{
            bool enableRangeAudio = false;

            var room =  TapRTC.AcquireRoom("ywj_roomId", enableRangeAudio);

            ResultCode code = room.Exit();


        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "恢复系统", style))
		{
            ResultCode code = TapRTC.Resume();
            if (code == ResultCode.OK) {
                // 成功恢复
                Debug.Log("成功恢复");

            } else {
                // 失败
                Debug.Log("恢复系统失败");
            }
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "暂停系统", style))
		{
           ResultCode code = TapRTC.Pause();
            if (code == ResultCode.OK) {
                // 成功暂停
                Debug.Log("成功暂停");
            } else {
                // 失败
                Debug.Log("暂停失败");

            }
                    

        }



    }
}
