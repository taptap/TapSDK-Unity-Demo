using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using System.Security.Cryptography;
using System.Text;
using System;
using UnityNative.Toasts.Example;
using System.Collections.Generic;

public class PostExamplee : MonoBehaviour
    {

            public GUISkin demoSkin;

            string url = "https://poster-api.xd.cn/api/v1.0/cdk/game/submit-simple";
            string clientId = "hskcocvse6x1cgkklm";
            string giftCode = "NZ4mp2cztRMXH";
            string nonceStr = "RFG7U";
            int timestamp = (int)(DateTime.UtcNow.Subtract(new DateTime(1970, 1, 1))).TotalSeconds;
            string sign;
            string characterId = "879a0cdd91djhhd0ddd235nnb917055ee";


    void Start()
    {
        sign = CalculateSHA1(timestamp + nonceStr + clientId);
        Debug.Log("sign："+ sign);

        characterId =  characterId+ timestamp;
        
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

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "无服务器兑换请求", style))
		{
            IEnumerator ie = PostRequest();
           StartCoroutine(ie);
        }
    }

    IEnumerator PostRequest()
    {
        // Create a request object
        UnityWebRequest request = new UnityWebRequest(url, "POST");

        // Set the content type header
        request.SetRequestHeader("Content-Type", "application/json");

        // Create a data object with the request parameters
        RequestData data = new RequestData(clientId, giftCode, characterId, nonceStr, timestamp, sign);

        // Serialize the data object to a JSON string
        string json = JsonUtility.ToJson(data);

        // Set the request body to the JSON string
        request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(json));

        // Send the request and wait for a response
        yield return request.SendWebRequest();

        // Handle the response
        if (request.result == UnityWebRequest.Result.Success)
        {
            string responseText = request.downloadHandler.text;
            Debug.Log("success : " + responseText);
            UnityNativeToastsHelper.ShowShortText("Request successful!");
           


            MyResponseData responseData = JsonUtility.FromJson<MyResponseData>(responseText);
            
            Debug.Log("success : " + responseData.error);
            Debug.Log("success : " + responseData.activity_id);

            yield return responseData;
        }
        else
        {
            UnityNativeToastsHelper.ShowShortText("Request failed!");

            Debug.LogError("API request failed: " + request.error);

            // Get the error response text
            string errorResponseText = request.downloadHandler.text;

            // Parse the error JSON response
            ErrorResponse errorResponse = JsonUtility.FromJson<ErrorResponse>(errorResponseText);

            // Process the error response data
            Debug.Log("Error code : " + errorResponse.error);
            Debug.Log("Error: " + errorResponse.message);
            Debug.Log("Error info: " + errorResponse.info.hint);


        }
    }

    string CalculateSHA1(string input)
    {
        SHA1 sha1 = SHA1.Create();
        byte[] hashData = sha1.ComputeHash(Encoding.UTF8.GetBytes(input));
        StringBuilder builder = new StringBuilder();
        for (int i = 0; i < hashData.Length; i++)
        {
            builder.Append(hashData[i].ToString("x2"));
        }
        return builder.ToString();
    }


    [Serializable]
    public class MyResponseData
    {
        public string activity_id;
        public string content;
        public ContentObj[] content_obj;
        public string nonce_str;
        public string sign;
        public int timestamp;
        public bool success;
        public int error;
        public string c_sign;
        public CustomData custom;
    }

    [Serializable]
    public class ContentObj
    {
        public string name;
        public int number;
    }

    [Serializable]
    public class CustomData
    {
        public string[] seasons;
    }


    [Serializable]
    public class ErrorResponse
    {
        public int error;
        public string message;
        public ErrorInfo info;
    }

    [Serializable]
    public class ErrorInfo
    {
        public string dev_message;
        public string hint;
    }






}




// Define a data class to hold the request parameters
public class RequestData
{
    public string client_id;
    public string gift_code;
    public string character_id;
    public string nonce_str;
    public int timestamp;
    public string sign;

    public RequestData(string clientId, string giftCode, string characterId, string nonceStr, int timestamp, string sign)
    {
        this.client_id = clientId;
        this.gift_code = giftCode;
        this.character_id = characterId;
        this.nonce_str = nonceStr;
        this.timestamp = timestamp;
        this.sign = sign;
    }
}
