using System;
using System.Collections.Generic;
using TapTap.Connect.Internal;
using TapTap.Common;
using UnityEngine;

namespace TapTap.Connect.Mobile {
    public sealed class TapConnectMobile : ITapConnectBridge {
        
        private static readonly string CLZ_NAME = "com.tapsdk.tapconnect.wrapper.TapConnectService";

        private static readonly string IMP_NAME = "com.tapsdk.tapconnect.wrapper.TapConnectServiceImpl";

        private static readonly string SERVICE_NAME = "TapConnectService";

        private bool inited;
        
        public void Init(string clientId, string clientToken, bool isChina) {
            if (!inited) {
                EngineBridge.GetInstance().Register(CLZ_NAME, IMP_NAME);
                inited = true;
            }
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("initWithClientId")
                .Args("initWithClientId", clientId)
                .Args("clientToken", clientToken)
                .Args("isCN", isChina)
                .CommandBuilder());
        }
        
        public void SetEntryVisible(bool visible) {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("setEntryVisible")
                .Args("setEntryVisible", visible)
                .CommandBuilder());
        }
    }
}