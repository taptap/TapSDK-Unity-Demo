using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.License.Mobile.Editor {
    public class TapLicenseMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/License/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.License.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.License.Mobile.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };
    }
}
