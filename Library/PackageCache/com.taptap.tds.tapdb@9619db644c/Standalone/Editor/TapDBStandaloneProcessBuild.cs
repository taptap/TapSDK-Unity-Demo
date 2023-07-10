using System.IO;
using UnityEngine;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.TapDB.Editor {
    public class TapDBStandalonePreprocessBuild : IPreprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPreprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportStandalone(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/TapDB/link.xml");
            LinkXMLGenerator.Generate(linkPath,
                new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.TapDB.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.TapDB.Standalone.Runtime" }
                });
        }
    }

    public class TapDBStandalonePostprocessBuild : IPostprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPostprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportStandalone(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/TapDB/link.xml");
            LinkXMLGenerator.Delete(linkPath);
        }
    }
}