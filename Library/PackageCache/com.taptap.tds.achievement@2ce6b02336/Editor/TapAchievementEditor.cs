using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using TapTap.Common.Editor;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;

namespace TapTap.Achievement.Editor
{
    public class TapAchievementEditor : IPreprocessBuildWithReport, IPostprocessBuildWithReport
    {
        public int callbackOrder
        {
            get => 199;
        }
        
        public void OnPreprocessBuild(BuildReport report)
        {
            RefreshApplicationIcon();
            string linkPath = Path.Combine(Application.dataPath, "TapTap/Achievement/link.xml");
            if (BuildTargetUtils.IsSupportMobile(report.summary.platform))
            {
                LinkXMLGenerator.Generate(linkPath,
                    new LinkedAssembly[] {
                        new LinkedAssembly { Fullname = "TapTap.Achievement" },
                        new LinkedAssembly { Fullname = "TapTap.Achievement.Mobile.Runtime" },
                    });
            }
            else
            {
                LinkXMLGenerator.Generate(linkPath,
                    new LinkedAssembly[] {
                        new LinkedAssembly { Fullname = "TapTap.Achievement" },
                        new LinkedAssembly { Fullname = "TapTap.Achievement.Standalone.Runtime" },
                    });
            }
        }

        public void OnPostprocessBuild(BuildReport report)
        {
            DeleteApplicationIcon();
            string linkPath = Path.Combine(Application.dataPath, "TapTap/Achievement/link.xml");
            LinkXMLGenerator.Delete(linkPath);
        }

        private static void RefreshApplicationIcon()
        {
            var folderPath = Application.dataPath;
            folderPath = Path.Combine(folderPath, TapAchievement.ApplictionIconFolder);
            if (!Directory.Exists(folderPath))
            {
                Directory.CreateDirectory(folderPath);
            }

            var filePath = Path.Combine(folderPath, TapAchievement.ApplictionIconName);
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
            }

            var iconPath = GetDefaulApplicationIconPath();
            if (iconPath == null) return;
            var source = Path.Combine(Application.dataPath.Remove(Application.dataPath.LastIndexOf("Assets"), "Assets".Length), iconPath);
            File.Copy(source, filePath);
            TextureImporter ti = TextureImporter.GetAtPath(iconPath) as TextureImporter;
            ti.SaveAndReimport();
        }

        private static string GetDefaulApplicationIconPath()
        {
            var psType = typeof(PlayerSettings);
            var getAllIconsMI =
                psType.GetMethod("GetAllIconsForPlatform", BindingFlags.NonPublic | BindingFlags.Static);
            var textures = getAllIconsMI.Invoke(null, new object[]{""}) as Texture2D[];
            
            if (textures != null && textures.Length > 0)
            {
                var r = textures[0];
                var p = AssetDatabase.GetAssetPath(r);
                
                return p;
            }
            return null;
        }

        private void DeleteApplicationIcon()
        {
            var folderPath = Application.dataPath;
            folderPath = Path.Combine(folderPath, TapAchievement.ApplictionIconFolder);
            if (!Directory.Exists(folderPath)) return;
            var filePath = Path.Combine(folderPath, TapAchievement.ApplictionIconName);
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
            }

            filePath += ".meta";
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
            }
        }
    }
}