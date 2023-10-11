using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace TapTap.Moment.Editor
{
#if UNITY_IOS
    public static class TapMomentIOSProcessor
    {
        [PostProcessBuild(101)]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            if (buildTarget != BuildTarget.iOS) return;

            var projPath = TapCommonCompile.GetProjPath(path);
            var proj = TapCommonCompile.ParseProjPath(projPath);
            var target = TapCommonCompile.GetUnityTarget(proj);
            var unityFrameworkTarget = TapCommonCompile.GetUnityFrameworkTarget(proj);
            if (TapCommonCompile.CheckTarget(target))
            {
                Debug.LogError("Unity-iPhone is NUll");
                return;
            }
            
            proj.AddFrameworkToProject(unityFrameworkTarget, "AVFoundation.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "CoreTelephony.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "MobileCoreServices.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "Photos.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "SystemConfiguration.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "WebKit.framework", false);
            
            if (TapCommonCompile.HandlerIOSSetting(path,
                Application.dataPath,
                "TapMomentResource",
                "com.taptap.tds.moment",
                "Moment",
                new[] {"TapMomentResource.bundle"},
                target, projPath, proj))
            {
                Debug.Log("TapMoment add Bundle Success!");
                return;
            }

            Debug.LogError("TapMoment add Bundle Failed!");
        }
    }
#endif
}