using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using LeanCloud.Play;
using TapTap.Common;
// 导入基础模块
using LeanCloud;
// 导入存储模块
using LeanCloud.Storage;
// 如有需要，导入即时通讯模块
using LeanCloud.Realtime;
using UnityNative.Toasts.Example;

public class MultiplayerScene : MonoBehaviour
{
        public GUISkin demoSkin;
        public Client client = new Client(
                        "hskcocvse6x1cgkklm",      // 游戏的 Client ID
                        "XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf",   // 游戏的 Client Token
                        "ajian2",              // 设置用户 id 可以自定义
                        playServer: "https://hskcocvs.cloud.tds1.tapapis.cn", // 游戏的 API 域名
                        gameVersion: "0.0.1"
                    );

    // Start is called before the first frame update
    void Start()
    {
      LCLogger.LogDelegate += (level, info) => {
        switch (level) {
            case LCLogLevel.Debug:
                Debug.Log($"[DEBUG] {DateTime.Now} {info}\n");

                break;
            case LCLogLevel.Warn:
                Debug.Log($"[WARNING] {DateTime.Now} {info}\n");

                break;
            case LCLogLevel.Error:
                Debug.Log($"[ERROR] {DateTime.Now} {info}\n");

                break;
            default:
                Debug.Log(info);
                break;
        }
    };
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public async void OnGUI(){
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "初始化并连接服务器", style))
		{
            try {
                await client.Connect();
                UnityNativeToastsHelper.ShowShortText("连接服务器成功！");

            } catch (PlayException e) {
                // 连接失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            }

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "创建或加入房间", style))
		{
            try {
                await client.JoinOrCreateRoom("Jian_Room");
                UnityNativeToastsHelper.ShowShortText("成功加入或创建了房间！");

            } catch (PlayException e) {
                // 创建或加入房间失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            }
		}

          btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "加入大厅", style))
		{
            try {
                await client.JoinLobby();
                UnityNativeToastsHelper.ShowShortText("成功进入大厅！");
                // 加入大厅成功
            } catch (PlayException e) {
                // 加入大厅失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            };

             client.OnLobbyRoomListUpdated += (List<LobbyRoom> roomList) => {

                    UnityNativeToastsHelper.ShowShortText("大厅中的第一个房间中的人数为："+ roomList[0].PlayerCount);


            };
            


        }


         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "创建房间并设置相关信息", style))
		{
            // 房间的自定义属性
            var props = new PlayObject {
                { "title", "战斗房" },
                { "level", 2 }
            };
            var roomOptions = new RoomOptions {
                Visible = false,
                EmptyRoomTtl = 10000,
                PlayerTtl = 600,
                MaxPlayerCount = 2,
                CustomRoomProperties = props,
                CustomRoomPropertyKeysForLobby = new List<string> { "level" },
                Flag = CreateRoomFlag.FixedMaster | CreateRoomFlag.MasterUpdateRoomProperties,
            };
            var expectedUserIds = new List<string> { "cr3_2" };
            try {
                await client.CreateRoom("MyRoomName", roomOptions, expectedUserIds);
                // 创建房间成功也意味着自己已经成功加入了该房间
                UnityNativeToastsHelper.ShowShortText("创建成功！");

            } catch (PlayException e) {
                // 创建房间失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            }
                    

                
        }

          btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "加入房间", style))
		{
            try {
                // 玩家在加入 'Jian_Room' 房间
                await client.JoinRoom("Jian_Room");
                UnityNativeToastsHelper.ShowShortText("成功加入房间！");

                // 加入房间成功
            } catch (PlayException e) {
                // 加入房间失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            }
        }


    if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "离开房间", style))
		{
            try {
                await client.LeaveRoom();
                // 离开房间成功，可以执行跳转场景等逻辑
                UnityNativeToastsHelper.ShowShortText("成功离开房间！");

            } catch (PlayException e) {
                // 离开房间失败
                Debug.LogErrorFormat("{0}, {1}", e.Code, e.Detail);
            }
        }



        }



       

       


       
        

       

    
            

        

       

       

    }




