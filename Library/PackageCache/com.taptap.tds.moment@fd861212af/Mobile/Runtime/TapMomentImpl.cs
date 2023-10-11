using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
#if UNITY_IOS
using UnityEngine.iOS;
#endif

namespace TapTap.Moment.Mobile
{
    public class MomentImpl
    {
        private static readonly string CLZ_NAME = "com.tapsdk.moment.wrapper.TapMomentService";

        private static readonly string IMP_NAME = "com.tapsdk.moment.wrapper.TapMomentServiceImpl";

        private static readonly string SERVICE_NAME = "TapMomentService";

        private ScreenOrientation _requestOrientation = 0;
        private ScreenOrientation _originOrientation = 0;
        private int _autorotateToLandscapeLeft;
        private int _autorotateToLandscapeRight;
        private int _autorotateToPortrait;
        private int _autorotateToPortraitUpsideDown;
        private bool _gameAutoRotate = false;
        private bool _isAppear = false;

        private Orientation _defaultOrientation = Orientation.ORIENTATION_DEFAULT;

        private int _nativeRequestOrientation = -1;

        private MomentImpl()
        {
            EngineBridge.GetInstance().Register(CLZ_NAME, IMP_NAME);
            InitOrientationSetting((int)_defaultOrientation);
        }

        private static volatile MomentImpl _sInstance;

        private static readonly object Locker = new object();

        public static MomentImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new MomentImpl();
                }
            }

            return _sInstance;
        }

        public void SetCallback(Action<int, string> callback)
        {
            var command = new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("setCallback")
                .Callback(true)
                .OnceTime(false)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, (result) =>
            {
                if (result.code != Result.RESULT_SUCCESS)
                {
                    return;
                }

                if (string.IsNullOrEmpty(result.content))
                {
                    return;
                }

                var bean = new MomentCallbackBean(result.content);

                if (Platform.IsAndroid())
                {
                    if (AndroidOrientationInterceptor(bean.code))
                    {
                        callback(bean.code, bean.message);
                    }
                }
                else
                {
                    callback(bean.code, bean.message);
                }
            });
        }

        public void Init(string clientId)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("init")
                .Args("clientId", clientId)
                .CommandBuilder());
        }

        public void Init(string clientId, bool isCN)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("initWithRegion")
                .Args("clientId", clientId)
                .Args("regionType", isCN)
                .CommandBuilder());
#if UNITY_IOS
            if (Platform.IsIOS())
            {
                if (Device.deferSystemGesturesMode != SystemGestureDeferMode.None)
                {
                    NeedDeferSystemGestures();
                } 
            }
#endif
        }

        public void Open(Orientation orientation)
        {
            InitOrientationSetting((int)orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("open")
                .Args("config", (int)orientation)
                .CommandBuilder());
        }

        public void SetDefaultOrientation(Orientation orientation)
        {
            _defaultOrientation = orientation;
            InitOrientationSetting((int)orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("setDefaultOrientation")
                .Args("orientation", (int)orientation)
                .CommandBuilder());
        }

        public void Open()
        {
            Open(_defaultOrientation);
        }

        public void Publish(Orientation orientation, string[] imagePaths, string content)
        {
            InitOrientationSetting((int) orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("publish")
                .Args("config", (int) orientation)
                .Args("imagePaths", imagePaths)
                .Args("content", content)
                .CommandBuilder());
        }

        public void Publish(string[] imagePaths, string content)
        {
            Publish(_defaultOrientation, imagePaths, content);
        }

        public void PublishVideo(Orientation orientation, string[] videoPaths, string title, string desc)
        {
            InitOrientationSetting((int) orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("publishVideo")
                .Args("config", (int) orientation)
                .Args("videoPaths", videoPaths)
                .Args("title", title)
                .Args("desc", desc)
                .CommandBuilder());
        }

        public void PublishVideo(string[] videoPaths, string title, string desc)
        {
           PublishVideo(_defaultOrientation, videoPaths, title, desc);
        }

        public void PublishVideo(Orientation orientation, string[] videoPaths, string[] imagePaths, string title,
            string desc)
        {
            InitOrientationSetting((int) orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("publishVideoImage")
                .Args("config", (int) orientation)
                .Args("videoPaths", videoPaths)
                .Args("imagePaths", imagePaths)
                .Args("title", title)
                .Args("desc", desc)
                .CommandBuilder());
        }

        public void PublishVideo(string[] videoPaths, string[] imagePaths, string title,
            string desc)
        {
            PublishVideo(_defaultOrientation, videoPaths, imagePaths, title, desc);
        }

        public void FetchNotification()
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("fetchNotification")
                .CommandBuilder());
        }

        public void Close()
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("close")
                .CommandBuilder());
        }

        public void Close(string title, string content)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Args("title", title)
                .Args("content", content)
                .Method("closeWithConfirmWindow")
                .CommandBuilder());
        }

        public void NeedDeferSystemGestures()
        {
            if (Platform.IsIOS())
            {
                EngineBridge.GetInstance().CallHandler(new Command.Builder()
                    .Service(SERVICE_NAME)
                    .Method("needDeferSystemGestures")
                    .CommandBuilder());
            }
        }

        public void SetAndroidRequestOrientation(int orientation)
        {
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Args("orientation", orientation)
                .Method("setRequestOrientation")
                .CommandBuilder());
        }

        public void SetUseAutoRotate(bool useAuto)
        {
            if (Platform.IsAndroid())
            {
                _gameAutoRotate = useAuto;
            }
        }

        public void DirectlyOpen(Orientation orientation, string page, Dictionary<string, object> extras)
        {
            InitOrientationSetting((int) orientation);
            EngineBridge.GetInstance().CallHandler(new Command.Builder()
                .Service(SERVICE_NAME)
                .Method("directlyOpen")
                .Args("config", (int) orientation)
                .Args("page", page)
                .Args("extras", Json.Serialize(extras))
                .CommandBuilder());
        }

        public void DirectlyOpen(string page, Dictionary<string, object> extras)
        {
           DirectlyOpen(_defaultOrientation, page, extras);
        }

        private bool AndroidOrientationInterceptor(int code)
        {
            switch (code)
            {
                case (int) CallbackCode.CALLBACK_CODE_MOMENT_APPEAR:
                    Debug.Log("Moment appear");
                    SetRequestOrientation(false);
                    _isAppear = true;
                    return true;
                case (int) CallbackCode.CALLBACK_CODE_MOMENT_DISAPPEAR:
                    Debug.Log("Moment disappear");
                    SetOriginOrientation();
                    _isAppear = false;
                    return true;
                case (int) CallbackCode.CALLBACK_CODE_ON_RESUME:
                    Debug.Log("Moment resume");
                {
                    if (_isAppear)
                    {
                        SetRequestOrientation(true);
                    }

                    return false;
                }
            }

            if (code != (int) CallbackCode.CALLBACK_CODE_ON_STOP) return true;
            if (_isAppear)
            {
                Debug.Log("Moment " + code);
                SetOriginOrientation();
            }

            return false;
        }

        private void InitOrientationSetting(int config)
        {
            if (!Platform.IsAndroid())
            {
                return;
            }

            _originOrientation = Screen.orientation;
            _autorotateToPortraitUpsideDown = Screen.autorotateToPortraitUpsideDown ? 1 : 0;
            _autorotateToPortrait = Screen.autorotateToPortrait ? 1 : 0;
            _autorotateToLandscapeRight = Screen.autorotateToLandscapeRight ? 1 : 0;
            _autorotateToLandscapeLeft = Screen.autorotateToLandscapeLeft ? 1 : 0;
            GetRequestOrientation(config);

            Debug.Log("Moment origin orientation = " + _originOrientation +
                      "\n request orientation = " + _requestOrientation +
                      "\n autoPd = " + _autorotateToPortraitUpsideDown + " autoP = " + _autorotateToPortrait +
                      " autoLl = " + _autorotateToLandscapeLeft + " autoLr = " + _autorotateToLandscapeRight);
        }

        private void GetRequestOrientation(int config)
        {
            if (!Platform.IsAndroid())
            {
                return;
            }

            _nativeRequestOrientation = config;
            switch (_nativeRequestOrientation)
            {
                case (int) Orientation.ORIENTATION_DEFAULT:
                    _requestOrientation = ScreenOrientation.AutoRotation;
                    break;
                case (int) Orientation.ORIENTATION_LANDSCAPE:
                    _requestOrientation = ScreenOrientation.LandscapeLeft;
                    break;
                case (int) Orientation.ORIENTATION_PORTRAIT:
                    _requestOrientation = ScreenOrientation.Portrait;
                    break;
            }
        }

        private void SetRequestOrientation(bool isResume)
        {
            if (!Platform.IsAndroid())
            {
                return;
            }

            ScreenOrientation requestOrientation = _requestOrientation;
            ScreenOrientation originOrientation = _originOrientation;

            if (!IsAutoRotate() && requestOrientation == ScreenOrientation.LandscapeLeft &&
                (originOrientation == ScreenOrientation.LandscapeLeft ||
                 originOrientation == ScreenOrientation.LandscapeRight))
            {
                return;
            }

            if (!IsAutoRotate() && requestOrientation == ScreenOrientation.Portrait &&
                (originOrientation == ScreenOrientation.Portrait ||
                 originOrientation == ScreenOrientation.PortraitUpsideDown))
            {
                return;
            }


            Debug.Log("Moment APPEAR SET REQUEST ORIENTATION = " + requestOrientation);

            if (isResume)
            {
                Debug.Log("Moment resume set android orientation = " + _nativeRequestOrientation);
                SetAndroidRequestOrientation(_nativeRequestOrientation);
            }

            if (requestOrientation == ScreenOrientation.AutoRotation ||
                requestOrientation == ScreenOrientation.LandscapeLeft)
            {
                Screen.orientation = GetDeviceOrientation(requestOrientation);
                Screen.orientation = ScreenOrientation.AutoRotation;
                Screen.autorotateToLandscapeLeft = true;
                Screen.autorotateToLandscapeRight = true;
                Screen.autorotateToPortrait = (requestOrientation == ScreenOrientation.AutoRotation);
                Screen.autorotateToPortraitUpsideDown = false;
            }
            else
            {
                Screen.orientation = requestOrientation;
            }

            Debug.Log("Moment 设置后的方向：" + Screen.orientation);

            //
            // Screen.orientation = currentOrientation;
            // Debug.Log("Moment current device currentOrientation = " + currentOrientation);
            //
            // if (!IsAutoRotate()) return;
            // Screen.orientation = ScreenOrientation.AutoRotation;
            // Screen.autorotateToLandscapeLeft = true;
            // Screen.autorotateToLandscapeRight = true;
            // Screen.autorotateToPortrait = (requestOrientation != ScreenOrientation.LandscapeLeft);
            // Screen.autorotateToPortraitUpsideDown = false;
            // Debug.Log("Moment Set Request Orientation:" + Screen.orientation);
        }

        private void SetOriginOrientation()
        {
            if (!Platform.IsAndroid())
            {
                return;
            }

            // ScreenOrientation orientation = _originOrientation;
            // ScreenOrientation requestOrientation = _requestOrientation;
            // if (requestOrientation == ScreenOrientation.LandscapeLeft &&
            //     (orientation == ScreenOrientation.LandscapeLeft || orientation == ScreenOrientation.LandscapeRight))
            // {
            //     return;
            // }

            Debug.Log("Moment 设置成原始方向");
            Screen.autorotateToLandscapeLeft = _autorotateToLandscapeLeft > 0;
            Screen.autorotateToLandscapeRight = _autorotateToLandscapeRight > 0;
            Screen.autorotateToPortrait = _autorotateToPortrait > 0;
            Screen.autorotateToPortraitUpsideDown = _autorotateToPortraitUpsideDown > 0;

            if (IsAutoRotate())
            {
                ScreenOrientation currentOrientation = Screen.orientation;
                var deviceOrientation = Input.deviceOrientation;
                Debug.Log("Moment 恢复自动旋转 current = " + currentOrientation + " device = " + deviceOrientation);

                switch (deviceOrientation)
                {
                    case DeviceOrientation.LandscapeLeft:
                        currentOrientation = ScreenOrientation.LandscapeLeft;
                        break;
                    case DeviceOrientation.LandscapeRight:
                        currentOrientation = ScreenOrientation.LandscapeRight;
                        break;
                    case DeviceOrientation.Portrait:
                        currentOrientation = ScreenOrientation.Portrait;
                        break;
                }

                Screen.orientation = currentOrientation;

                Screen.orientation = ScreenOrientation.AutoRotation;
            }
            else
            {
                Debug.Log("Moment 恢复原始方向 " + _originOrientation);
                Screen.orientation = _originOrientation;
            }

            Debug.Log("Moment 恢复后的方向：" + Screen.orientation);
        }

        private bool IsAutoRotate()
        {
            return _gameAutoRotate;
        }

        private ScreenOrientation GetDeviceOrientation(ScreenOrientation orientation)
        {
            ScreenOrientation currentOrientation;
            var deviceOrientation = Input.deviceOrientation;
            switch (deviceOrientation)
            {
                case DeviceOrientation.LandscapeLeft:
                    currentOrientation = ScreenOrientation.LandscapeLeft;
                    break;
                case DeviceOrientation.LandscapeRight:
                    currentOrientation = ScreenOrientation.LandscapeRight;
                    break;
                case DeviceOrientation.Portrait when orientation != ScreenOrientation.LandscapeLeft:
                    currentOrientation = ScreenOrientation.Portrait;
                    break;
                default:
                    currentOrientation = orientation;
                    break;
            }

            return currentOrientation;
        }
    }
}