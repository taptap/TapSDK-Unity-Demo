using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Text;
using System.Text.RegularExpressions;
using TapTap.Common;
using UnityEngine;

namespace TapTap.Login.Internal
{
    public class Net : MonoBehaviour
    {
        public delegate void Action();

        // ReSharper disable Unity.PerformanceAnalysis
        public void PostAsync(string url, Dictionary<string, string> queryParams, Dictionary<string, string> formParams, Action<string> methodForResult, Action<int, string> methodForError)
        {
            if (string.IsNullOrEmpty(url))
            {
                methodForError(-1, "empty url");
                return;
            }
            StartCoroutine(Post(url, queryParams, formParams, methodForResult, methodForError));
        }

        // ReSharper disable Unity.PerformanceAnalysis
        public void GetAsync(string url, string authorization, Dictionary<string, string> queryParams, Action<string> methodForResult, Action<int, string> methodForError)
        {
            if (string.IsNullOrEmpty(url))
            {
                methodForError(-1, "empty url");
                return;
            }
            StartCoroutine(Get(url, authorization, queryParams, methodForResult, methodForError));
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private IEnumerator Get(string url, string authorization, Dictionary<string, string> queryParams, Action<string> methodForResult, Action<int, string> methodForError)
        {
            string baseUrl;
            Dictionary<string, string> finalQueryParams = queryParams ?? new Dictionary<string, string>();
            NameValueCollection collection = new NameValueCollection();
            ParseUrl(url, out baseUrl, out collection);
            foreach (string key in collection.AllKeys)
            {
                foreach (string value in collection.GetValues(key))
                {
                    finalQueryParams.Add(key, value);
                }
            }
            string finalUrl;
            if (finalQueryParams.Count == 0)
            {
                finalUrl = baseUrl;
            }
            else
            {
                finalUrl = baseUrl + "?" + DictToQueryString(finalQueryParams);
            }


            Dictionary<string, string> headers = new Dictionary<string, string>();
            headers.Add("User-Agent", "TapTapUnitySDK/" + TapTapSdk.Version + " " + "UnityPlayer/" + Application.unityVersion);
            headers.Add("Authorization", authorization);
            WWW w = new WWW(finalUrl, null, headers);
            PrintRequest(w, "GET", null, headers);
            yield return w;
            PrintResponse(w);
            if (!string.IsNullOrEmpty(w.error))
            {
                string data = w.text;
                if (data != null)
                {
                    methodForError(GetResponseCode(w), data);
                }
                else
                {
                    methodForError(GetResponseCode(w), w.error);
                }

                w.Dispose();
                yield break;
            }
            else
            {
                string data = w.text;
                if (data != null)
                {
                    methodForResult(w.text);
                    yield break;
                }
                else
                {
                    methodForError(GetResponseCode(w), "Empyt response from server : " + url);
                }
            }
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private IEnumerator Post(string url, Dictionary<string, string> queryParams, Dictionary<string, string> formParams, Action<string> methodForResult, Action<int, string> methodForError)
        {
            string baseUrl;
            Dictionary<string, string> finalQueryParams = queryParams ?? new Dictionary<string, string>();
            NameValueCollection collection = new NameValueCollection();
            ParseUrl(url, out baseUrl, out collection);
            foreach (string key in collection.AllKeys)
            {
                foreach (string value in collection.GetValues(key))
                {
                    finalQueryParams.Add(key, value);
                }
            }
            string finalUrl;
            if(finalQueryParams.Count == 0)
            {
                finalUrl = baseUrl;
            } else
            {
                finalUrl = baseUrl + "?" + DictToQueryString(finalQueryParams);
            }
            WWWForm wwwForm = new WWWForm();
            Dictionary<string, string> finalFormParams = formParams ?? new Dictionary<string, string>();
            foreach (KeyValuePair<string, string> kv in finalFormParams)
            {
                // Debug.Log($"kv.key:{kv.Key} value:{kv.Value}");
                wwwForm.AddField(kv.Key, kv.Value);
;            }


            Dictionary<string, string> headers = new Dictionary<string, string>();
            headers.Add("User-Agent", "TapTapUnitySDK/1.0 " + "UnityPlayer/" + Application.unityVersion);
            WWW w = new WWW(finalUrl, wwwForm.data, headers);
            PrintRequest(w, "POST", wwwForm, headers);
            yield return w;
            PrintResponse(w);
            if (!string.IsNullOrEmpty(w.error))
            {
                string data = w.text;
                if (data != null)
                {
                    methodForError(GetResponseCode(w), data);
                }
                else
                {
                    methodForError(GetResponseCode(w), w.error);
                }

                w.Dispose();
                yield break;
            }
            else
            {
                string data = w.text;
                if (data != null)
                {
                    methodForResult(w.text);
                    yield break;
                }
                else
                {
                    methodForError(GetResponseCode(w), "Empyt response from server : " + url);
                }
            }
        }
        public static void PrintRequest(WWW request, string method, WWWForm wwwFrom, Dictionary<string, string> headers) {
            if (TapLogger.LogDelegate == null) {
                return;
            }
            if (request == null) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("=== HTTP Request Start ===");
            sb.AppendLine($"URL: {request.url}");
            sb.AppendLine($"Method: {method}");
            
            sb.AppendLine($"Headers: \t");
            if (wwwFrom?.headers != null)
            {
                foreach (var header in wwwFrom.headers) {
                    sb.AppendLine($"{header.Key}: {header.Value}");
                }
            }

            if (headers != null)
            {
                foreach (var header in headers) {
                    sb.AppendLine($"{header.Key}: {header.Value}");
                }
            }
            sb.AppendLine("=== HTTP Request End ===");
            TapLogger.Debug(sb.ToString());
        }
        
        private static void PrintResponse(WWW response) {
            if (TapLogger.LogDelegate == null) {
                return;
            }
            StringBuilder sb = new StringBuilder();
            sb.AppendLine("=== HTTP Response Start ===");
            sb.AppendLine($"URL: {response.url}");
            sb.AppendLine($"Status Code: {GetResponseCode(response)}");
            sb.AppendLine($"error: {response.error}");
            if (!string.IsNullOrEmpty(response.text)) {
                sb.AppendLine($"Content: {response.text}");
            }
            sb.AppendLine("=== HTTP Response End ===");
            TapLogger.Debug(sb.ToString());
        }

        public static int GetResponseCode(WWW request)
        {
            int ret = 0;
            if (request.responseHeaders == null)
            {
                Debug.LogError("no response headers.");
            }
            else
            {
                if (!request.responseHeaders.ContainsKey("STATUS"))
                {
                    Debug.LogError("response headers has no STATUS.");
                }
                else
                {
                    ret = ParseResponseCode(request.responseHeaders["STATUS"]);
                }
            }

            return ret;
        }

        public static int ParseResponseCode(string statusLine)
        {
            int ret = 0;

            string[] components = statusLine.Split(' ');
            if (components.Length < 3)
            {
                Debug.LogError("invalid response status: " + statusLine);
            }
            else
            {
                if (!int.TryParse(components[1], out ret))
                {
                    Debug.LogError("invalid response code: " + components[1]);
                }
            }

            return ret;
        }

        public static string DictToQueryString(IDictionary<string, string> dict)
        {
            List<string> list = new List<string>();
            foreach (var item in dict)
            {
                list.Add(item.Key + "=" + item.Value);
            }
            return string.Join("&", list.ToArray());
        }

        public static void ParseUrl(string url, out string baseUrl, out NameValueCollection nvc)
        {
            if (url == null)
                throw new ArgumentNullException("url");
            nvc = new NameValueCollection();
            baseUrl = "";
            if (url == "")
                return;
            int questionMarkIndex = url.IndexOf('?');
            if (questionMarkIndex == -1)
            {
                baseUrl = url;
                return;
            }
            baseUrl = url.Substring(0, questionMarkIndex);
            if (questionMarkIndex == url.Length - 1)
                return;
            string ps = url.Substring(questionMarkIndex + 1);
            Regex re = new Regex(@"(^|&)?(\w+)=([^&]+)(&|$)?", RegexOptions.None);
            MatchCollection mc = re.Matches(ps);
            foreach (Match m in mc)
            {
                nvc.Add(m.Result("$2").ToLower(), m.Result("$3"));
            }
        }

    }
}