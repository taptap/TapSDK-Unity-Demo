using System;
using System.Collections.Generic;
using UnityEngine;
using TapTap.Common;
using TapTap.Moment.Internal;

namespace TapTap.Moment.Standalone {
    public class TapMomentStandalone : ITapMomentBridge {
        public void Open(Orientation orientation) {
            // 打开论坛 web
            string url;
            TapConfig config = TapCommon.Config;
            if (config.RegionType == RegionType.CN) {
                url = $"https://www.taptap.cn/app/{TapMomentConfig.AppId}/topic?utm_medium=link&utm_source=pc_sdk";
            } else {
                url = $"https://www.taptap.io/app/{TapMomentConfig.AppId}?utm_medium=link&utm_source=pc_sdk";
            }
            Application.OpenURL(url);
        }

        public void Close() {
            TapLogger.Warn($"{nameof(Close)} NOT implemented.");
        }

        public void Close(string title, string content) {
            TapLogger.Warn($"{nameof(Close)} NOT implemented.");
        }

        public void DirectlyOpen(Orientation orientation, string page, Dictionary<string, object> extras) {
            TapLogger.Warn($"{nameof(DirectlyOpen)} NOT implemented.");
        }

        public void FetchNotification() {
            TapLogger.Warn($"{nameof(FetchNotification)} NOT implemented.");
        }

        public void Init(string clientId) {
            TapLogger.Warn($"{nameof(Init)} NOT implemented.");
        }

        public void Init(string clientId, bool isCN) {
        }

        public void NeedDeferSystemGestures() {
            TapLogger.Warn($"{nameof(NeedDeferSystemGestures)} NOT implemented.");
        }

        public void Publish(Orientation orientation, string[] imagePaths, string content) {
            TapLogger.Warn($"{nameof(Publish)} NOT implemented.");
        }

        public void PublishVideo(Orientation orientation, string[] videoPaths, string[] imagePaths, string title, string desc) {
            TapLogger.Warn($"{nameof(PublishVideo)} NOT implemented.");
        }

        public void PublishVideo(Orientation orientation, string[] videoPaths, string title, string desc) {
            TapLogger.Warn($"{nameof(PublishVideo)} NOT implemented.");
        }

        public void SetCallback(Action<int, string> callback) {
            TapLogger.Warn($"{nameof(SetCallback)} NOT implemented.");
        }

        public void SetUseAutoRotate(bool useAuto) {
            TapLogger.Warn($"{nameof(SetUseAutoRotate)} NOT implemented.");
        }
    }
}
