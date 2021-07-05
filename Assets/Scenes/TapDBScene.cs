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
        style.fontSize = 40;

        GUIStyle labelStyle = new GUIStyle(GUI.skin.label);
        labelStyle.fontSize = 40;
        labelStyle.alignment = TextAnchor.MiddleLeft;


        GUI.Label(new Rect(50, 150, 220, 80), "服务器", labelStyle);
        GUI.Label(new Rect(50, 280, 220, 80), "用户名", labelStyle);
        GUI.Label(new Rect(50, 410, 220, 80), "用户等级", labelStyle);
        GUI.Label(new Rect(50, 540, 220, 80), "充值", labelStyle);
        GUI.Label(new Rect(50, 670, 220, 80), "事件", labelStyle);


        GUIStyle inputStyle = new GUIStyle(GUI.skin.textArea);
        inputStyle.fontSize = 35;
        serverName = GUI.TextArea(new Rect(210, 150, 350, 100), serverName, inputStyle);
        userName = GUI.TextArea(new Rect(210, 280, 350, 100), userName, inputStyle);
        level = GUI.TextArea(new Rect(210, 410, 350, 100), level, inputStyle);

        if (GUI.Button(new Rect(580, 150, 160, 100), "服务器", style))
        {
            TapDB.SetServer(serverName);
        }

        if (GUI.Button(new Rect(580, 280, 160, 100), "用户名", style))
        {
            TapDB.SetName(userName);
        }

        if (GUI.Button(new Rect(580, 410, 160, 100), "等级", style))
        {
            int rel = int.Parse(level);
            TapDB.SetLevel(rel);
        }

        if (GUI.Button(new Rect(580, 540, 160, 100), "充值", style))
        {
            TapDB.OnCharge("12345", "890", 1, "eur", "paypal");
        }

        if (GUI.Button(new Rect(580, 670, 160, 100), "事件", style))
        {
            TapDB.OnEvent("eventCode", "{\"event\":\"123\"}");
        }


        if (GUI.Button(new Rect(50, 860, 160, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
