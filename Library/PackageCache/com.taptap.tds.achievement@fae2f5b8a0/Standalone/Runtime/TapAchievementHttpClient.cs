using System;
using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using System.Security.Cryptography;
using LC.Newtonsoft.Json;
using LeanCloud;
using LeanCloud.Common;
using TapTap.Bootstrap;

namespace TapTap.Achievement.Standalone {
    public class TapAchievementHttpClient {
        private readonly string appId;
        private readonly string appKey;
        private readonly string server;

        private readonly MD5 md5;

        private readonly HttpClient client;

        public TapAchievementHttpClient(string appId, string appKey, string server) {
            this.appId = appId;
            this.appKey = appKey;
            this.server = server;

            md5 = MD5.Create();

            client = new HttpClient();
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
            client.DefaultRequestHeaders.Add("X-LC-Id", appId);
        }

        public Task<T> Get<T>(string path,
            Dictionary<string, object> headers = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(path, HttpMethod.Get, headers, null, queryParams);
        }

        public Task<T> Post<T>(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(path, HttpMethod.Post, headers, data, queryParams);
        }

        async Task<T> Request<T>(string path,
            HttpMethod method,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            string url = BuildUrl(path, queryParams);
            HttpRequestMessage request = new HttpRequestMessage {
                RequestUri = new Uri(url),
                Method = method,
            };
            await FillHeaders(request.Headers, headers);

            string content = null;
            if (data != null) {
                content = JsonConvert.SerializeObject(data);
                StringContent requestContent = new StringContent(content);
                requestContent.Headers.ContentType = new MediaTypeHeaderValue("application/json");
                request.Content = requestContent;
            }
            LCHttpUtils.PrintRequest(client, request, content);
            HttpResponseMessage response = await client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead);
            request.Dispose();

            string resultString = await response.Content.ReadAsStringAsync();
            response.Dispose();
            LCHttpUtils.PrintResponse(response, resultString);

            if (response.IsSuccessStatusCode) {
                T ret = JsonConvert.DeserializeObject<T>(resultString,
                    LCJsonConverter.Default);
                return ret;
            }
            throw HandleErrorResponse(response.StatusCode, resultString);
        }

        LCException HandleErrorResponse(HttpStatusCode statusCode, string responseContent) {
            int code = (int)statusCode;
            string message = responseContent;

            try {
                // 尝试获取返回错误信息
                Dictionary<string, object> result = JsonConvert.DeserializeObject<Dictionary<string, object>>(responseContent,
                    LCJsonConverter.Default);
                if (result.TryGetValue("data", out object dataObj) &&
                    dataObj is Dictionary<string, object> data) {
                    code = (int)data["code"];
                    message = data["error"] as string;
                }
            } catch (Exception e) {
                LCLogger.Error(e);
            }

            return new LCException(code, message);
        }

        string BuildUrl(string path, Dictionary<string, object> queryParams) {
            StringBuilder urlSB = new StringBuilder(server.TrimEnd('/'));
            urlSB.Append($"/{path}");
            string url = urlSB.ToString();
            if (queryParams != null) {
                IEnumerable<string> queryPairs = queryParams.Select(kv => $"{kv.Key}={kv.Value}");
                string queries = string.Join("&", queryPairs);
                url = $"{url}?{queries}";
            }
            return url;
        }

        async Task FillHeaders(HttpRequestHeaders headers, Dictionary<string, object> reqHeaders = null) {
            // 额外 headers
            if (reqHeaders != null) {
                foreach (KeyValuePair<string, object> kv in reqHeaders) {
                    headers.Add(kv.Key, kv.Value.ToString());
                }
            }
            // 签名
            long timestamp = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            string data = $"{timestamp}{appKey}";
            string hash = GetMd5Hash(md5, data);
            string sign = $"{hash},{timestamp}";
            headers.Add("X-LC-Sign", sign);
            // 当前用户 session
            TDSUser user = await TDSUser.GetCurrent();
            if (user != null) {
                headers.Add("X-LC-Session", user.SessionToken);
            }
        }

        static string GetMd5Hash(MD5 md5Hash, string input) {
            byte[] data = md5Hash.ComputeHash(Encoding.UTF8.GetBytes(input));
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < data.Length; i++) {
                sb.Append(data[i].ToString("x2"));
            }
            return sb.ToString();
        }
    }
}
