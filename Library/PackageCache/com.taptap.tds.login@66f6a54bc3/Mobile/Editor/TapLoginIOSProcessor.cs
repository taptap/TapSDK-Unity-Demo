using System.IO;
using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
#if UNITY_IOS || UNITY_STANDALONE_OSX
using UnityEditor.iOS.Xcode;
#endif
using UnityEngine;

namespace TapTap.Login.Editor
{
#if UNITY_IOS || UNITY_STANDALONE_OSX
    public static class TapLoginIOSProcessor
    {
        // 添加标签，unity导出工程后自动执行该函数
        [PostProcessBuild(103)]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            var parentFolder = Directory.GetParent(Application.dataPath)?.FullName;

            var plistFile = TapFileHelper.RecursionFilterFile(parentFolder + "/Assets/Plugins/", "TDS-Info.plist");

            if (!plistFile.Exists)
            {
                Debug.LogError("TapSDK Can't find TDS-Info.plist in Project/Assets/Plugins/!");
            }


            if (buildTarget is BuildTarget.iOS)
            {
#if UNITY_IOS
                TapCommonCompile.HandlerPlist(Path.GetFullPath(path), plistFile.FullName);
#endif
            }
            else if (buildTarget is BuildTarget.StandaloneOSX)
            {
                Debug.Log($"path:{path}");
                Debug.Log($"path:{Path.GetFullPath(path)}");
                Debug.Log($"dir:{Path.GetDirectoryName(path)}");
                Debug.Log($"dir:{Path.GetFileName(path)}");
                // 获得工程路径
#if UNITY_2020_1_OR_NEWER
                var directory = Path.GetDirectoryName(path);
                if (string.IsNullOrEmpty(directory))
                {
                    directory = "";
                }

                var fileName = Path.GetFileName(path);
                if (!fileName.EndsWith(".xcodeproj"))
                {
                    fileName += ".xcodeproj";
                }

                var projPath = Path.Combine(directory, $"{fileName}/project.pbxproj");
#elif UNITY_2019_1_OR_NEWER
                var projPath = Path.Combine(path, "project.pbxproj");
#else
#endif
#if UNITY_IOS
                TapCommonCompile.HandlerPlist(Path.GetFullPath(path), plistFile.FullName, true);
#endif
            }
            
#if UNITY_IOS
            var projPath1 = TapCommonCompile.GetProjPath(path);
            var proj = TapCommonCompile.ParseProjPath(projPath1);
            var target = TapCommonCompile.GetUnityTarget(proj);
            if (TapCommonCompile.CheckTarget(target))
            {
                Debug.LogError("Unity-iPhone is NUll");
                return;
            }
            if (TapCommonCompile.HandlerIOSSetting(path,
                    Application.dataPath,
                    "TapLoginResources",
                    "com.taptap.tds.login",
                    "Login",
                    new[] {"TapLoginResource.bundle"},
                    target, projPath1, proj))
            {
                Debug.Log("TapLogin add Bundle Success!");
                return;
            }

            Debug.LogWarning("TapLogin add Bundle Failed!");
#endif
        }
    }
#endif
}