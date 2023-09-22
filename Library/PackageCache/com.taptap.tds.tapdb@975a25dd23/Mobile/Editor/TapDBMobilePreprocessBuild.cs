using System.IO;
using UnityEngine;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.TapDB.Editor {
    public class TapDBMobilePreprocessBuild : IPreprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPreprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/TapDB/link.xml");
            LinkXMLGenerator.Generate(linkPath,
                new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.TapDB.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.TapDB.Mobile.Runtime" }
                });
        }
    }

    public class TapDBMobilePostprocessBuild : IPostprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPostprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/TapDB/link.xml");
            LinkXMLGenerator.Delete(linkPath);
        }
    }
}
