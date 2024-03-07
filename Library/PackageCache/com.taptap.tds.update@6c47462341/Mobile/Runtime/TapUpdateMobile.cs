using System.Collections.Generic;
using TapTap.Update.Internal;
using TapTap.Common;
using System;

namespace TapTap.Update.Mobile {
    public class TapUpdateMobile : ITapUpdateBridge {
        public static string TAP_UPDATE_SERVICE = "TapUpdateService";

        public static string TDS_UPDATE_SERVICE_CLZ = "com.taptap.services.update.wrapper.TapUpdateService";

        public static string TDS_UPDATE_SERVICE_IMPL = "com.taptap.services.update.wrapper.TapUpdateServiceImpl";
        
        public TapUpdateMobile() {
            EngineBridge.GetInstance().Register(TDS_UPDATE_SERVICE_CLZ, TDS_UPDATE_SERVICE_IMPL);
        }
        
        public void Init(string clientId, string clientToken) {
            #if UNITY_ANDROID
            if(TapCommon.Config == null){
                var tapConfig = new TapConfig.Builder()
                    .ClientID(clientId)
                    .ClientToken(clientToken)
                    .ConfigBuilder();
                TapCommon.Init(tapConfig);
            }
            var command = new Command.Builder()
                .Service(TAP_UPDATE_SERVICE)
                .Method("init")
                .Args("clientId", clientId)
                .Args("clientToken", clientToken)
                .Callback(false)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
            #endif
        }

        public void UpdateGame(Action onCancel) {
            #if UNITY_ANDROID
            var command = new Command.Builder()
                .Service(TAP_UPDATE_SERVICE)
                .Method("updateGame")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command, (result) => {
                UnityEngine.Debug.LogFormat("TapUpdate::UpdateGame result:{0}", result.ToJSON());
                if (result.code == Result.RESULT_SUCCESS && result.content.ToLower().Contains("cancel")) {
                    onCancel?.Invoke();
                    return;
                }
            });
            #else
            throw new NotImplementedException("TapUpdate::UpdateGame Only Support On Android");
            #endif
        }
    }
}