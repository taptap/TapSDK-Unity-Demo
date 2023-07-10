using System;
using System.Threading.Tasks;
using System.Collections.Generic;
using System.Linq;
using TapTap.Login;
using TapTap.Common;
using TapTap.Login.Internal;
using System.Net.Http;
using System.Net.Http.Headers;
using TapTap.Common.Internal.Json;
using TapTap.Common.Internal.Http;
using LC.Newtonsoft.Json;
using System.Security.Cryptography;
using System.Text;

namespace TapTap.Friends {
    public class TapFriends {
        private static HttpClient httpClient = null;

        public static async Task<TapFriendResult> QueryMutualList(string cursor = null, int size = 100) {
            AccessToken accessToken = await TapLogin.GetAccessToken();
            if (accessToken == null) {
                throw new ArgumentNullException(nameof(accessToken));
            }
            string url = $"{TapTapSdk.CurrentRegion.ApiHost()}/friends/v1/list";
            Dictionary<string, object> queryParams = new Dictionary<string, object> {
                { "max_size", size },
                {"client_id",TapTapSdk.ClientId }
            };
            if (!string.IsNullOrEmpty(cursor)) {
                queryParams.Add("continuation_token", cursor);
            }
            IEnumerable<string> queryPairs = queryParams.Select(kv => $"{kv.Key}={kv.Value}");
            string queries = string.Join("&", queryPairs);
            url = $"{url}?{queries}";

            var dt = DateTime.UtcNow - new DateTime(1970, 1, 1);
            var ts = (int)dt.TotalSeconds;
            var uri = new Uri(url);
            Dictionary<string, object> headers = new Dictionary<string, object> {
                { "Authorization", "MAC " + GetAuthorizationHeader(accessToken.kid,accessToken.macKey,accessToken.macAlgorithm,
                 "GET",uri.PathAndQuery,uri.Host,"443", ts)}
            };
            if (httpClient == null)
            {
                httpClient = new HttpClient();
                httpClient.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
                httpClient.DefaultRequestHeaders.AcceptCharset.Add(new StringWithQualityHeaderValue("utf-8"));

            }
            HttpRequestMessage request = new HttpRequestMessage
            {
                RequestUri = new Uri(url),
                Method = HttpMethod.Get,
            };
            HttpRequestHeaders reqHeaders = request.Headers;
            if (reqHeaders != null)
            {
                foreach (KeyValuePair<string, object> kv in headers)
                {
                    reqHeaders.Add(kv.Key, kv.Value.ToString());
                }
            }
            TapHttpUtils.PrintRequest(httpClient, request);

            HttpResponseMessage originResponse = await httpClient.SendAsync(request, HttpCompletionOption.ResponseHeadersRead);
            request.Dispose();
            string resultString = await originResponse.Content.ReadAsStringAsync();
            originResponse.Dispose();
            TapHttpUtils.PrintResponse(originResponse, resultString);

            Dictionary<string, object> response;
            if (originResponse.IsSuccessStatusCode)
            {
                response = JsonConvert.DeserializeObject<Dictionary<string, object>>(resultString,
                    TapJsonConverter.Default); 
            }
            else
            {
                throw new TapException(((int)originResponse.StatusCode), resultString);
            }
            if (response.TryGetValue("data", out object dataObj) &&
                dataObj is Dictionary<string, object> data) {
                TapFriendResult result = new TapFriendResult();
                if (data.TryGetValue("list", out object listObj) && listObj is List<object> list) {
                    result.FriendList = list.Cast<Dictionary<string, object>>()
                    .Select(item => new TapFriendInfo {
                        OpenId = item["openid"] as string,
                        Name = item.TryGetValue("nickname", out object nicknameObj) && (nicknameObj is string nickname) ?
                            nickname : null,
                        Avatar = item.TryGetValue("avatar", out object avatarObj) && (avatarObj is string avatar) ?
                            avatar : null
                    })
                    .ToList()
                    .AsReadOnly();

                    result.Cursor = data.TryGetValue("is_truncated", out object isTruncatedObj) &&
                            isTruncatedObj is bool isTruncated &&
                            isTruncated ?
                            (data.TryGetValue("next_continuation_token", out object nextSkipObj) &&
                            (nextSkipObj is string nextSkip) ?
                            nextSkip : null) : null;
                    return result;
                    
                }
            }
            return null;
        }

        private static string GetAuthorizationHeader(string kid,
            string macKey,
            string macAlgorithm,
            string method,
            string uri,
            string host,
            string port,
            int timestamp)
        {
            var nonce = new Random().Next().ToString();

            var normalizedString = $"{timestamp}\n{nonce}\n{method}\n{uri}\n{host}\n{port}\n\n";

            HashAlgorithm hashGenerator;
            switch (macAlgorithm)
            {
                case "hmac-sha-256":
                    hashGenerator = new HMACSHA256(Encoding.ASCII.GetBytes(macKey));
                    break;
                case "hmac-sha-1":
                    hashGenerator = new HMACSHA1(Encoding.ASCII.GetBytes(macKey));
                    break;
                default:
                    throw new InvalidOperationException("Unsupported MAC algorithm");
            }

            var hash = Convert.ToBase64String(hashGenerator.ComputeHash(Encoding.ASCII.GetBytes(normalizedString)));

            var authorizationHeader = new StringBuilder();
            authorizationHeader.AppendFormat(@"id=""{0}"",ts=""{1}"",nonce=""{2}"",mac=""{3}""",
                kid, timestamp, nonce, hash);

            return authorizationHeader.ToString();
        }
    }
}
