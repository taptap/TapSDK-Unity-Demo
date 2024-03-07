using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Security.Cryptography;
using System.Text;
using System.Linq;
using TapTap.Common;
using UnityEngine;
using Random = System.Random;

namespace TapTap.Login.Internal
{
    public class WebLoginRequestManager
    {
        private static volatile WebLoginRequestManager _instance;
        private static readonly object ObjLock = new object();

        public static WebLoginRequestManager Instance
        {
            get
            {
                if (_instance != null) return _instance;
                lock (ObjLock)
                {
                    if (_instance == null)
                    {
                        _instance = new WebLoginRequestManager();
                    }
                }

                return _instance;
            }
        }

        private string _codeVerifier;

        private WebLoginRequest _currentRequest;

        public void CreateNewLoginRequest(string[] permissions)
        {
            _codeVerifier = CodeUtil.GenerateCodeVerifier();
            _currentRequest = new WebLoginRequest(permissions, _codeVerifier);
        }

        public string GetCodeVerifier()
        {
            return _codeVerifier;
        }

        public WebLoginRequest GetCurrentRequest()
        {
            return _currentRequest;
        }
    }

    public class WebLoginRequest
    {
        private readonly string[] _permissions;
        private readonly string _state;
        private readonly string _codeChallenge;
        private string _redirectHost;

        public WebLoginRequest(string[] permissions, string codeVerifier)
        {
            this._permissions = permissions;
            _codeChallenge = CodeUtil.GetCodeChallenge(codeVerifier);
            _state = Guid.NewGuid().ToString("N");
        }

        public string GetWebLoginUrl()
        {
            var data = new Dictionary<string, string>
            {
                { "client_id", TapTapSdk.ClientId },
                { "response_type", "code" },
                { "redirect_uri", GetRedirectUri() },
                { "state", _state },
                { "code_challenge", _codeChallenge },
                { "code_challenge_method", "S256" },
                { "scope", string.Join(",", _permissions) },
                { "flow", "pc_localhost" }
            };
            var paramStr = MapToParameters(data);

            return TapTapSdk.CurrentRegion.AccountUrl() + paramStr;
        }

        private static string MapToParameters(Dictionary<string, string> data)
        {
            IEnumerable<string> kvs = data
                .Select(kv => $"{Uri.EscapeDataString(kv.Key)}={Uri.EscapeDataString(kv.Value)}");
            return string.Join("&", kvs);
        }

        public string GetState()
        {
            return _state;
        }

        public string GetRedirectHost()
        {
            if (string.IsNullOrEmpty(_redirectHost))
            {
                _redirectHost = CodeUtil.GetRedirectUri();
            }

            return _redirectHost;
        }

        public string GetRedirectUri()
        {
            return GetRedirectHost() + "authorize";
        }
    }

    public static class CodeUtil
    {
        public static string GetRedirectUri()
        {
            var redirectUri = $"http://{IPAddress.Loopback}:{GetRandomUnusedPort()}/";
            TapLogger.Debug($"redirect uri:{redirectUri}");
            return redirectUri;
        }

        public static string GetTapTapOAuthRedirectUri()
        {
            return $"open-taptap-{TapTapSdk.ClientId}://{GetTapTapOAuthPrefix()}";
        }

        public static string GetTapTapOAuthPrefix()
        {
            return "authorize";
        }

        private static int GetRandomUnusedPort()
        {
            var listener = new TcpListener(IPAddress.Loopback, 0);
            listener.Start();
            var port = ((IPEndPoint)listener.LocalEndpoint).Port;
            listener.Stop();
            return port;
        }

        public static string GenerateCodeVerifier()
        {
            const string baseStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-._~";
            var random = new Random();
            var builder = new StringBuilder();
            int l = baseStr.Length;
            for (var i = 0; i < 128; i++)
            {
                var number = random.Next(l);
                builder.Append(baseStr[number]);
            }

            return builder.ToString();
        }

        public static string GetCodeChallenge(string codeVerifier)
        {
            return Base64UrlEncodeNoPadding(SHA256(codeVerifier));
        }

        private static string Base64UrlEncodeNoPadding(byte[] buffer)
        {
            var base64 = Convert.ToBase64String(buffer);

            // Converts base64 to base64url.
            base64 = base64.Replace("+", "-");
            base64 = base64.Replace("/", "_");
            // Strips padding.
            base64 = base64.Replace("=", "");

            return base64;
        }

        private static byte[] SHA256(string inputStirng)
        {
            var bytes = Encoding.ASCII.GetBytes(inputStirng);
            var sha256 = new SHA256Managed();
            return sha256.ComputeHash(bytes);
        }
    }
}