using System;
using System.Threading.Tasks;
using LeanCloud.Storage;
using TapTap.Common;
using TapTap.Common.Internal;
using UnityEngine;

namespace TapTap.Login.Internal
{
    public static class TapTapSdk
    {
        public const string Version = "1.2.0";

        public static string ClientId { get; private set; }

        public static Region CurrentRegion { get; private set; }
        
        public static void SDKInitialize(string clientId, bool isCn) {
            if (string.IsNullOrEmpty(clientId))
                throw new ArgumentException("[TapSDK] clientId is null or empty!");
            ClientId = clientId;
            CurrentRegion = isCn ? (Region)new RegionCN() : new RegionIO();
            TapLocalizeManager.SetCurrentRegion(isCn);
        }
    }
}