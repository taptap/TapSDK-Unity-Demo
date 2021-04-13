using UnityEngine;
using System.Collections.Generic;
using System;
using System.Threading;
using System.Linq;

public class Loom : MonoBehaviour
{
    //是否已经初始化
    static bool isInitialized;

    private static Loom _ins;
    public static Loom ins { get { Initialize(); return _ins; } }

    void Awake()
    {
        _ins = this;
        isInitialized = true;
    }

    //初始化
    public static void Initialize()
    {
        if (!isInitialized)
        {
            if (!Application.isPlaying)
                return;

            isInitialized = true;
            var obj = new GameObject("Loom");
            _ins = obj.AddComponent<Loom>();

            DontDestroyOnLoad(obj);
        }
    }

    //单个执行单元（无延迟）
    struct NoDelayedQueueItem
    {
        public Action<object> action;
        public object param;
    }
    //全部执行列表（无延迟）
    List<NoDelayedQueueItem> listNoDelayActions = new List<NoDelayedQueueItem>();


    //单个执行单元（有延迟）
    struct DelayedQueueItem
    {
        public Action<object> action;
        public object param;
        public float time;
    }
    //全部执行列表（有延迟）
    List<DelayedQueueItem> listDelayedActions = new List<DelayedQueueItem>();


    //加入到主线程执行队列（无延迟）
    public static void QueueOnMainThread(Action<object> taction, object param)
    {
        QueueOnMainThread(taction, param, 0f);
    }

    //加入到主线程执行队列（有延迟）
    public static void QueueOnMainThread(Action<object> action, object param, float time)
    {
        if (time != 0)
        {
            lock (ins.listDelayedActions)
            {
                ins.listDelayedActions.Add(new DelayedQueueItem { time = Time.time + time, action = action, param = param });
            }
        }
        else
        {
            lock (ins.listNoDelayActions)
            {
                ins.listNoDelayActions.Add(new NoDelayedQueueItem { action = action, param = param });
            }
        }
    }


    //当前执行的无延时函数链
    List<NoDelayedQueueItem> currentActions = new List<NoDelayedQueueItem>();
    //当前执行的有延时函数链
    List<DelayedQueueItem> currentDelayed = new List<DelayedQueueItem>();

    void Update()
    {
        if (listNoDelayActions.Count > 0)
        {
            lock (listNoDelayActions)
            {
                currentActions.Clear();
                currentActions.AddRange(listNoDelayActions);
                listNoDelayActions.Clear();
            }
            for (int i = 0; i < currentActions.Count; i++)
            {
                currentActions[i].action(currentActions[i].param);
            }
        }

        if (listDelayedActions.Count > 0)
        {
            lock (listDelayedActions)
            {
                currentDelayed.Clear();
                currentDelayed.AddRange(listDelayedActions.Where(d => Time.time >= d.time));
                for (int i = 0; i < currentDelayed.Count; i++)
                {
                    listDelayedActions.Remove(currentDelayed[i]);
                }
            }

            for (int i = 0; i < currentDelayed.Count; i++)
            {
                currentDelayed[i].action(currentDelayed[i].param);
            }
        }
    }

    void OnDisable()
    {
        if (_ins == this)
        {
            _ins = null;
        }
    }
}
