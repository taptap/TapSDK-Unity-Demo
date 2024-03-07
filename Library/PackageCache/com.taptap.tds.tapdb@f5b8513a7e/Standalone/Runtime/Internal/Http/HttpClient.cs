using System;
using System.Threading.Tasks;
using System.Collections.Generic;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Linq;
using LC.Newtonsoft.Json;
using TapTap.Common;
using TapTap.Common.Internal.Http;

namespace TapTap.TapDB.Standalone.Internal {
    public class HttpClient {
        private readonly string serverUrl;
        private readonly string apiVersion;

        private readonly System.Net.Http.HttpClient client;


        public HttpClient(string serverUrl, string apiVersion) {
            client = new System.Net.Http.HttpClient(new MessageHandler());
            client.Timeout = TimeSpan.FromSeconds(5);
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));

            this.serverUrl = serverUrl;
            this.apiVersion = apiVersion;
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

        public Task<T> Put<T>(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(path, HttpMethod.Put, headers, data, queryParams);
        }

        public Task Delete(string path,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<Dictionary<string, object>>(path, HttpMethod.Delete, headers, data, queryParams);
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
            FillHeaders(request.Headers, headers);

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
                T ret = JsonConvert.DeserializeObject<T>(resultString);
                return ret;
            }

            throw HandleErrorResponse(response.StatusCode, resultString);
        }

        Exception HandleErrorResponse(HttpStatusCode statusCode, string responseContent) {
            int code = (int)statusCode;
            string message = responseContent;
            // TODO 解析错误

            return new TapException(code, message);
        }

        string BuildUrl(string path, Dictionary<string, object> queryParams) {
            string url = $"{serverUrl}/{apiVersion}/{path}";
            if (queryParams != null) {
                IEnumerable<string> queryPairs = queryParams.Select(kv => $"{kv.Key}={Uri.EscapeDataString(kv.Value.ToString())}");
                string queries = string.Join("&", queryPairs);
                url = $"{url}?{queries}";
            }
            return url;
        }

        void FillHeaders(HttpRequestHeaders headers, Dictionary<string, object> reqHeaders = null) {
            // 额外 headers
            if (reqHeaders != null) {
                foreach (KeyValuePair<string, object> kv in reqHeaders) {
                    headers.Add(kv.Key, kv.Value.ToString());
                }
            }
        }
    }
}
