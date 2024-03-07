using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Update.Mobile.Editor {
    public class TapUpdateMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Update/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Update.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Update.Mobile.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };
    }
}
