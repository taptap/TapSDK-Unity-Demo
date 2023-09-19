using System;
using System.Collections.Generic;
using System.Collections.Concurrent;
using System.Threading;
using System.Linq;
using System.IO;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.TapDB.Standalone.Internal {
    public class Prefs {
        internal static readonly string PERSISTENT_FILE_NAME = "tapdb_storage_v2";

        private string persistentFilePath;

        private readonly ConcurrentDictionary<string, object> data;

        private readonly Thread persistThread;

        private readonly AutoResetEvent persistEvent;

        public Prefs() {
            persistentFilePath = Path.Combine(Application.persistentDataPath, PERSISTENT_FILE_NAME);
            if (File.Exists(persistentFilePath)) {
                try {
                    string json = File.ReadAllText(persistentFilePath);
                    Dictionary<string, object> jsonData = JsonConvert.DeserializeObject<Dictionary<string, object>>(Codec.Decode(json));
                    data = new ConcurrentDictionary<string, object>(jsonData);
                } catch (Exception e) {
                    TapDBStandalone.Logger.Error(e.Message);
                    File.Delete(persistentFilePath);
                }
            }
            if (data == null) {
                data = new ConcurrentDictionary<string, object>();
            }
            persistEvent = new AutoResetEvent(false);
            persistThread = new Thread(PersistProc) {
                IsBackground = true
            };
            persistThread.Start();
        }

        public T Get<T>(string key) {
            if (data.TryGetValue(key, out object val)) {
                return (T)val;
            }
            return default;
        }

        public void Set<T>(string key, T value) {
            data[key] = value;
            persistEvent.Set();
        }

        public bool TryRemove<T>(string key, out T val) {
            if (data.TryRemove(key, out object v)) {
                val = (T)v;
                persistEvent.Set();
                return true;
            }
            val = default;
            return false;
        }

        public void AddOrUpdate(string key, object addValue, Func<string, object, object> updateValueFactory) {
            data.AddOrUpdate(key, addValue, updateValueFactory);
            persistEvent.Set();
        }

        private void PersistProc() {
            while (true) {
                persistEvent.WaitOne();
                try {
                    Dictionary<string, object> dict = data.ToArray()
                        .ToDictionary(kv => kv.Key, kv => kv.Value);
                    string json = JsonConvert.SerializeObject(dict);
                    File.WriteAllText(persistentFilePath, Codec.Encode(json));
                } catch (Exception e) {
                    TapDBStandalone.Logger.Error(e.Message);
                }
            }
        }
    }
}
