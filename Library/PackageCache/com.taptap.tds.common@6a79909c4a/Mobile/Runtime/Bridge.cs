using System;
using System.Threading.Tasks;

namespace TapTap.Common
{
    public class EngineBridge
    {
        private static volatile EngineBridge _sInstance;

        private readonly IBridge _bridge;

        private static readonly object Locker = new object();

        public static EngineBridge GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new EngineBridge();
                }
            }

            return _sInstance;
        }

        private EngineBridge()
        {
            if (Platform.IsAndroid())
            {
                _bridge = BridgeAndroid.GetInstance();
            }
            else if (Platform.IsIOS())
            {
                _bridge = BridgeIOS.GetInstance();
            }
        }

        public void Register(string serviceClzName, string serviceImplName)
        {
            _bridge?.Register(serviceClzName, serviceImplName);
        }

        public void CallHandler(Command command)
        {
            _bridge?.Call(command);
        }

        public void CallHandler(Command command, Action<Result> action)
        {
            _bridge?.Call(command, action);
        }

        public Task<Result> Emit(Command command)
        {
            var tcs = new TaskCompletionSource<Result>();
            CallHandler(command, result =>
            {
                tcs.TrySetResult(result);
            });
            return tcs.Task;
        }

        public static bool CheckResult(Result result)
        {
            if (result == null)
            {
                return false;
            }

            if (result.code != Result.RESULT_SUCCESS)
            {
                return false;
            }

            return !string.IsNullOrEmpty(result.content);
        }
    }
}