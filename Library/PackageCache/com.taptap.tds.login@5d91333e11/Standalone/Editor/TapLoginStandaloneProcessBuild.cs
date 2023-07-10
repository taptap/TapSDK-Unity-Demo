using System;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Login.Editor
{
    public class TapLoginStandaloneProcessBuild : SDKLinkProcessBuild
    {
        public override int callbackOrder => 0;

        public override string LinkPath => "TapTap/Login/link.xml";

        public override LinkedAssembly[] LinkedAssemblies => new LinkedAssembly[] {
                    new LinkedAssembly { Fullname = "TapTap.Login.Runtime" },
                    new LinkedAssembly { Fullname = "TapTap.Login.Standalone.Runtime" }
                };

        public override Func<BuildReport, bool> IsTargetPlatform => (report) => {
            return BuildTargetUtils.IsSupportStandalone(report.summary.platform);
        };
    }
}