using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;

namespace TapTap.Achievement.Mobile.Editor
{
#if UNITY_IOS
    public static class TapAchievementIOSProcessor
    {
        // 添加标签，unity导出工程后自动执行该函数
        [PostProcessBuild(106)]
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
                "TapAchievementResource",
                "com.taptap.tds.achievement",
                "Achievement",
                new[] {"TapAchievementResource.bundle"},
                target, projPath, proj))
            {
                Debug.Log("TapAchievement add Bundle Success!");
                return;
            }

            Debug.LogWarning("TapAchievement add Bundle Failed!");
        }
    }
#endif
}