using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using System;
using TapTap.Common;
using TapTap.Login;
using LeanCloud;
using System.IO;
using UnityEngine.Android;

public class GamesavesScene : MonoBehaviour
{
    public GUISkin demoSkin;

    // Start is called before the first frame update
    void Start()
    {

        LCLogger.LogDelegate = (LCLogLevel level, string info) => {
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


     if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageRead) || !Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite))
        {
            Permission.RequestUserPermission(Permission.ExternalStorageRead);
            Permission.RequestUserPermission(Permission.ExternalStorageWrite);
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "创建存档", style))
		{


                var gameSave = new TapGameSave
                    {
                        Name = "云存档名称",
                        Summary = "这是云存档描述",
                        ModifiedAt = DateTime.Now.ToLocalTime(),
                        PlayedTime = 60000L, // ms
                        ProgressValue = 100,
                        CoverFilePath = "sdcard/Android/qwer.png",
                        GameFilePath = "sdcard/Android/qwer.csv",
                    };
                    await gameSave.Save();
         

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "查询用户存档", style))
		{
             var collection = await TapGameSave.GetCurrentUserGameSaves();

            foreach(var gameSave in collection){
                if (gameSave != null){
                    
                    var summary = gameSave.Summary;
                    var modifiedAt = gameSave.ModifiedAt;
                    var playedTime = gameSave.PlayedTime;
                    var progressValue = gameSave.ProgressValue;
                    var coverFile = gameSave.Cover;
                    var gameFile = gameSave.GameFile;
                    var gameFileUrl = gameFile.Url;

                    Debug.Log("==="+ gameFileUrl);


                }else{

                    Debug.Log("为 null");

                }


            }

        }

        btnTop += btnHeight + 20 * scale;

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "删除存档", style))
        {
                
                var collection = await TapGameSave.GetCurrentUserGameSaves();

            foreach(var gameSave in collection){
                var summary = gameSave.Summary;
                var modifiedAt = gameSave.ModifiedAt;
                var playedTime = gameSave.PlayedTime;
                var progressValue = gameSave.ProgressValue;
                var coverFile = gameSave.Cover;
                var gameFile = gameSave.GameFile;
                var gameFileUrl = gameFile.Url;

                Debug.Log($"云存档: {gameSave.ToString()}");
                await gameSave.Delete();

            }
                


        
        }

        


    }
}
