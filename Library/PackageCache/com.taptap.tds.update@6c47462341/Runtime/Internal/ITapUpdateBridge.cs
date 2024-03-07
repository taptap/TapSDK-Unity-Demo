using TapTap.Common;
using System;

namespace TapTap.Update.Internal {
    public interface ITapUpdateBridge {
        void Init(string clientId, string clientToken);
        void UpdateGame(Action onCancel);
    }
}