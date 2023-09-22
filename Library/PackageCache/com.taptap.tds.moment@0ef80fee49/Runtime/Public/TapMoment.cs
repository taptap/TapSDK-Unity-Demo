using System;
using System.Collections.Generic;
using TapTap.Moment.Internal;
using TapTap.Common.Internal.Utils;

namespace TapTap.Moment {
    public class TapMomentConstants {
        public static readonly string TapMomentPageShortCut = "tap://moment/scene/";

        public static readonly string TapMomentPageShortCutKey = "scene_id";

        public static readonly string TapMomentPageUser = "tap://moment/user/";

        public static readonly string TapMomentPageUserKey = "user_id";
    }

    public class TapMoment {
        static readonly ITapMomentBridge moment;

        static TapMoment() {
            moment = BridgeUtils.CreateBridgeImplementation(typeof(ITapMomentBridge), "TapTap.Moment")
                as ITapMomentBridge;
        }

        public static void SetCallback(Action<int, string> callback) {
            moment.SetCallback(callback);
        }

        public static void Init(string clientId) {
            moment.Init(clientId);
        }

        public static void Init(string clientId, bool isCN) {
            moment.Init(clientId, isCN);
        }

        public static void Open(Orientation config) {
            moment.Open(config);
        }

        public static void Publish(Orientation config, string[] imagePaths, string content) {
            moment.Publish(config, imagePaths, content);
        }

        public static void PublishVideo(Orientation config, string[] videoPaths, string[] imagePaths, string title,
            string desc) {
            moment.PublishVideo(config, videoPaths, imagePaths, title, desc);
        }

        public static void PublishVideo(Orientation config, string[] videoPaths, string title, string desc) {
            moment.PublishVideo(config, videoPaths, title, desc);
        }

        public static void FetchNotification() {
            moment.FetchNotification();
        }

        public static void DirectlyOpen(Orientation orientation, string page, Dictionary<string, object> extras) {
            moment.DirectlyOpen(orientation, page, extras);
        }

        public static void Close() {
            moment.Close();
        }

        public static void Close(string title, string desc) {
            moment.Close(title, desc);
        }

        public static void SetGameScreenAutoRotate(bool auto) {
            moment.SetUseAutoRotate(auto);
        }

        public static void NeedDeferSystemGestures() {
            moment.NeedDeferSystemGestures();
        }
    }
}
