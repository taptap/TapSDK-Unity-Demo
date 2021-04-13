using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using AOT;

/*
	version 2.6.2_a
 */
namespace AntiAddiction.StandAlone
{

	public enum CallbackCode : int{
			CALLBACK_CODE_CHECK_SUCCESS = 1040,				// 检查通过
			CALLBACK_CODE_TIME_LIMIT = 1030,                // 时间受限，未成年人游戏时长已达限制，通知游戏
		    CALLBACK_CODE_NIGHT_STRICT = 1050,          // 时间受限，未成年人当前被宵禁限制，通知游戏
		    CALLBACK_CODE_SUBMIT_PAY_SUCCESS = 3000,
		    CALLBACK_CODE_SUBMIT_PAY_FAIL = 3500,
		    CALLBACK_CODE_PAY_NO_LIMIT = 1020,
		    CALLBACK_CODE_PAY_LIMIT = 1025,

	};

	public class AntiAddiction:MonoBehaviour {

		private static AndroidJavaClass AntiAddictionClass;
		private static bool sdkInited = false;
		private delegate void AntiAddictionDelegate(int resultCode,string message);
		private static Action<int,string> antiAddictionResult;
		[AOT.MonoPInvokeCallbackAttribute(typeof(AntiAddictionDelegate))]
		static void antiAddictionCallback (int resultCode,string message) {
			antiAddictionResult(resultCode,message);
		}

		/*
			初始化
			onAntiAddictionResult:接收回调
		 */
		public static void init(Action<int,string> onAntiAddictionResult) {
			sdkInited = true;

#if UNITY_ANDROID && !UNITY_EDITOR
				AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
				AndroidJavaObject activityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
				AntiAddictionClass = new AndroidJavaClass ("com.taptap.antisdk.AntiAddictionKit");
				AntiAddictionClass.CallStatic ("init", activityObject, new AntiAddictionHandler(onAntiAddictionResult));
#else
#endif

		}

		
        public static void checkState()
        {
#if UNITY_ANDROID && !UNITY_EDITOR 
            AntiAddictionClass.CallStatic("checkState");
          
#endif

		}

		public static void onResume() {

#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("onResume");
				}
#endif
		}

		public static void onStop() {

#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("onStop");
				}
#endif
		}

        public static void checkPayLimit(int num)
        {
#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("checkPayLimit",num);
				}
#endif
		}

        public static void paySuccess(int num)
        {
#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("paySuccess",num);
				}
#endif
		}

        public static int getUserType()
        {
#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					return AntiAddictionClass.CallStatic<int> ("getUserType");
				}
#endif
			return -1;
		}

		public static void setDebug(bool isDebug)
		{

#if UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("setDebug",isDebug);
				}
#endif
		}



	}

	

class AntiAddictionHandler:AndroidJavaProxy {
		Action<int,string> onAntiAddictionResult;
		public AntiAddictionHandler(Action<int,string> onAntiAddictionResult): base("com.taptap.antisdk.AntiAddictionKit$AntiAddictionCallback") {    
		this.onAntiAddictionResult = onAntiAddictionResult;
		}

		public override AndroidJavaObject Invoke(string methodName, object[] args) {
			if (methodName.Equals("onAntiAddictionResult"))
			{
				onAntiAddictionResult((int)args[0],(string)args[1]);
			}
			
			return null;
		}

	}

}



