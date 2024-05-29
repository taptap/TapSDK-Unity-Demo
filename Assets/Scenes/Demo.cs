using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Security.Cryptography;
using System.Text;
using System;

public class PostExample : MonoBehaviour
{
    private const string url = "https://poster-api.xd.cn/api/v1.0/cdk/game/submit-simple";
    private const string client_id = "hskcocvse6x1cgkklm";
    private const string gift_code = "87CfvvEdbRVPM";
    private const string character_id = "879a0c9105b917055e273d7cc552b2be";
    private const string nonce_str = "RFG7U";
    private string timestamp;
    private string sign;

    IEnumerator Start()
    {
          Debug.Log("开始请求了=====");

        // 获取当前时间戳（秒级）
        timestamp = ((int)(DateTime.UtcNow - new DateTime(1970, 1, 1)).TotalSeconds).ToString();
        
        // 构造签名
        string str = string.Format("{0}{1}{2}", timestamp, nonce_str, client_id);
        sign = GetSHA1(str);

        WWWForm form = new WWWForm();
        form.AddField("client_id", client_id);
        form.AddField("gift_code", gift_code);
        form.AddField("character_id", character_id);
        form.AddField("nonce_str", nonce_str);
        form.AddField("timestamp", timestamp);
        form.AddField("sign", sign);

        var headers = form.headers;
        headers["Content-Type"] = "application/json";

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            www.uploadHandler = new UploadHandlerRaw(form.data);
            www.downloadHandler = new DownloadHandlerBuffer();
            www.SetRequestHeader("Content-Type", "application/json");
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log("结束请求了=====");

                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("结束请求了=====");
                Debug.Log(www.downloadHandler.text);
            }
        }
    }

    // SHA1加密
    private string GetSHA1(string str)
    {
        SHA1 sha1 = new SHA1CryptoServiceProvider();
        byte[] bytes_in = Encoding.Default.GetBytes(str);
        byte[] bytes_out = sha1.ComputeHash(bytes_in);
        sha1.Dispose();
        string result = BitConverter.ToString(bytes_out);
        result = result.Replace("-", "").ToLower();
        return result;
    }
}