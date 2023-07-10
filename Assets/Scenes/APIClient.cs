using UnityEngine.Networking;
using System;
using System.Text;
using System.Security.Cryptography;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class APIClient : MonoBehaviour
{
    private const string apiUrl = "https://poster-api.xd.cn/api/v1.0/cdk/game/submit-simple";
    private const string contentType = "application/json";
    private const string clientId = "hskcocvse6x1cgkklm";
    private const string giftCode = "NZ4mp2cztRMXH";
    private const string characterId = "879a0cdd9nnb917055ee";
    private const string nonceStr = "RFG7U";

    public GUISkin demoSkin;


    void Start()
    {

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

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "无服务器兑换", style))
        {
             StartCoroutine(StartRequest());
        }


    }

    private IEnumerator StartRequest()
    {
        // 获取当前时间戳（秒）
        int timestamp = (int)(System.DateTime.UtcNow.Subtract(new System.DateTime(1970, 1, 1))).TotalSeconds;

        // 拼接并加密 sign 参数
        string sign = GetSign(timestamp, nonceStr, clientId);

        // 构建请求参数
        string requestBody = "{\"client_id\":\"" + clientId + "\",\"gift_code\":\"" + giftCode + "\",\"character_id\":\"" + characterId + "\",\"nonce_str\":\"" + nonceStr + "\",\"timestamp\":" + timestamp + ",\"sign\":\"" + sign + "\"}";

        // 创建 UnityWebRequest 对象
        UnityWebRequest request = new UnityWebRequest(apiUrl, "POST");

        // 设置请求头
        request.SetRequestHeader("Content-Type", contentType);

        // 设置请求体
        byte[] bodyRaw = Encoding.UTF8.GetBytes(requestBody);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();

        // 发送请求
        yield return request.SendWebRequest();

        // 处理响应
        if (request.result == UnityWebRequest.Result.Success)
        {
            Debug.Log("API request succeeded");
            Debug.Log(request.downloadHandler.text);
        }
        else
        {

            Debug.Log("API request failed: " + request.error);
            Debug.Log(request.downloadHandler.text);

        }
    }

    private string GetSign(int timestamp, string nonceStr, string clientId)
    {
        // 拼接参数并进行 SHA1 加密
        string signString = timestamp.ToString() + nonceStr + clientId;
        byte[] signBytes = Encoding.UTF8.GetBytes(signString);
        byte[] signHash = new SHA1CryptoServiceProvider().ComputeHash(signBytes);
        string sign = BitConverter.ToString(signHash).Replace("-", "").ToLowerInvariant();

        return sign;
    }
}
