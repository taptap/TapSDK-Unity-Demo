using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Billboard.Editor {
    public class TapBillboardMobileProcessBuild : SDKLinkProcessBuild {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Billboard/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Billboard.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Billboard.Mobile.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportMobile(report.summary.platform);
        };

        public override string[] BuildingIgnorePaths => new string[] {
            "Vuplex",
            "TapTap/Billboard/Standalone"
        };
    }
}