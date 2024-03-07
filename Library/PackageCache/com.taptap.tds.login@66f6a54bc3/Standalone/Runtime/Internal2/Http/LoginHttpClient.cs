using System;
using System.Net;
using System.Text;
using System.Linq;
using System.Collections.Generic;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using System.Security.Cryptography;
using LC.Newtonsoft.Json;
using TapTap.Common;
using TapTap.Common.Internal.Json;
using TapTap.Common.Internal.Http;

namespace TapTap.Login.Internal.Http {
    public class LoginHttpClient {
        private readonly HttpClient client;

        public LoginHttpClient() {
            client = new HttpClient();
            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/x-www-form-urlencoded"));
        }

        public Task<T> Get<T>(string url,
            Dictionary<string, object> headers = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(url, HttpMethod.Get, headers, null, queryParams);
        }

        public Task<T> Post<T>(string url,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(url, HttpMethod.Post, headers, data, queryParams);
        }

        public Task<T> Put<T>(string url,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<T>(url, HttpMethod.Put, headers, data, queryParams);
        }

        public Task Delete(string url,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            return Request<Dictionary<string, object>>(url, HttpMethod.Delete, headers, data, queryParams);
        }

        async Task<T> Request<T>(string url,
            HttpMethod method,
            Dictionary<string, object> headers = null,
            object data = null,
            Dictionary<string, object> queryParams = null) {
            url = BuildUrl(url, queryParams);
            HttpRequestMessage request = new HttpRequestMessage {
                RequestUri = new Uri(url),
                Method = method,
            };
            FillHeaders(request.Headers, headers);

            string content = null;
            if (data != null) {
                content = JsonConvert.SerializeObject(data);
                Dictionary<string, string> formData = JsonConvert.DeserializeObject<Dictionary<string, object>>(content)
                    .ToDictionary(item => item.Key, item => item.Value.ToString());
                FormUrlEncodedContent requestContent = new FormUrlEncodedContent(formData);
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
                ErrorResponse response = JsonConvert.DeserializeObject<ErrorResponse>(responseContent,
                    TapJsonConverter.Default);
                code = response.Data.Code;
                message = response.Data.Error;
            } catch (Exception e) {
                TapLogger.Error(e);
            }
            return new TapException(code, message);
        }

        string BuildUrl(string url, Dictionary<string, object> queryParams) {
            if (queryParams != null) {
                IEnumerable<string> queryPairs = queryParams.Select(kv => $"{kv.Key}={kv.Value}");
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

            // 签名
            long timestamp = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            string hash = GetMd5Hash($"{timestamp}");
            string sign = $"{hash},{timestamp}";
            headers.Add("X-LC-Sign", sign);
        }

        static string GetMd5Hash(string input) {
            MD5 md5 = MD5.Create();
            byte[] data = md5.ComputeHash(Encoding.UTF8.GetBytes(input));
            return ToHex(data);
        }

        static string ToHex(byte[] bytes) {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < bytes.Length; i++) {
                sb.Append(bytes[i].ToString("x2"));
            }
            return sb.ToString();
        }
    }
}