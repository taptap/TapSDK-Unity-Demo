using System;
using System.Linq;
using UnityEngine;

namespace TapTap.Common.Internal.Utils {
    public static class BridgeUtils {
        public static bool IsSupportMobilePlatform => Application.platform == RuntimePlatform.Android ||
            Application.platform == RuntimePlatform.IPhonePlayer;

        public static bool IsSupportStandalonePlatform => Application.platform == RuntimePlatform.OSXPlayer ||
            Application.platform == RuntimePlatform.WindowsPlayer ||
            Application.platform == RuntimePlatform.LinuxPlayer;

        public static object CreateBridgeImplementation(Type interfaceType, string startWith) {
            Type bridgeImplementationType = AppDomain.CurrentDomain.GetAssemblies()
                .Where(asssembly => asssembly.GetName().FullName.StartsWith(startWith))
                .SelectMany(assembly => assembly.GetTypes())
                .SingleOrDefault(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass);
            if (bridgeImplementationType == null){
                Debug.LogWarningFormat(
                    $"[TapTap] TapSDK Can't find bridge implementation for {interfaceType} on platform {Application.platform}.");
                return null;
            }
            return Activator.CreateInstance(bridgeImplementationType);
        }
    }
}
