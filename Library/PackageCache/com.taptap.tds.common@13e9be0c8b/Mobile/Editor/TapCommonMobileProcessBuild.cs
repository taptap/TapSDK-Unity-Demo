using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Common.Mobile.Editor {
    public class TapCommonMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Common/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Common.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Common.Mobile.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };
    }
}
