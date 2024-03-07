using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.AntiAddiction.Standalone.Editor {
    public class TapAntiAddictionStandaloneProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 3;

        public override string LinkPath => "TapTap/AntiAddiction/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
            new LinkedAssembly { Fullname = "TapTap.AntiAddiction" },
            new LinkedAssembly { Fullname = "TapTap.AntiAddiction.Standalone.Runtime" }
        };
        
        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportStandalone(report.summary.platform);
        };
    }
}