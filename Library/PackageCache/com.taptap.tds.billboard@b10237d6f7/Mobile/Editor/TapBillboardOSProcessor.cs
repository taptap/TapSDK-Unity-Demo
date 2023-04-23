#if UNITY_IOS

using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace TapTap.Billboard.Editor
{
    public static class TapBillboardIOSProcessor
    {
        // 添加标签，unity导出工程后自动执行该函数
        [PostProcessBuild(107)]
        public static void OnPostprocessBuild(BuildTarget buildTarget, string path)
        {
            if (buildTarget != BuildTarget.iOS) return;
            // 获得工程路径
            var projPath = TapCommonCompile.GetProjPath(path);
            var proj = TapCommonCompile.ParseProjPath(projPath);
            var target = TapCommonCompile.GetUnityTarget(proj);

            if (TapCommonCompile.CheckTarget(target))
            {
                Debug.LogError("Unity-iPhone is NUll");
                return;
            }

            if (TapCommonCompile.HandlerIOSSetting(path,
                Application.dataPath,
                "TapBillboardResource",
                "com.taptap.tds.billboard",
                "Billboard",
                new[] {"TapBillboardResource.bundle"},
                target, projPath, proj))
            {
                Debug.Log("TapBillboard add Bundle Success!");
                return;
            }

            Debug.LogWarning("TapBillboard add Bundle Failed!");
        }
    }
}

#endif