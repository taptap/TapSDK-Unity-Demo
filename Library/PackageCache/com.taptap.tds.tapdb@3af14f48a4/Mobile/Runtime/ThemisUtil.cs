using System;
using UnityEngine;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;
using System.Diagnostics;
using System.Reflection;
using System.Linq;
using TapTap.Common;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace TapTap.TapDB.Mobile
{
    public sealed class ThemisUtil
    {
        private static event TapDB.LogCallbackDelegate _LogCallbackEventHandler;

        private static LogSeverity _autoReportLogLevel = LogSeverity.LogError;
        private static bool _autoQuitApplicationAfterReport = false;

        private static readonly int EXCEPTION_TYPE_UNCAUGHT = 1;
        private static readonly int EXCEPTION_TYPE_CAUGHT = 2;

        private delegate void reportExceptionDel(string name, string reason, string stackTrace, int type, bool isQuitApp);
        private static bool enableDebug = false;

        private static bool _uncaughtAutoReportOnce = false;

        [Preserve]
        public static void U3d_ConfigAutoReportLogLevel(LogSeverity level)
        {
            _autoReportLogLevel = level;
        }


        public static void U3d_RegisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            if (handler != null)
            {
                LocalDebugLog("Add log callback handler: {0}", handler);

                _LogCallbackEventHandler += handler;
            }
        }

        public static void U3d_UnregisterLogCallback(TapDB.LogCallbackDelegate handler)
        {
            if (handler != null)
            {
                LocalDebugLog("Remove log callback handler");

                _LogCallbackEventHandler -= handler;
            }
        }


        public static void U3d_ConfigAutoQuitApplication(bool autoQuit)
        {
            _autoQuitApplicationAfterReport = autoQuit;
        }

        public static void U3d_ConfigAutoQuitApplicationTest(bool autoQuit)
        {
            _autoQuitApplicationAfterReport = autoQuit;
        }

        public static void ExceptionReport(System.Exception e, string message)
        {

            LocalDebugLog("Report exception: {0}\n------------\n{1}\n------------", message, e);

            _HandleException(e, message, false);
        }

        private static void _RegisterExceptionHandler()
        {
            try
            {
                // hold only one instance 

#if UNITY_5
                Application.logMessageReceived += _OnLogCallbackHandler;
#else
                // Application.RegisterLogCallback(_OnLogCallbackHandler);
                Application.logMessageReceived += _OnLogCallbackHandler;
#endif
                AppDomain.CurrentDomain.UnhandledException += _OnUncaughtExceptionHandler;

                LocalDebugLog("Register the log callback in Unity {0}", Application.unityVersion);
            }
            catch
            {

            }
        }

        private static void _UnregisterExceptionHandler()
        {
            try
            {
#if UNITY_5
                Application.logMessageReceived -= _OnLogCallbackHandler;
#else
                Application.logMessageReceived -= _OnLogCallbackHandler;
                //Application.RegisterLogCallback(null);
#endif
                System.AppDomain.CurrentDomain.UnhandledException -= _OnUncaughtExceptionHandler;
                LocalDebugLog("Unregister the log callback in unity {0}", Application.unityVersion);
            }
            catch
            {

            }
        }

        public static void LocalDebugLog(string format, params object[] args)
        {

            if (string.IsNullOrEmpty(format))
            {
                return;
            }
            if (enableDebug)
            {
                UnityEngine.Debug.Log("THEMIS: TapThemis: {0}" + string.Format(format, args));
                //DebugLog(string.Format("TapThemis : {0}", string.Format(format, args)));
            }
        }

        public static void SetEnableDebug(bool enable)
        {
            enableDebug = enable;
        }

        private static void _OnLogCallbackHandler(string condition, string stackTrace, LogType type)
        {

            if (_LogCallbackEventHandler != null)
            {
                _LogCallbackEventHandler(condition, stackTrace, type);
            }



            if (!string.IsNullOrEmpty(condition) && condition.Contains("THEMIS:"))
            {
                return;
            }

            if (_uncaughtAutoReportOnce)
            {
                return;
            }

            // convert the log level
            LogSeverity logLevel = LogSeverity.Log;
            switch (type)
            {
                case LogType.Exception:
                    logLevel = LogSeverity.LogException;
                    break;
                case LogType.Error:
                    logLevel = LogSeverity.LogError;
                    break;
                case LogType.Assert:
                    logLevel = LogSeverity.LogAssert;
                    break;
                case LogType.Warning:
                    logLevel = LogSeverity.LogWarning;
                    break;
                case LogType.Log:
                    logLevel = LogSeverity.LogDebug;
                    break;
                default:
                    break;
            }

            if (LogSeverity.Log == logLevel)
            {
                return;
            }

            _HandleException(logLevel, null, condition, stackTrace, true);
        }

        private static void _OnUncaughtExceptionHandler(object sender, System.UnhandledExceptionEventArgs args)
        {

            if (args == null || args.ExceptionObject == null)
            {
                return;
            }
            try
            {
                if (args.ExceptionObject.GetType() != typeof(System.Exception))
                {
                    return;
                }
            }
            catch
            {
                if (UnityEngine.Debug.isDebugBuild == true)
                {
                    UnityEngine.Debug.Log("THEMIS: Failed to report Unity 3D uncaught exception");
                }

                return;
            }


            if (_uncaughtAutoReportOnce)
            {
                return;
            }

            _HandleException((System.Exception)args.ExceptionObject, null, true);
        }

        private static void _HandleException(System.Exception e, string message, bool uncaught)
        {
            if (e == null)
            {
                return;
            }



            string name = e.GetType().Name;
            string reason = e.Message;

            if (!string.IsNullOrEmpty(message))
            {
                reason = string.Format("{0}***{1}", reason, message);
            }

            StringBuilder stackTraceBuilder = new StringBuilder("");


            StackTrace stackTrace = new StackTrace(e, true);
            int count = stackTrace.FrameCount;
            for (int i = 0; i < count; i++)
            {

                StackFrame frame = stackTrace.GetFrame(i);

                stackTraceBuilder.AppendFormat("{0}.{1}", frame.GetMethod().DeclaringType.Name, frame.GetMethod().Name);

                ParameterInfo[] parameters = frame.GetMethod().GetParameters();
                if (parameters == null || parameters.Length == 0)
                {
                    stackTraceBuilder.Append(" () ");
                }
                else
                {
                    stackTraceBuilder.Append(" (");

                    int pcount = parameters.Length;

                    ParameterInfo param = null;
                    for (int p = 0; p < pcount; p++)
                    {
                        param = parameters[p];
                        stackTraceBuilder.AppendFormat("{0} {1}", param.ParameterType.Name, param.Name);

                        if (p != pcount - 1)
                        {
                            stackTraceBuilder.Append(", ");
                        }
                    }
                    param = null;

                    stackTraceBuilder.Append(") ");
                }


                string fileName = frame.GetFileName();
                if (!string.IsNullOrEmpty(fileName) && !fileName.ToLower().Equals("unknown"))
                {
                    fileName = fileName.Replace("\\", "/");

                    int loc = fileName.ToLower().IndexOf("/assets/");
                    if (loc < 0)
                    {
                        loc = fileName.ToLower().IndexOf("assets/");
                    }

                    if (loc > 0)
                    {
                        fileName = fileName.Substring(loc);
                    }

                    stackTraceBuilder.AppendFormat("(at {0}:{1})", fileName, frame.GetFileLineNumber());
                }
                stackTraceBuilder.AppendLine();
            }

            // report

            _reportException(name, reason, stackTraceBuilder.ToString(), uncaught);
        }

        private static void _HandleException(LogSeverity logLevel, string name, string message, string stackTrace, bool uncaught)
        {

            if (logLevel == LogSeverity.Log)
            {
                return;
            }

            if ((uncaught && logLevel < _autoReportLogLevel))
            {
                LocalDebugLog("Not report exception for level {0}", logLevel.ToString());
                return;
            }

            string type = null;
            string reason = null;

            if (!string.IsNullOrEmpty(message))
            {
                try
                {
                    if ((LogSeverity.LogException == logLevel) && message.Contains("Exception"))
                    {

                        Match match = new Regex(@"^(?<errorType>\S+):\s*(?<errorMessage>.*)", RegexOptions.Singleline).Match(message);

                        if (match.Success)
                        {
                            type = match.Groups["errorType"].Value.Trim();
                            reason = match.Groups["errorMessage"].Value.Trim();
                        }
                    }
                    else if ((LogSeverity.LogError == logLevel))
                    {
                        if (message.StartsWith("Unhandled Exception:", System.StringComparison.Ordinal))
                        {
                            Match match = new Regex(@"^Unhandled\s+Exception:\s*(?<exceptionName>\S+):\s*(?<exceptionDetail>.*)", RegexOptions.Singleline).Match(message);

                            if (match.Success)
                            {
                                string exceptionName = match.Groups["exceptionName"].Value.Trim();
                                string exceptionDetail = match.Groups["exceptionDetail"].Value.Trim();

                                // 
                                int dotLocation = exceptionName.LastIndexOf(".");
                                if (dotLocation > 0 && dotLocation != exceptionName.Length)
                                {
                                    type = exceptionName.Substring(dotLocation + 1);
                                }
                                else
                                {
                                    type = exceptionName;
                                }

                                int stackLocation = exceptionDetail.IndexOf(" at ");
                                if (stackLocation > 0)
                                {
                                    // 
                                    reason = exceptionDetail.Substring(0, stackLocation);
                                    // substring after " at "
                                    string callStacks = exceptionDetail.Substring(stackLocation + 3).Replace(" at ", "\n").Replace("in <filename unknown>:0", "").Replace("[0x00000]", "");
                                    //
                                    stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());

                                }
                                else
                                {
                                    reason = exceptionDetail;
                                }


                                // for LuaScriptException
                                if (type.Equals("LuaScriptException") && exceptionDetail.Contains(".lua") && exceptionDetail.Contains("stack traceback:"))
                                {
                                    //exceptionDetail.Replace("stack traceback:", "lua_stack_traceback:");
                                    stackLocation = exceptionDetail.IndexOf("stack traceback:");

                                    if (stackLocation > 0)
                                    {
                                        reason = exceptionDetail.Substring(0, stackLocation);
                                        // substring after "stack traceback:"
                                        string callStacks = exceptionDetail.Substring(stackLocation).Replace("stack traceback:", "lua_stack_traceback:");

                                        //
                                        stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
                                    }
                                }
                            }
                        }
                        else if (message.Contains("stack traceback:"))
                        {
                            int stackLocation = message.IndexOf("stack traceback:");

                            if (stackLocation > 0)
                            {
                                reason = message.Substring(0, stackLocation).Trim();
                                // substring after "stack traceback:"
                                string callStacks = message.Substring(stackLocation);
                                callStacks = callStacks.Replace("stack traceback:", "lua_stack_traceback:");

                                stackTrace = string.Format("{0}\n{1}", stackTrace, callStacks.Trim());
                            }
                        }


                    }
                }
                catch
                {

                }

                if (string.IsNullOrEmpty(reason))
                {
                    reason = message;
                }
            }

            if (string.IsNullOrEmpty(name))
            {
                if (string.IsNullOrEmpty(type))
                {
                    type = string.Format("Unity{0}", logLevel.ToString());
                }
            }
            else
            {
                type = name;
            }



            _reportException(type, reason, stackTrace, uncaught);
        }

        private static void _reportException(string name, string reason, string stackTrace, bool uncaught)
        {
            if (string.IsNullOrEmpty(name))
            {
                return;
            }
            if (string.IsNullOrEmpty(stackTrace))
            {
                stackTrace = StackTraceUtility.ExtractStackTrace();
            }

            if (string.IsNullOrEmpty(stackTrace))
            {
                stackTrace = "Empty";
            }
            else
            {

                try
                {
                    string[] frames = stackTrace.Split('\n');

                    if (frames != null && frames.Length > 0)
                    {

                        StringBuilder trimFrameBuilder = new StringBuilder();

                        string frame = null;
                        int count = frames.Length;
                        bool isLua = false;
                        for (int i = 0; i < count; i++)
                        {
                            frame = frames[i];

                            if (frame.StartsWith("lua_stack_traceback:"))
                            {
                                isLua = true;
                                trimFrameBuilder.AppendLine();
                            }

                            if (isLua)
                            {
                                trimFrameBuilder.Append(frame);
                                trimFrameBuilder.AppendLine();
                                continue;
                            }

                            if (string.IsNullOrEmpty(frame) || string.IsNullOrEmpty(frame.Trim()))
                            {
                                continue;
                            }

                            frame = frame.Trim();

                            // System.Collections.Generic
                            if (frame.StartsWith("System.Collections.Generic.") || frame.StartsWith("ShimEnumerator"))
                            {
                                continue;
                            }
                            if (frame.StartsWith("THEMIS"))
                            {
                                continue;
                            }
                            if (frame.Contains("..ctor"))
                            {
                                continue;
                            }

                            int start = frame.ToLower().IndexOf("(at");
                            int end = frame.ToLower().IndexOf("/assets/");

                            if (start > 0 && end > 0)
                            {
                                trimFrameBuilder.AppendFormat("{0}(at {1}", frame.Substring(0, start).Replace(":", "."), frame.Substring(end));
                            }
                            else
                            {
                                trimFrameBuilder.Append(frame.Replace(":", "."));
                            }

                            trimFrameBuilder.AppendLine();
                        }
                        //trimFrameBuilder.AppendLine();
                        stackTrace = trimFrameBuilder.ToString();
                    }
                }
                catch
                {
                    LocalDebugLog("{0}", "Error to parse the stack trace");
                }

            }

            LocalDebugLog("ReportException: name = {0}\n reason = {1}\nstackTrace = {2}", name, reason, stackTrace);

            _uncaughtAutoReportOnce = uncaught && _autoQuitApplicationAfterReport;
            ReportException(name, reason, stackTrace, _uncaughtAutoReportOnce);
        }

        //当前域中是否已载入独立 Themis 注册日志方法
        private static bool hasLoadThemisRegisterLog(){
             Type themisType = AppDomain.CurrentDomain.GetAssemblies()
                .Where(assembly => assembly.GetName().FullName.StartsWith("TapThemis"))
                .SelectMany(assembly => assembly.GetTypes())
                .SingleOrDefault(clazz => clazz.IsClass && clazz.FullName.Equals("TapTap.Themis.TapThemis"));
            if(themisType == null) return false;
            MethodInfo methodInfo = themisType.GetMethod("_RegisterExceptionHandler", BindingFlags.Static | BindingFlags.NonPublic);
            return methodInfo != null;  
        }

        [Preserve]
        public static void RegisterUnityLogListener()
        {
            // 当开发者已接入独立 Themis 的初始化接口时，这里不再重复注册日志监听
            if(hasLoadThemisRegisterLog()){
                UnityEngine.Debug.Log("TapDB : developer already invoke Themis independent init method , just return");
                return;
            }else{
                UnityEngine.Debug.Log("TapDB :  need register Themis log ");
            }
            var command = new Command.Builder()
                .Service(TapDBConstants.TAPDB_SERVICE)
                .Method("isThemisValid")
                .Callback(true)
                .OnceTime(true)
                .CommandBuilder();

            EngineBridge.GetInstance().CallHandler(command, result =>
            {

                if (EngineBridge.CheckResult(result))
                {
                    bool isValid = short.Parse(result.content) > 0;
                    if (isValid)
                    {
                        _RegisterExceptionHandler();
                    }
                }
                else
                {
                    UnityEngine.Debug.Log("THEMIS get native lib response = " + result.code + " content = " + result.content); ;
                }
            });


        }



      public static void ReportException(string name, string message, string stackTrace, bool isQuitApp)
        {
            var command = new Command.Builder()
               .Service(TapDBConstants.TAPDB_SERVICE)
               .Method("reportCustomException")
               .Args("name", name)
               .Args("reason", message)
               .Args("message", stackTrace)
               .Args("isQuit", isQuitApp).CommandBuilder();
            EngineBridge.GetInstance().CallHandler(command);
        }

    }
}
