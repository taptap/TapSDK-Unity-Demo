using System;
using System.IO;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;

namespace TapTap.Common.Editor {
    /// <summary>
    /// 模块 SDK 生成 link.xml 构建过程
    /// </summary>
    public abstract class SDKLinkProcessBuild : IPreprocessBuildWithReport, IPostprocessBuildWithReport {
        /// <summary>
        /// 执行顺序
        /// </summary>
        public abstract int callbackOrder { get; }

        /// <summary>
        /// 生成 link.xml 路径
        /// </summary>
        public abstract string LinkPath { get; }

        /// <summary>
        /// 防止被裁剪的 Assembly
        /// </summary>
        public abstract LinkedAssembly[] LinkedAssemblies { get; }

        /// <summary>
        /// 执行平台委托
        /// </summary>
        public abstract Func<BuildReport, bool> IsTargetPlatform { get; }

        /// <summary>
        /// 构建时忽略目录，目前主要是 PC 内置浏览器 Vuplex
        /// </summary>
        public virtual string[] BuildingIgnorePaths => null;

        /// <summary>
        /// 构建前处理
        /// </summary>
        /// <param name="report"></param>
        public void OnPreprocessBuild(BuildReport report) {
            if (!IsTargetPlatform.Invoke(report)) {
                return;
            }

            Application.logMessageReceived += OnBuildError;
            IgnorePaths();

            string linkPath = Path.Combine(Application.dataPath, LinkPath);
            LinkXMLGenerator.Generate(linkPath, LinkedAssemblies);
        }

        /// <summary>
        /// 构建后处理
        /// </summary>
        /// <param name="report"></param>
        public void OnPostprocessBuild(BuildReport report) {
            if (!IsTargetPlatform.Invoke(report)) {
                return;
            }

            Application.logMessageReceived -= OnBuildError;
            RecoverIgnoredPaths();

            string linkPath = Path.Combine(Application.dataPath, LinkPath);
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
            if (BuildingIgnorePaths == null) {
                return;
            }

            foreach (string ignorePath in BuildingIgnorePaths) {
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
            if (BuildingIgnorePaths == null) {
                return;
            }

            foreach (string ignorePath in BuildingIgnorePaths) {
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
