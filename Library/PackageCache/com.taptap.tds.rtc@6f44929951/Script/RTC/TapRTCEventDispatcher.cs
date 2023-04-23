using System.Collections.Generic;
using System.Collections.ObjectModel;
using UnityEngine;

namespace TapTap.RTC
{
    public class TapRTCEventDispatcher : ITapRTCEvent
    {
        private static TapRTCEventDispatcher _sInstance;

        private static readonly object Locker = new object();

        public static TapRTCEventDispatcher GetInstance()
        {
            lock (Locker)
            {
                if (_sInstance == null)
                {
                    _sInstance = new TapRTCEventDispatcher();
                }
            }

            return _sInstance;
        }

        private readonly Dictionary<string, ITapRTCEvent> dispatchers = new Dictionary<string, ITapRTCEvent>();

        public void Add(string roomId, ITapRTCEvent rtcEvent)
        {
            dispatchers[roomId] = rtcEvent;
        }

        public void Remove(string roomId)
        {
            dispatchers.Remove(roomId);
        }

        public void Clear()
        {
            dispatchers.Clear();
        }

        public void OnEvent(EventType type, string data)
        {
            foreach (var @event in dispatchers)
            {
                @event.Value.OnEvent(type, data);
            }
        }
    }
}