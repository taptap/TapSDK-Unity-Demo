using System;
using System.Reflection;
using System.Linq;
using System.Collections.Generic;
using LeanCloud.Storage;
using TapTap.Common;
using TapTap.Common.Internal.Init;
using TapTap.Login;
using TapTap.Login.Internal;
using UnityEngine;

namespace TapTap.Bootstrap
{
    public class TapBootstrapImpl : ITapBootstrap
    {
        private static volatile TapBootstrapImpl _sInstance;

        private static readonly object Locker = new object();

        public static TapBootstrapImpl GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapBootstrapImpl();
                }
            }
            return _sInstance;
        }

        public async void Init(TapConfig config)
        {
            // 先屏蔽 TapLogin 的时长信息录入,因为内建账号会自行设置
            TapLogin.BlockDurationInfo();
            
            // 初始化各个模块
            Type interfaceType = typeof(IInitTask);
            Type[] initTaskTypes = AppDomain.CurrentDomain.GetAssemblies()
                .Where(asssembly => asssembly.GetName().FullName.StartsWith("TapTap"))
                .SelectMany(assembly => assembly.GetTypes())
                .Where(clazz => interfaceType.IsAssignableFrom(clazz) && clazz.IsClass)
                .ToArray();
            if (initTaskTypes != null) {
                List<IInitTask> initTasks = new List<IInitTask>();
                foreach (Type initTaskType in initTaskTypes) {
                    initTasks.Add(Activator.CreateInstance(initTaskType) as IInitTask);
                }
                initTasks = initTasks.OrderBy(task => task.Order).ToList();
                foreach (IInitTask task in initTasks) {
                    TapLogger.Debug($"Init: {task.GetType().Name}");
                    task.Init(config);
                }
            }

            TapCommon.SetXua();
            
            var user = await TDSUser.GetCurrent();
            // 如果发现内建账号没有的话,则通知 TapLogin 模块去检查时长信息
            if (user == null) {
                _ = TapLogin.CheckDurationInfo();
            }
            
            TapCommon.RegisterProperties("sessionToken", new SessionTokenProperty());

            TapCommon.RegisterProperties("objectId", new ObjectIdProperty());
            
        }

        private class SessionTokenProperty : ITapPropertiesProxy
        {
            public string GetProperties()
            {
                Debug.Log($"sessionToken User:{GetCurrentUser()}");
                var sessionToken = GetCurrentUser()?.SessionToken;
                return string.IsNullOrEmpty(sessionToken) ? "" : sessionToken;
            }
        }

        private class ObjectIdProperty : ITapPropertiesProxy
        {
            public string GetProperties()
            {
                Debug.Log($"objectId User:{GetCurrentUser()}");
                var objectId = GetCurrentUser()?.ObjectId;
                return string.IsNullOrEmpty(objectId) ? "" : objectId;
            }
        }

        private static LCUser GetCurrentUser()
        {
            var field = typeof(LCUser).GetField("currentUser", BindingFlags.Static | BindingFlags.NonPublic);
            return field?.GetValue(new LCUser()) as LCUser;
        }
    }
}