using System;
using System.Collections.Generic;

namespace TapTap.Connect.Internal {
    public interface ITapConnectBridge {
        void Init(string clientId, string clientToken, bool isChina);
        
        void SetEntryVisible(bool visible);
    }
}