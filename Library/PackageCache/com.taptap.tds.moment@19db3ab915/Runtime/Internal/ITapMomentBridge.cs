using System;
using System.Collections.Generic;

namespace TapTap.Moment.Internal {
    public interface ITapMomentBridge {
        void SetCallback(Action<int, string> callback);

        void Init(string clientId);

        void Init(string clientId, bool isCN);

        void Open(Orientation orientation);

        void SetDefaultOrientation(Orientation orientation);
        
        void Open();

        void Publish(Orientation orientation, string[] imagePaths, string content);

        void Publish(string[] imagePaths, string content);

        void PublishVideo(Orientation orientation, string[] videoPaths, string[] imagePaths, string title,
            string desc);

        void PublishVideo(string[] videoPaths, string[] imagePaths, string title,
            string desc);    

        void PublishVideo(Orientation orientation, string[] videoPaths, string title, string desc);

        void PublishVideo(string[] videoPaths, string title, string desc);

        void FetchNotification();

        void Close();

        void Close(string title, string content);

        void SetUseAutoRotate(bool useAuto);

        void DirectlyOpen(Orientation orientation, string page, Dictionary<string, object> extras);

        void DirectlyOpen(string page, Dictionary<string, object> extras); 
        
        void NeedDeferSystemGestures();
    }
}