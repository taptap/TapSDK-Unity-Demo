using System;
using System.Collections.Generic;
using TapTap.Moment.Internal;

namespace TapTap.Moment.Mobile
{
    public class TapMomentMobile : ITapMomentBridge
    {
        public void SetCallback(Action<int, string> callback)
        {
            MomentImpl.GetInstance().SetCallback(callback);
        }

        public void Init(string clientId)
        {
            MomentImpl.GetInstance().Init(clientId);
        }

        public void Init(string clientId, bool isCN)
        {
            MomentImpl.GetInstance().Init(clientId, isCN);
        }

        public void Open(Orientation config)
        {
            MomentImpl.GetInstance().Open(config);
        }

        public void Publish(Orientation config, string[] imagePaths, string content)
        {
            MomentImpl.GetInstance().Publish(config, imagePaths, content);
        }

        public void PublishVideo(Orientation config, string[] videoPaths, string[] imagePaths, string title,
            string desc)
        {
            MomentImpl.GetInstance().PublishVideo(config, videoPaths, imagePaths, title, desc);
        }

        public void PublishVideo(Orientation config, string[] videoPaths, string title, string desc)
        {
            MomentImpl.GetInstance().PublishVideo(config, videoPaths, title, desc);
        }

        public void FetchNotification()
        {
            MomentImpl.GetInstance().FetchNotification();
        }

        public void DirectlyOpen(Orientation orientation, string page, Dictionary<string, object> extras)
        {
            MomentImpl.GetInstance().DirectlyOpen(orientation, page, extras);
        }

        public void Close()
        {
            MomentImpl.GetInstance().Close();
        }

        public void Close(string title, string desc)
        {
            MomentImpl.GetInstance().Close(title, desc);
        }

        public void SetUseAutoRotate(bool auto)
        {
            MomentImpl.GetInstance().SetUseAutoRotate(auto);
        }

        public void NeedDeferSystemGestures()
        {
            MomentImpl.GetInstance().NeedDeferSystemGestures();
        }
    }
}