using System;
using UnityEngine;

namespace TapTap.Common
{

    public class BridgeCallback : AndroidJavaProxy
    {
        Action<Result> callback;

        public BridgeCallback(Action<Result> action) :
            base(new AndroidJavaClass("com.tds.common.bridge.BridgeCallback"))
        {
            this.callback = action;
        }

        public override AndroidJavaObject Invoke(string method, object[] args)
        {
            if (method.Equals("onResult"))
            {
                if (args[0] is string)
                {
                    string result = (string)(args[0]);
                    callback(new Result(result));
                }
            }
            return null;
        }

    }


}