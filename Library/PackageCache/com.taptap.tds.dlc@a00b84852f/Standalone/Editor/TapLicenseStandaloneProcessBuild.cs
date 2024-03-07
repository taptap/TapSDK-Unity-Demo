using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.License.Standalone.Editor {
    public class TapLicenseStandaloneProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/License/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.License.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.License.Standalone.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportStandalone(report.summary.platform);
        };
    }
}
