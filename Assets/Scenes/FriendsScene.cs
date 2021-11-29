using System;
using System.Collections.ObjectModel;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using TapTap.Bootstrap;
using TapTap.Friends;
using LeanCloud;
using LeanCloud.Storage;
using LC.Newtonsoft.Json;

public class FriendsScene : MonoBehaviour
{
    public InputField userIdInput;
    public InputField friendIdInput;
    public InputField requestIdInput;
    public InputField keyInput;
    public InputField valueInput;
    public InputField nicknameInput;
    public InputField shareUrlInput;

    public InputField bacthRichPresencesInput;
    public InputField batchClearRichPresenceKeysInput;

    public Text connectionStatusText;


    public InputField tokenInput;
    public InputField friendIdForTapFriendInput;
    public InputField friendCodeInput;
    public InputField queryTokenInput;
    public InputField queryLimitInput;

    private TDSUser currentUser;

    void Awake()
    {
        Debug.Log(Application.persistentDataPath);
        LCLogger.LogDelegate = Log;
        TDSFriends.FriendStatusChangedDelegate = new TDSFriendStatusChangedDelegate
        {
            OnNewRequestComing = req => { Debug.Log($"收到来自 {req.User.ObjectId} 的好友申请: {req.ObjectId}"); },
            OnRequestAccepted = req => { Debug.Log($"{req.Friend.ObjectId} 接受了你的好友申请: {req.ObjectId}"); },
            OnRequestDeclined = req => { Debug.Log($"{req.Friend.ObjectId} 拒绝了你的好友申请: {req.ObjectId}"); },
            OnFriendAdd = friendInfo => { Debug.Log($"添加好友 {friendInfo.User.ObjectId} 成功"); },
            OnFriendOnline = friendId => { Debug.Log($"好友: {friendId} 上线"); },
            OnFriendOffline = friendId => { Debug.Log($"好友: {friendId} 下线"); },
            OnRichPresenceChanged = (friendId, richPresences) =>
            {
                Debug.Log($"好友 {friendId} 富信息更新: {JsonConvert.SerializeObject(richPresences)}");
            },
            OnConnectionError = (code, message) =>
            {
                Debug.LogError($"断开连接 {code}, {message}");
                connectionStatusText.text = "断开连接";
            },
            OnConnected = () =>
            {
                Debug.Log("连接成功");
                connectionStatusText.text = "连接成功";
            },
            OnDisconnected = () =>
            {
                Debug.Log("断开连接，重连中...");
                connectionStatusText.text = "断开连接，重连中...";
            }
        };
    }

    void OnDestroy()
    {
        LCLogger.LogDelegate = null;
    }

    #region UI Event

    public async void OnGetUserInfoClicked()
    {
        currentUser = await TDSUser.GetCurrent();
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        LCLogger.Debug(currentUser.ToString());
        userIdInput.text = currentUser.ObjectId;
    }

    public async void OnLoginClicked()
    {
        currentUser = await TDSUser.LoginAnonymously();
        LCLogger.Debug(currentUser.ToString());
        userIdInput.text = currentUser.ObjectId;
    }

    public async void OnOnlineClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        try
        {
            await TDSFriends.Online();
            LCLogger.Debug($"{currentUser.ObjectId} 已上线");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public void OnOfflineClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        try
        {
            TDSFriends.Offline();
            LCLogger.Debug($"{currentUser.ObjectId} 已下线");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnAddFriendClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string friendId = friendIdInput.text;
        if (string.IsNullOrEmpty(friendId))
        {
            return;
        }

        try
        {
            await TDSFriends.AddFriend(friendId);
            LCLogger.Debug($"已向 {friendId} 发送好友申请");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnDeleteFriendClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string friendId = friendIdInput.text;
        if (string.IsNullOrEmpty(friendId))
        {
            return;
        }

        try
        {
            await TDSFriends.DeleteFriend(friendId);
            LCLogger.Debug($"已删除好友 {friendId}");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnCheckFriendClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string friendId = friendIdInput.text;
        if (string.IsNullOrEmpty(friendId))
        {
            return;
        }

        try
        {
            bool isFriend = await TDSFriends.CheckFriendship(friendId);
            if (isFriend)
            {
                LCLogger.Debug($"你和 {friendId} 是好友");
            }
            else
            {
                LCLogger.Debug($"你和 {friendId} 不是好友");
            }
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnGetFriendListClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        try
        {
            ReadOnlyCollection<TDSFriendInfo> friendInfos = await TDSFriends.QueryFriendList(0, 100);
            LCLogger.Debug("好友信息如下: ");
            foreach (TDSFriendInfo friendInfo in friendInfos)
            {
                LCLogger.Debug(
                    $"{friendInfo.User} - {friendInfo.Online} - {JsonConvert.SerializeObject(friendInfo.RichPresence)}");
            }
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnGenerateFriendInvitationClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        try
        {
            TDSFriends.SetShareLink("https://friend-share.cn-e1.leanapp.cn");
            string url = await TDSFriends.GenerateFriendInvitationLink();
            LCLogger.Debug($"邀请好友链接: {url}");
            shareUrlInput.text = url;
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public void OnOpenShareUrlClicked()
    {
        string url = shareUrlInput.text;
        if (string.IsNullOrEmpty(url))
        {
            LCLogger.Error("请先生成邀请好友链接");
            return;
        }

        Application.OpenURL(url);
    }

    public async void OnPrintFriendListClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        ReadOnlyCollection<TDSFriendInfo> friendInfos = await TDSFriends.QueryFriendList(0, 100);
        LCLogger.Debug("好友列表如下: ");
        if (friendInfos == null || friendInfos.Count == 0)
        {
            return;
        }

        foreach (TDSFriendInfo friendInfo in friendInfos)
        {
            LCLogger.Debug(
                $"{friendInfo.User} - {friendInfo.Online} - {JsonConvert.SerializeObject(friendInfo.RichPresence)}");
        }
    }

    public async void OnPrintPendingRequestClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        ReadOnlyCollection<LCFriendshipRequest> requests =
            await TDSFriends.QueryFriendRequestList(LCFriendshipRequest.STATUS_PENDING, 0, 100);
        LCLogger.Debug("未处理请求如下: ");
        foreach (LCFriendshipRequest request in requests)
        {
            LCLogger.Debug($"未处理来自 {request.User.ObjectId} 的请求: {request.ObjectId}");
        }
    }

    public async void OnPrintDeclinedRequestClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        ReadOnlyCollection<LCFriendshipRequest> requests =
            await TDSFriends.QueryFriendRequestList(LCFriendshipRequest.STATUS_DECLINED, 0, 100);
        LCLogger.Debug("已拒绝请求如下: ");
        foreach (LCFriendshipRequest request in requests)
        {
            LCLogger.Debug($"已拒绝来自 {request.User.ObjectId} 的请求: {request.ObjectId}");
        }
    }

    public async void OnAcceptFriendRequestClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string requestId = requestIdInput.text;
        if (string.IsNullOrEmpty(requestId))
        {
            LCLogger.Error("请输入请求 id");
            return;
        }

        try
        {
            TDSUser friend = TDSUser.CreateWithoutData("_User", requestId) as TDSUser;
            LCQuery<LCFriendshipRequest> query = LCFriendshipRequest.GetQuery();
            LCFriendshipRequest request = await query.Get(requestId);
            if (request == null)
            {
                LCLogger.Error($"没有找到来自 {friend.ObjectId} 的未处理请求");
                return;
            }

            await TDSFriends.AcceptFriendshipRequest(request);
            LCLogger.Debug($"已接受来自 {friend.ObjectId} 申请 {request.ObjectId}");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnDeclineFriendRequestClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string requestId = requestIdInput.text;
        if (string.IsNullOrEmpty(requestId))
        {
            LCLogger.Error("请输入请求 id");
            return;
        }

        try
        {
            TDSUser friend = TDSUser.CreateWithoutData("_User", requestId) as TDSUser;
            LCQuery<LCFriendshipRequest> query = LCFriendshipRequest.GetQuery();
            LCFriendshipRequest request = await query.Get(requestId);
            if (request == null)
            {
                LCLogger.Error($"没有找到来自 {friend.ObjectId} 的未处理请求");
                return;
            }

            await TDSFriends.DeclineFriendshipRequest(request);
            LCLogger.Debug($"已拒绝来自 {friend.ObjectId} 申请 {request.ObjectId}");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnDeleteFriendRequestClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string requestId = requestIdInput.text;
        if (string.IsNullOrEmpty(requestId))
        {
            LCLogger.Error("请输入请求 id");
            return;
        }

        try
        {
            TDSUser friend = TDSUser.CreateWithoutData("_User", requestId) as TDSUser;
            LCQuery<LCFriendshipRequest> query = LCFriendshipRequest.GetQuery();
            LCFriendshipRequest request = await query.Get(requestId);
            if (request == null)
            {
                LCLogger.Error($"没有找到来自 {friend.ObjectId} 的未处理请求");
                return;
            }

            await request.Delete();
            LCLogger.Debug($"已删除来自 {friend.ObjectId} 申请 {request.ObjectId}");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnSetRichPresencesClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string key = keyInput.text;
        if (string.IsNullOrEmpty(key))
        {
            LCLogger.Error("请输入富信息 key");
            return;
        }

        string value = valueInput.text;
        if (string.IsNullOrEmpty(value))
        {
            LCLogger.Error("请输入富信息 value");
            return;
        }

        try
        {
            await TDSFriends.SetRichPresence(key, value);
            LCLogger.Debug($"设置富信息 {key} : {value} 成功");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnSetNicknameClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string nickname = nicknameInput.text;
        if (nickname == null)
        {
            LCLogger.Error("请输入昵称");
            return;
        }

        try
        {
            currentUser["nickname"] = nickname;
            await currentUser.Save();
            LCLogger.Debug($"设置昵称: {nickname} 成功");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnSearchByNicknameClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string nickname = nicknameInput.text;
        if (nickname == null)
        {
            LCLogger.Error("请输入昵称");
            return;
        }

        try
        {
            ReadOnlyCollection<TDSFriendInfo> friendInfos = await TDSFriends.SearchUserByName(nickname);
            LCLogger.Debug($"昵称包含 {nickname} 的用户如下: ");
            foreach (TDSFriendInfo friendInfo in friendInfos)
            {
                LCLogger.Debug(
                    $"{friendInfo.User.ObjectId} 昵称: {friendInfo.User["nickname"]} - {JsonConvert.SerializeObject(friendInfo.RichPresence)}");
            }
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnBatchSetRichPresencesClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string presencesStr = bacthRichPresencesInput.text;
        if (string.IsNullOrEmpty(presencesStr))
        {
            LCLogger.Error("请输入批量设置的富信息，JSON 格式 {\"xx\": \"yy\", \"aa\": \"bb\"}");
            return;
        }

        try
        {
            Dictionary<string, string> presences =
                JsonConvert.DeserializeObject<Dictionary<string, string>>(presencesStr);
            await TDSFriends.SetRichPresences(presences);
            LCLogger.Debug($"设置富信息 {presencesStr} 成功");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }

    public async void OnBatchClearRichPresencesClicked()
    {
        if (currentUser == null)
        {
            LCLogger.Error("请先登录");
            return;
        }

        string keysStr = batchClearRichPresenceKeysInput.text;
        if (string.IsNullOrEmpty(keysStr))
        {
            LCLogger.Error("请输入要批量删除的富信息 key");
            return;
        }

        IEnumerable<string> keys = keysStr.Split(',').Select(k => k.Trim());
        try
        {
            await TDSFriends.ClearRichPresences(keys);
            LCLogger.Debug($"{keysStr} 清理成功");
        }
        catch (Exception e)
        {
            LCLogger.Error(e);
        }
    }


    public async void OnLoginWithTokenClicked() {
        string token = tokenInput.text;
        if (string.IsNullOrEmpty(token)) {
            LCLogger.Error("请输入要登录的 token");
            return;
        }

        currentUser = await TDSUser.BecomeWithSessionToken(token);
        LCLogger.Debug("token 登录成功");
    }

    public async void OnTapLoginClicked() {
        // currentUser = await TDSUser.LoginWithTapTap(new string[] { "public_profile", "user_friends" });
        LCLogger.Debug("tap 登录成功");
    }

    public async void OnAddTapFriendClicked() {
        if (currentUser == null) {
            LCLogger.Error("请先登录");
            return;
        }

        string friendId = friendIdForTapFriendInput.text;
        if (string.IsNullOrEmpty(friendId)) {
            LCLogger.Error("请输入好友 id");
            return;
        }

        TDSUser friend = TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, friendId) as TDSUser;
        // await TDSFriends.FollowTapUser(friend);
        LCLogger.Debug($"添加 tap 好友成功，可在 tap 关注中查看");
    }

    public async void OnAddFriendByCodeClicked() {
        if (currentUser == null) {
            LCLogger.Error("请先登录");
            return;
        }

        string code = friendCodeInput.text;
        if (string.IsNullOrEmpty(code)) {
            LCLogger.Error("请输入好友 code");
            return;
        }

        // await TDSFriends.AddFriendByShortCode(code);
        LCLogger.Debug($"添加好友 {code} 请求发送成功");
    }

    public async void OnQueryTapFriendListClicked() {
        if (currentUser == null) {
            LCLogger.Error("请先登录");
            return;
        }

        string cursor = queryTokenInput.text?.Length > 0 ? queryTokenInput.text : null;
        int.TryParse(queryLimitInput.text, out int limit);
        limit = limit <= 0 ? 100 : limit;
        // ThirdPartyFriendResult result = await TDSFriends.QueryThirdPartyFriendList("taptap", cursor, limit,
            // TDSFriends.ThirdPartyFriendRequestCachePolicy.OnlyNetwork);
        // LCLogger.Debug($"好友数量: {result.FriendList.Count}");
        // LCLogger.Debug($"下次查询的游标: {result.Cursor}");
    }

    public async void OnQueryTapFriendListFromCacheClicked() {
        if (currentUser == null) {
            LCLogger.Error("请先登录");
            return;
        }

        string cursor = queryTokenInput.text?.Length > 0 ? queryTokenInput.text : null;
        int.TryParse(queryLimitInput.text, out int limit);
        limit = limit <= 0 ? 100 : limit;
        // ThirdPartyFriendResult result = await TDSFriends.QueryThirdPartyFriendList("taptap", cursor, limit,
            // TDSFriends.ThirdPartyFriendRequestCachePolicy.CacheElseNetwork);
        // LCLogger.Debug($"好友数量: {result.FriendList.Count}");
        // LCLogger.Debug($"下次查询的游标: {result.Cursor}");
    }

    public async void OnSearchFriendByCodeClicked() {
        if (currentUser == null) {
            LCLogger.Error("请先登录");
            return;
        }

        string code = friendCodeInput.text;
        if (string.IsNullOrEmpty(code)) {
            LCLogger.Error("请输入好友 code");
            return;
        }

        // TDSFriendInfo friendInfo = await TDSFriends.SearchUserByShortCode(code);
        // LCLogger.Debug($"好友码 {code} 的用户如下: ");
        // LCLogger.Debug($"{friendInfo.User.ObjectId} 昵称: {friendInfo.User["nickname"]} - {JsonConvert.SerializeObject(friendInfo.RichPresence)}");
    }

    #endregion

    private static void Log(LCLogLevel level, string info)
    {
        switch (level)
        {
            case LCLogLevel.Debug:
                Debug.Log($"[DEBUG] {info}\n");
                break;
            case LCLogLevel.Warn:
                Debug.LogWarning($"[WARNING] {info}\n");
                break;
            case LCLogLevel.Error:
                Debug.LogError($"[ERROR] {info}\n");
                break;
            default:
                Debug.Log(info);
                break;
        }
    }
}