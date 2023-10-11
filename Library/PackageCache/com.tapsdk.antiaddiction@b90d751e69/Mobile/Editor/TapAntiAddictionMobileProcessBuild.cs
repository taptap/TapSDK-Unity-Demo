using System;
using TapTap.Common.Editor;
using UnityEditor.Build.Reporting;

namespace TapTap.AntiAddiction.Mobile.Editor {
    public class TapAntiAddictionMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 4;

        public override string LinkPath => "TapTap/AntiAddiction/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
            new LinkedAssembly { Fullname = "TapTap.AntiAddiction" },
            new LinkedAssembly { Fullname = "TapTap.AntiAddiction.Runtime" },
            new LinkedAssembly { Fullname = "TapTap.AntiAddiction.Mobile.Runtime" }
        };
        
        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };
    }
}