using System.IO;
using UnityEngine;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Connect.Editor {
    public class TapConnectMobilePreprocessBuild : IPreprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPreprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/Connect/link.xml");
            LinkXMLGenerator.Generate(linkPath,
                new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Connect.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Connect.Mobile.Runtime" }
                });
        }
    }

    public class TapConnectMobilePostprocessBuild : IPostprocessBuildWithReport {
        public int callbackOrder => 0;

        public void OnPostprocessBuild(BuildReport report) {
            if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                return;
            }

            string linkPath = Path.Combine(Application.dataPath, "TapTap/Connect/link.xml");
            LinkXMLGenerator.Delete(linkPath);
        }
    }
}
