using System;
using System.Collections.Concurrent;
using System.Runtime.InteropServices;
using UnityEngine;

namespace TapTap.Common
{
    public class BridgeIOS : IBridge
    {
        private static readonly BridgeIOS SInstance = new BridgeIOS();

        private readonly ConcurrentDictionary<string, Action<Result>> dic;

        public static BridgeIOS GetInstance()
        {
            return SInstance;
        }

        private BridgeIOS()
        {
            dic = new ConcurrentDictionary<string, Action<Result>>();
        }

        private ConcurrentDictionary<string, Action<Result>> GetConcurrentDictionary()
        {
            return dic;
        }

        private delegate void EngineBridgeDelegate(string result);

        [AOT.MonoPInvokeCallbackAttribute(typeof(EngineBridgeDelegate))]
        static void engineBridgeDelegate(string resultJson)
        {
            var result = new Result(resultJson);

            var actionDic = GetInstance().GetConcurrentDictionary();

            Action<Result> action = null;

            if (actionDic != null && actionDic.ContainsKey(result.callbackId))
            {
                action = actionDic[result.callbackId];
            }

            if (action != null)
            {
                action(result);
                if (result.onceTime && BridgeIOS.GetInstance().GetConcurrentDictionary()
                    .TryRemove(result.callbackId, out Action<Result> outAction))
                {
                    Debug.Log($"TapSDK resolved current Action:{result.callbackId}");
                }
            }

            Debug.Log($"TapSDK iOS BridgeAction last Count:{BridgeIOS.GetInstance().GetConcurrentDictionary().Count}");
        }
        
        

        public void Register(string serviceClz, string serviceImp)
        {
            //IOS无需注册
        }

        public void Call(Command command)
        {
#if UNITY_IOS
            callHandler(command.ToJSON());
#endif
        }

        public void Call(Command command, Action<Result> action)
        {
            if (!command.callback || string.IsNullOrEmpty(command.callbackId)) return;
            if (!dic.ContainsKey(command.callbackId))
            {
                dic.GetOrAdd(command.callbackId, action);
            }
#if UNITY_IOS
            registerHandler(command.ToJSON(), engineBridgeDelegate);
#endif
        }
#if UNITY_IOS
        [DllImport("__Internal")]
        private static extern void callHandler(string command);

        [DllImport("__Internal")]
        private static extern void registerHandler(string command, EngineBridgeDelegate engineBridgeDelegate);
#endif
    }
}