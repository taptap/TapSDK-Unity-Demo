using System;
using System.Runtime.InteropServices;
using System.Globalization;

namespace TapTap.TapDB.Standalone.Internal {
    public class DeviceInfo {

#if UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
        [DllImport("TapDBDeviceInfo", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr GetDeviceLanguage();
#endif

        public static string GetLanguage() {
#if UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX
            return Marshal.PtrToStringAnsi(GetDeviceLanguage());
#else
            return CultureInfo.CurrentUICulture.IetfLanguageTag;
#endif
        }
    }
}