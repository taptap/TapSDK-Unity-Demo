using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Login.Mobile.Editor {
    public class TapLoginMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Login/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Login.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Login.Mobile.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };
    }
}
