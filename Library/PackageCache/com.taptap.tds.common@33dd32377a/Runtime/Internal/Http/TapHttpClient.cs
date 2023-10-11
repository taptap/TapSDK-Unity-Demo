using System;
using System.Linq;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text;
using LC.Newtonsoft.Json;
using TapTap.Common.Internal.Json;

namespace TapTap.Common.Internal.Http {
    public class TapHttpClient {
        private readonly string clientId;

        private readonly string clientToken;

        private readonly string serverUrl;

        readonly HttpClient client;

        private Dictionary<string, Func<Task<string>>> runtimeHeaderTasks = new Dictionary<string, Func<Task<string>>>();

        private Dictionary<string, string> additionalHeaders = new Dictionary<string, string>();

        public TapHttpClient(string clientID, string clientToken, string serverUrl) {
            this.clientId = clientID;
            this.clientToken = clientToken;
            this.serverUrl = serverUrl;

            client = new HttpClient();
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
            client.DefaultRequestHeaders.Add("X-LC-Id", clientID);
        }

        public void AddRuntimeHeaderTask(string key, Func<Task<string>> task) {
            if (string.IsNullOrEmpty(key)) {
                return;
            }
            if (task == null) {
                return;
            }
            runtimeHeaderTasks[key] = task;
        }

        public void AddAddtionalHeader(string key, string value) {
            if (string.IsNullOrEmpty(key)) {
                return;
            }
            if (string.IsNullOrEmpty(value)) {
                return;
            }
            additionalHeaders[key] = value;
        }

        public Task<T> Get<T>(string path,
            Dictionary<string, object> headers = null,
            Dictionary<string, object> queryParams = null,
            bool withAPIVersion = true) {
            return Request<T>(path, HttpMethod.Get, headers, null, queryParams, withAPIVersion);
        }

        public Task<T> Post<T>(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null,
            bool withAPIVersion = true) {
            return Request<T>(path, HttpMethod.Post, headers, data, queryParams, withAPIVersion);
        }

        public Task<T> Put<T>(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null,
            bool withAPIVersion = true) {
            return Request<T>(path, HttpMethod.Put, headers, data, queryParams, withAPIVersion);
        }

        public Task Delete(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null,
            bool withAPIVersion = true) {
            return Request<Dictionary<string, object>>(path, HttpMethod.Delete, headers, data, queryParams, withAPIVersion);
        }

        async Task<T> Request<T>(string path,
            HttpMethod method,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null,
            bool withAPIVersion = true) {
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
            TapHttpUtils.PrintRequest(client, request, content);
            HttpResponseMessage response = await client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead);
            request.Dispose();

            string resultString = await response.Content.ReadAsStringAsync();
            response.Dispose();
            TapHttpUtils.PrintResponse(response, resultString);

            if (response.IsSuccessStatusCode) {
                T ret = JsonConvert.DeserializeObject<T>(resultString,
                    TapJsonConverter.Default);
                return ret;
            }
            throw HandleErrorResponse(response.StatusCode, resultString);
        }

        TapException HandleErrorResponse(HttpStatusCode statusCode, string responseContent) {
            int code = (int)statusCode;
            string message = responseContent;
            try {
                // 尝试获取 LeanCloud 返回错误信息
                Dictionary<string, object> error = JsonConvert.DeserializeObject<Dictionary<string, object>>(responseContent,
                    TapJsonConverter.Default);
                code = (int)error["code"];
                message = error["error"].ToString();
            } catch (Exception e) {
                TapLogger.Error(e);
            }
            return new TapException(code, message);
        }

        string BuildUrl(string path, Dictionary<string, object> queryParams) {
            string apiServer = serverUrl;
            StringBuilder urlSB = new StringBuilder(apiServer.TrimEnd('/'));
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
            if (additionalHeaders.Count > 0) {
                foreach (KeyValuePair<string, string> kv in additionalHeaders) {
                    headers.Add(kv.Key, kv.Value);
                }
            }
            // 服务额外 headers
            foreach (KeyValuePair<string, Func<Task<string>>> kv in runtimeHeaderTasks) {
                if (headers.Contains(kv.Key)) {
                    continue;
                }
                string value = await kv.Value.Invoke();
                if (value == null) {
                    continue;
                }
                headers.Add(kv.Key, value);
            }
        }
    }
}
