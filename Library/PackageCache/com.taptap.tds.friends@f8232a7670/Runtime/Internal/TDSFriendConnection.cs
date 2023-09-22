using System;
using System.Text;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeanCloud.Realtime.Internal.Router;
using LeanCloud.Realtime.Internal.WebSocket;
using LeanCloud;
using LeanCloud.Common;
using LC.Newtonsoft.Json;
using TapTap.Bootstrap;

namespace TapTap.Friends.Internal {
    internal class TDSFriendConnection {
        private const int SEND_TIMEOUT = 10000;
        private const int KEEP_ALIVE_INTERVAL = 45;

        /// <summary>
        /// After exceeding this limit, will reset the Router cache and try to reconnect again.
        /// </summary>
        private const int MAX_RECONNECT_TIMES = 10;

        private const int RECONNECT_INTERVAL = 10000;

        internal Action<Dictionary<string, object>> OnNotification;

        internal Action OnDisconnected;

        internal Action OnReconnected;

        private TDSFriendRouter router;

        private LCWebSocketClient client;

        internal TDSFriendConnection() {
            router = new TDSFriendRouter();
            client = new LCWebSocketClient {
                OnMessage = OnWebSocketClientMessage,
                OnClose = OnWebSocketClientDisconnected
            };
        }

        internal async Task<bool> Connect() {
            TDSUser current = await TDSUser.GetCurrent();
            if (current == null) {
                throw new Exception("Not logged in.");
            }

            TDSFriendsConfig config = await router.GetConfig();
            if (!config.NeedWebSocket) {
                return false;
            }

            Dictionary<string, string> headers = new Dictionary<string, string> {
                { "X-LC-Session", current.SessionToken },
                { "X-LC-Id", LCCore.AppId },
                { "X-LC-Key", LCCore.AppKey }
            };
            TimeSpan keepAliveInterval = TimeSpan.FromSeconds(KEEP_ALIVE_INTERVAL);
            LCLogger.Debug($"Friend Server");
            await client.Connect(config.WebSocketUrl, headers: headers, keepAliveInterval: keepAliveInterval);
            return true;
        }

        internal async Task SendText(string text) {
            Task timeoutTask = Task.Delay(SEND_TIMEOUT);
            if (await Task.WhenAny(client.Send(text), timeoutTask) == timeoutTask) {
                throw new TimeoutException("Send text time out");
            }
        }

        internal async Task Close() {
            OnNotification = null;
            OnDisconnected = null;
            OnReconnected = null;
            await client.Close();
        }

        private void OnWebSocketClientMessage(byte[] bytes, int length) {
            try {
                string json = Encoding.UTF8.GetString(bytes, 0, length);
                if (LCLogger.LogDelegate != null) {
                    LCLogger.Debug($"<= {json}");
                }
                Dictionary<string, object> msg = JsonConvert.DeserializeObject<Dictionary<string, object>>(json,
                    LCJsonConverter.Default);
                // 通知
                OnNotification?.Invoke(msg);
            } catch (Exception e) {
                LCLogger.Error(e);
            }
        }

        private void OnWebSocketClientDisconnected() {
            OnDisconnected?.Invoke();
            // 重连
            _ = Reconnect();
        }

        private async Task Reconnect() {
            while (true) {
                int reconnectCount = 0;
                // 重连策略
                while (reconnectCount < MAX_RECONNECT_TIMES) {
                    try {
                        if (LCLogger.LogDelegate != null) {
                            LCLogger.Debug($"Reconnecting... {reconnectCount}");
                        }
                        bool needConnection = await Connect();
                        if (!needConnection) {
                            // 如果在重连过程中调整了 enabled 参数，则跳出重连循环
                            return;
                        }
                        break;
                    } catch (Exception e) {
                        reconnectCount++;
                        if (LCLogger.LogDelegate != null) {
                            LCLogger.Error(e);
                            LCLogger.Debug($"Reconnect after {RECONNECT_INTERVAL}ms");
                        }
                        await Task.Delay(RECONNECT_INTERVAL);
                    }
                }
                if (reconnectCount < MAX_RECONNECT_TIMES) {
                    // 重连成功
                    LCLogger.Debug("Reconnected");
                    client.OnMessage = OnWebSocketClientMessage;
                    client.OnClose = OnWebSocketClientDisconnected;
                    OnReconnected?.Invoke();
                    break;
                } else {
                    // 重置 Router，继续尝试重连
                    router = new TDSFriendRouter();
                }
            }
        }
    }
}
