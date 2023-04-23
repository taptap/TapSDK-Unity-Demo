using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif
using UnityEngine;

namespace TapTap.RTC.Editor
{
    public class TapRTCIOSProcessor : MonoBehaviour
    {
#if UNITY_IOS
        [PostProcessBuild(107)]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            if (buildTarget != BuildTarget.iOS) return;
            var projPath = GetProjPath(path);
            var proj = ParseProjPath(projPath);
            var target = GetUnityTarget(proj);
            var unityFrameworkTarget = GetUnityFrameworkTarget(proj);
            if (CheckTarget(target))
            {
                Debug.LogError("Unity-iPhone is NUll");
                return;
            }
            proj.AddFileToBuild(unityFrameworkTarget,
                proj.AddFile("usr/lib/libresolv.9.tbd", "libresolv.9.tbd", PBXSourceTree.Sdk));
                
            File.WriteAllText(projPath, proj.WriteToString());
        }
        
        public static string GetProjPath(string path)
        {
            return PBXProject.GetPBXProjectPath(path);
        }

        public static PBXProject ParseProjPath(string path)
        {
            var proj = new PBXProject();
            proj.ReadFromString(File.ReadAllText(path));
            return proj;
        }

        public static string GetUnityFrameworkTarget(PBXProject proj)
        {
#if UNITY_2019_3_OR_NEWER
            string target = proj.GetUnityFrameworkTargetGuid();
            return target;
#endif
            var unityPhoneTarget = proj.TargetGuidByName("Unity-iPhone");
            return unityPhoneTarget;
        }

        public static string GetUnityTarget(PBXProject proj)
        {
#if UNITY_2019_3_OR_NEWER
            string target = proj.GetUnityMainTargetGuid();
            return target;
#endif
            var unityPhoneTarget = proj.TargetGuidByName("Unity-iPhone");
            return unityPhoneTarget;
        }

        public static bool CheckTarget(string target)
        {
            return string.IsNullOrEmpty(target);
        }
#endif
    }
}