using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Text;
using System.Security.Cryptography;

namespace MyNamespace {
    public class PostExamplee : MonoBehaviour
    {
        const string url = "https://poster-api.xd.cn/api/v1.0/cdk/game/submit-simple";
        const string clientId = "hskcocvse6x1cgkklm";
        const string giftCode = "87CfvvEdbRVPM";
        const string characterId = "879a0c9105b917055e273d799vcc552b2be";
        const string nonceStr = "RFG7U";

        void Start()
        {
            StartCoroutine(PostRequest());
        }

        IEnumerator PostRequest()
        {
            // 构造请求参数
            int timestamp = (int)(DateTime.UtcNow - new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc)).TotalSeconds;
            string sign = GenerateSign(clientId, timestamp, nonceStr);
            Dictionary<string, string> formData = new Dictionary<string, string>();
            formData["client_id"] = clientId;
            formData["gift_code"] = giftCode;
            formData["character_id"] = characterId;
            formData["nonce_str"] = nonceStr;
            formData["timestamp"] = timestamp.ToString();
            formData["sign"] = sign;
            string formDataJson = JsonUtility.ToJson(formData);

            Debug.Log("========sign:"+ sign);
            Debug.Log("========timestamp:"+ timestamp);

            // 发送POST请求
            using (UnityWebRequest request = UnityWebRequest.Post(url, formDataJson))
            {
                request.SetRequestHeader("Content-Type", "application/json");
                yield return request.SendWebRequest();

                if (request.result != UnityWebRequest.Result.Success)
                {
                    Debug.Log("=======3333333 ");
                    Debug.Log(request.error);
                    if (!string.IsNullOrEmpty(request.downloadHandler.text))
                    {
                        Debug.Log("错误信息: " + request.downloadHandler.text);
                    }
                    Debug.Log("=======3333333====== ");
                    
                }
                else
                {
                    Debug.Log("=======4444444 ");
                    Debug.Log(request.downloadHandler.text);
                    Debug.Log("=======5555555 ");
                    
                }
            }
        }

        string GenerateSign(string clientId, int timestamp, string nonceStr)
        {
            string concatenatedString = timestamp.ToString() + nonceStr + clientId;
            byte[] bytesToHash = Encoding.UTF8.GetBytes(concatenatedString);
            SHA1Managed sha1 = new SHA1Managed();
            byte[] hashBytes = sha1.ComputeHash(bytesToHash);
            StringBuilder hex = new StringBuilder(hashBytes.Length * 2);
            foreach (byte b in hashBytes)
            {
                hex.AppendFormat("{0:x2}", b);
            }
            return hex.ToString();
        }
    }
}
