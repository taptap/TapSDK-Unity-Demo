using System.Collections.Generic;
using com.taptap.tapsdk.bindings.csharp;
using LC.Newtonsoft.Json;
using UnityEngine;

namespace TapTap.Common {
    public sealed class UnityTDSUser
    {
        public const string TAP_AUTH_CHANNEL = "tap_auth";
        public const string TDS_CHANNEL = "tds";
        private readonly Dictionary<string, string> _userInfo = new Dictionary<string, string>();
        public bool IsEmpty => _userInfo == null || _userInfo.Count == 0;
        
        public void UpdateUserInfo(string channel, string userId) {
            if (_userInfo.ContainsKey(channel)) {
                _userInfo[channel] = userId;
            } else {
                _userInfo.Add(channel, userId);
            }

            if (string.IsNullOrEmpty(userId))
                _userInfo.Remove(channel);
        }

        public void Logout() {
            _userInfo.Clear();
        }
        
        public bool ContainTapInfo() {
            return _userInfo.ContainsKey(TAP_AUTH_CHANNEL) || _userInfo.ContainsKey(TDS_CHANNEL);
        }

        public string GetUserId() {
            return JsonConvert.SerializeObject(_userInfo);
        }
        
        public override string ToString() {
            return GetUserId();
        }
        
        // TODO: Implement the following methods
        public string GetUserName() {
            return "";
        }
        
        
    }
}