using System;
using UnityEditor.Build.Reporting;

namespace TapTap.Common.Editor {
    public class TapCommonProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Common/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Common" },
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform) ||
                BuildTargetUtils.IsSupportStandalone(report.summary.platform);
        };
    }
}
