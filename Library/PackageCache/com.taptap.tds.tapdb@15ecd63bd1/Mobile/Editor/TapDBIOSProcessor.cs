using System.Collections.Generic;
using System.IO;
using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace TapTap.TapDB.Editor
{
#if UNITY_IOS
    public class TapDBIOSProcessor
    {
        [PostProcessBuild(104)]
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

            proj.AddFrameworkToProject(unityFrameworkTarget, "CoreMotion.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "Security.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "SystemConfiguration.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "iAd.framework", false);
            proj.AddFrameworkToProject(unityFrameworkTarget, "AdServices.framework", true);

            var parentFolder = Directory.GetParent(Application.dataPath)?.FullName;

            var plistFile = TapFileHelper.RecursionFilterFile(parentFolder + "/Assets/Plugins/", "TDS-Info.plist");

            if (!plistFile.Exists)
            {
                Debug.LogError("TapSDK Can't find TDS-Info.plist in Project/Assets/Plugins/!");
            }
            else
            {
                var dic = (Dictionary<string, object>) Plist.readPlist(plistFile.FullName);
                if (dic.ContainsKey("NSUserTrackingUsageDescription"))
                {
                    proj.AddFrameworkToProject(unityFrameworkTarget, "AppTrackingTransparency.framework", true);
                    proj.AddFrameworkToProject(unityFrameworkTarget, "AdSupport.framework", false);
                    Debug.Log("TapDB add AdSupport and AppTracking framework");
                }
            }

            File.WriteAllText(projPath, proj.WriteToString());
        }
    }
#endif
}