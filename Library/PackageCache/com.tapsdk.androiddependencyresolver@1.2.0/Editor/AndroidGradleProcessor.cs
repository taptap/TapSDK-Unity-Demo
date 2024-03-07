#if UNITY_EDITOR && UNITY_ANDROID
using System;
using System.Collections.Generic;
using UnityEditor.Android;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace TapTap.AndroidDependencyResolver.Editor
{
    public class AndroidGradleProcessor : IPreprocessBuildWithReport, IPostGenerateGradleAndroidProject
    {
        // 当前版本
        internal const int VERSION = 1;
        
        private static Dictionary<CustomTemplateType, bool> gardleTemplateToggleRecord = new Dictionary<CustomTemplateType, bool>();

        public const int CALLBACK_ORDER = 1100;
        public int callbackOrder => CALLBACK_ORDER;

        public void OnPostGenerateGradleAndroidProject(string path)
        {
            // for (int i = (int)CustomTemplateType.AndroidManifest; i <= (int)CustomTemplateType.GradleProperties; i++)
            // {
            //     AndroidUtils.ToggleCustomTemplateFile((CustomTemplateType)i,
            //         gardleTemplateToggleRecord[(CustomTemplateType)i]);
            // }
        }
        
        public void OnPreprocessBuild(BuildReport report)
        {
            gardleTemplateToggleRecord.Clear();
            for (int i = (int)CustomTemplateType.AndroidManifest; i <= (int)CustomTemplateType.GradleProperties; i++)
            {
                var haveCustomGradleTemplate = AndroidUtils.HaveCustomTemplateFile((CustomTemplateType)i);
                gardleTemplateToggleRecord.Add((CustomTemplateType)i, haveCustomGradleTemplate);
            }

            AndroidUtils.Resolve(true);
        }
    }
    
}
#endif