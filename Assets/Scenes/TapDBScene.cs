using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TapTap.TapDB;

public class TapDBScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private string serverName = "serverName";
    private string userName = "userName";
    private string level = "1";

    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 30;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 30;
        labelStyle.alignment = TextAnchor.MiddleLeft;


        if (GUI.Button(new Rect(50, 100, 160, 80), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }

        GUI.Label(new Rect(50, 250, 220, 80), "服务器", labelStyle);
        GUI.Label(new Rect(50, 380, 220, 80), "用户名", labelStyle);
        GUI.Label(new Rect(50, 510, 220, 80), "用户等级", labelStyle);
        GUI.Label(new Rect(50, 640, 220, 80), "充值", labelStyle);
        GUI.Label(new Rect(50, 770, 220, 80), "事件", labelStyle);


        GUIStyle inputStyle = new GUIStyle(GUI.skin.textArea);
        inputStyle.fontSize = 30;
        serverName = GUI.TextArea(new Rect(210, 250, 350, 80), serverName, inputStyle);
        userName = GUI.TextArea(new Rect(210, 380, 350, 80), userName, inputStyle);
        level = GUI.TextArea(new Rect(210, 510, 50, 80), level, inputStyle);

        if (GUI.Button(new Rect(580, 250, 160, 80), "服务器", style))
        {
            TapDB.SetServer(serverName);
        }

        if (GUI.Button(new Rect(580, 380, 160, 80), "用户名", style))
        {
            TapDB.SetName(userName);
        }

        if (GUI.Button(new Rect(580, 510, 160, 80), "等级", style))
        {
            int rel = int.Parse(level);
            TapDB.SetLevel(rel);
        }

        if (GUI.Button(new Rect(580, 640, 160, 80), "充值", style))
        {
            TapDB.OnCharge("12345", "890", 1, "eur", "paypal");
        }

        if (GUI.Button(new Rect(580, 770, 160, 80), "事件", style))
        {
            TapDB.TrackEvent("eventCode", "{\"event\":\"123\"}");
        }


        
    }
}
