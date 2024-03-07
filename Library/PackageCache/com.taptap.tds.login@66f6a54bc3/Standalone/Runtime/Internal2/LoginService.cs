using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using TapTap.Login.Internal.Http;

namespace TapTap.Login.Internal {
    public static class LoginService {
        private static readonly LoginHttpClient httpClient = new LoginHttpClient();

        public static LoginHttpClient HttpClient => httpClient;

        public static async Task<QRCodeData> GetQRCodeUrl(string clientId, string[] permissions) {
            Dictionary<string, object> data = new Dictionary<string, object> {
                { "client_id", clientId },
                { "response_type", "device_code" },
                { "scope", string.Join(",", permissions) },
                { "version", TapTapSdk.Version },
                { "platform", "unity" },
                { "info", "{\"device_id\":\"" + SystemInfo.deviceModel + "\"}" }
            };
            QRCodeResponse response = await httpClient.Post<QRCodeResponse>(TapTapSdk.CurrentRegion.CodeUrl(), 
                data: data);
            return response.Data;
        }

        public static async Task<TokenData> Authorize(string clientId, string code) {
            Dictionary<string, string> data = new Dictionary<string, string> {
                { "client_id", clientId },
                { "grant_type", "authorization_code" },
                { "secret_type", "hmac-sha-1" },
                { "code", code },
                { "redirect_uri", WebLoginRequestManager.Instance.GetCurrentRequest().GetRedirectUri() },
                { "code_verifier", WebLoginRequestManager.Instance.GetCodeVerifier() }
            };
            TokenResponse response = await httpClient.Post<TokenResponse>(TapTapSdk.CurrentRegion.TokenUrl(), 
                data: data);
            return response.Data;
        }

        public static async Task<TokenData> RequestScanQRCodeResult(string clientId, string deviceCode) {
            Dictionary<string, string> data = new Dictionary<string, string> {
                { "grant_type", "device_token" },
                { "client_id", clientId },
                { "secret_type", "hmac-sha-1" },
                { "code", deviceCode },
                { "version", "1.0" },
                { "platform", "unity" },
                { "info", "{\"device_id\":\"" + SystemInfo.deviceModel + "\"}" }
            };
            TokenResponse response = await httpClient.Post<TokenResponse>(TapTapSdk.CurrentRegion.TokenUrl(), 
                data: data);
            return response.Data;
        }

        public static async Task<ProfileData> GetProfile(string clientId, AccessToken token, int timestamp = 0) {
            string url = TapTapSdk.CurrentRegion.ProfileUrl(token.scopeSet.Contains(TapLogin.TAP_LOGIN_SCOPE_PUBLIC_PROFILE)) + clientId;
            var uri = new Uri(url);
            var ts = timestamp;
            if (ts == 0) {
                var dt = DateTime.UtcNow - new DateTime(1970, 1, 1);
                ts = (int)dt.TotalSeconds;
            }
            var sign = "MAC " + GetAuthorizationHeader(token.kid,
                token.macKey,
                token.macAlgorithm,
                "GET",
                uri.PathAndQuery,
                uri.Host,
                "443", ts);
            Dictionary<string, object> headers = new Dictionary<string, object> {
                { "Authorization", sign }
            };
            ProfileResponse response = await httpClient.Get<ProfileResponse>(url, headers: headers);
            return response.Data;
        }
        
        public static string GetAuthorizationHeader(string kid,
            string macKey,
            string macAlgorithm,
            string method,
            string uri,
            string host,
            string port,
            int timestamp) {
            var nonce = new System.Random().Next().ToString();

            var normalizedString = $"{timestamp}\n{nonce}\n{method}\n{uri}\n{host}\n{port}\n\n";

            HashAlgorithm hashGenerator;
            switch (macAlgorithm) {
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
