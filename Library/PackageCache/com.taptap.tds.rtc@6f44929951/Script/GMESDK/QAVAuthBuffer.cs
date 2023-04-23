
using System;
using System.Text;
using System.Runtime.InteropServices;

namespace TencentMobileGaming
{
	public class QAVAuthBuffer
	{
		public QAVAuthBuffer ()
		{

		}

		public static byte[] GenAuthBuffer(int appId, string roomID, string openId, string key)
		{
			QAVSDKInit.InitSDK();
			int authBufferLen = 1024;
			byte[] authBuffer = new Byte[authBufferLen];
			authBufferLen = QAVSDK_AuthBuffer_GenAuthBuffer(appId, roomID, openId, key, authBuffer, authBufferLen);

			byte[] result = new byte[authBufferLen];
			Array.Copy(authBuffer, result, authBufferLen);
			return result;
		}
		
		#if (UNITY_IPHONE||UNITY_SWITCH) && !UNITY_EDITOR
		public const string MyLibName = "__Internal";
        #else
		public const string MyLibName = "gmesdk";
		#endif

		[DllImport(MyLibName, CallingConvention = CallingConvention.Cdecl)]
#if UNITY_5_5
		private static extern int QAVSDK_AuthBuffer_GenAuthBuffer(int appId, [MarshalAs(UnmanagedType.LPStr)] string roomID, [MarshalAs(UnmanagedType.LPStr)] string openID,
                                                                 [MarshalAs(UnmanagedType.LPStr)] string key,byte[] retAuthBuff, int buffLength);
#else
		private static extern int QAVSDK_AuthBuffer_GenAuthBuffer(int appId, [MarshalAs(UnmanagedType.LPStr)] string roomID, [MarshalAs(UnmanagedType.LPStr)] string openID,
		                                                         [MarshalAs(UnmanagedType.LPStr)] string key, [MarshalAs(UnmanagedType.LPArray)] byte[] retAuthBuff, int buffLength);
#endif
	}
}
