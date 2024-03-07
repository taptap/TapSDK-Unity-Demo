using System.Collections.Generic;
using com.taptap.tapsdk.bindings.csharp;
using LC.Newtonsoft.Json;
using UnityEngine;

namespace TapTap.Common {
    public sealed class UnityTDSUser {
        public const string TAP_AUTH_CHANNEL = "open_id";
        public const string TDS_CHANNEL = "tds_id";
        private readonly Dictionary<string, string> _userInfo = new Dictionary<string, string>();
        public bool IsEmpty => _userInfo == null || _userInfo.Count == 0;

        public void UpdateUserInfo(string channel, string userId) {
            _userInfo[channel] = userId;

            if (string.IsNullOrEmpty(userId) && _userInfo.ContainsKey(channel)) {
                _userInfo.Remove(channel);
            }
        }

        public void Logout() {
            _userInfo.Clear();
        }
        
        public bool ContainTapInfo() {
            return _userInfo.ContainsKey(TAP_AUTH_CHANNEL) && !string.IsNullOrEmpty(_userInfo[TAP_AUTH_CHANNEL]);
        }

        public string GetUserInfo() {
            if (_userInfo.ContainsKey(TAP_AUTH_CHANNEL) && string.IsNullOrEmpty(_userInfo[TAP_AUTH_CHANNEL])) {
                _userInfo.Remove(TAP_AUTH_CHANNEL);
            }
            if (_userInfo.ContainsKey(TDS_CHANNEL) && string.IsNullOrEmpty(_userInfo[TDS_CHANNEL])) {
                _userInfo.Remove(TDS_CHANNEL);
            }
            var userInfo = JsonConvert.SerializeObject(_userInfo);
            return userInfo;
        }

        public override string ToString() {
            return GetUserInfo();
        }

        public bool TryGetChannelValue(string channel, out string value) {
            return _userInfo.TryGetValue(channel, out value);
        }
    }
}