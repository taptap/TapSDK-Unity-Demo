#if UNITY_IOS || UNITY_ANDROID

using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using TapTap.Common.Editor;

namespace TapTap.Billboard.Editor {
    public class TapBillboardMobileProcessBuild {
        private readonly static int Order = 0;
        private readonly static string[] IGNORE_PATHS = new string[] {
            "Vuplex",
            "TapTap/Billboard/Standalone"
        };

        public class TapBillboardIOSPreprocessBuild : IPreprocessBuildWithReport, IPostprocessBuildWithReport {
            public int callbackOrder => Order;

            public void OnPreprocessBuild(BuildReport report) {
                if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                    return;
                }

                Application.logMessageReceived += OnBuildError;
                IgnorePaths();

                string linkPath = Path.Combine(Application.dataPath, "TapTap/Billboard/link.xml");
                LinkXMLGenerator.Generate(linkPath,
                        new LinkedAssembly[] {
                        new LinkedAssembly { Fullname = "TapTap.Billboard.Runtime" },
                        new LinkedAssembly { Fullname = "TapTap.Billboard.Mobile.Runtime" }
                    });
            }

            public void OnPostprocessBuild(BuildReport report) {
                if (!BuildTargetUtils.IsSupportMobile(report.summary.platform)) {
                    return;
                }

                Application.logMessageReceived -= OnBuildError;
                RecoverIgnoredPaths();

                string linkPath = Path.Combine(Application.dataPath, "TapTap/Billboard/link.xml");
                LinkXMLGenerator.Delete(linkPath);
            }

            /// <summary>
            /// 错误日志回调
            /// </summary>
            /// <param name="condition"></param>
            /// <param name="stacktrace"></param>
            /// <param name="logType"></param>
            private void OnBuildError(string condition, string stacktrace, LogType logType) {
                // TRICK: 通过捕获错误日志来监听打包错误事件
                if (logType == LogType.Error) {
                    Application.logMessageReceived -= OnBuildError;
                    RecoverIgnoredPaths();
                }
            }

            /// <summary>
            /// 忽略目录
            /// </summary>
            private void IgnorePaths() {
                foreach (string ignorePath in IGNORE_PATHS) {
                    if (!Directory.Exists(Path.Combine(Application.dataPath, ignorePath))) {
                        continue;
                    }
                    string ignoreName = Path.GetFileName(ignorePath);
                    AssetDatabase.RenameAsset(Path.Combine("Assets", ignorePath), $"{ignoreName}~");
                }
            }

            /// <summary>
            /// 恢复目录
            /// </summary>
            private void RecoverIgnoredPaths() {
                foreach (string ignorePath in IGNORE_PATHS) {
                    if (!Directory.Exists(Path.Combine(Application.dataPath, $"{ignorePath}~"))) {
                        continue;
                    }
                    Directory.Move(Path.Combine(Application.dataPath, $"{ignorePath}~"),
                        Path.Combine(Application.dataPath, $"{ignorePath}"));
                    AssetDatabase.ImportAsset(Path.Combine("Assets", ignorePath));
                }
            }
        }
    }
}

#endif