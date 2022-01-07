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

using ThirdPartyFriendRequestCachePolicy = TapTap.Friends.Internal.TDSFriendCore.ThirdPartyFriendRequestCachePolicy;

public partial class FriendsScene : MonoBehaviour {
    private const string TAPTAP = "taptap";

    struct QueryParams {
        public string Cursor;
        public int Limit;
        public TDSFollows.SortCondition Condition;
    }

    public InputField userCodeForFollowInput;

    public InputField userIdForFollowInput;

    public InputField queryTokenForTDSInput;
    public InputField queryLimitForTDSInput;
    public Toggle OnlineSortForTDSToggle;

    public InputField followIdForTapInput;
    public InputField blockIdForTapInput;

    public InputField queryTokenForTapInput;
    public InputField queryLimitForTapInput;
    public Toggle OnlineSortForTapToggle;

    #region TDS

    public async void OnFollowTDSClicked() {
        GetCurrentUser();

        string userId = userIdForFollowInput.text;
        if (string.IsNullOrEmpty(userId)) {
            LCLogger.Error("请输入TDSUser id");
            return;
        }

        await TDSFollows.Follow(userId);
        LCLogger.Debug($"关注 {userId} 成功");
    }

    public async void OnFollowTDSByCodeClicked() {
        string code = GetShortCode();

        await TDSFollows.FollowByShortCode(code);
        LCLogger.Debug($"关注 {code} 成功");
    }

    public async void OnUnfollowTDSClicked() {
        GetCurrentUser();

        string userId = userIdForFollowInput.text;
        if (string.IsNullOrEmpty(userId)) {
            LCLogger.Error("请输入TDSUser id");
            return;
        }

        await TDSFollows.Unfollow(userId);
        LCLogger.Debug($"取注 {userId} 成功");
    }

    public async void OnUnfollowTDSByCodeClicked() {
        string code = GetShortCode();

        await TDSFollows.UnfollowByShortCode(code);
        LCLogger.Debug($"取注 {code} 成功");
    }

    public async void OnQueryTDSFolloweesClicked() {
        GetCurrentUser();

        QueryParams @params = GetTDSQueryParams();

        FriendResult result = await TDSFollows.QueryFolloweeList(@params.Cursor, @params.Limit, @params.Condition);
        LCLogger.Debug("关注数据：");
        PrintFriendResult(result);
    }

    public async void OnQueryTDSFollowersClicked() {
        GetCurrentUser();

        QueryParams @params = GetTDSQueryParams();

        FriendResult result = await TDSFollows.QueryFollowerList(@params.Cursor, @params.Limit, @params.Condition);
        LCLogger.Debug("粉丝数据：");
        PrintFriendResult(result);
    }

    public async void OnQueryTDSMutualsClicked() {
        GetCurrentUser();

        QueryParams @params = GetTDSQueryParams();
        FriendResult result = await TDSFollows.QueryMutualList(@params.Cursor, @params.Limit, @params.Condition);
        LCLogger.Debug("互关数据：");
        PrintFriendResult(result);
    }

    #endregion

    #region Tap

    public async void OnFollowTapUserClicked() {
        GetCurrentUser();

        string friendId = followIdForTapInput.text;
        if (string.IsNullOrEmpty(friendId)) {
            LCLogger.Error("请输入好友 id");
            return;
        }

        TDSUser friend = TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, friendId) as TDSUser;
        await TDSFollows.FollowTapUser(friend);
        LCLogger.Debug($"关注 tap 好友成功，可在 tap 关注中查看");
    }

    public async void OnFollowTapUserByCodeClicked() {
        string code = GetShortCode();
        await TDSFollows.FollowTapUserByShortCode(code);
        LCLogger.Debug($"关注 tap 好友成功，可在 tap 关注中查看");
    }

    public async void OnUnfollowTapUserClicked() {
        GetCurrentUser();

        string friendId = followIdForTapInput.text;
        if (string.IsNullOrEmpty(friendId)) {
            LCLogger.Error("请输入好友 id");
            return;
        }

        TDSUser friend = TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, friendId) as TDSUser;
        await TDSFollows.UnfollowTapUser(friend);
        LCLogger.Debug($"取关 tap 好友成功，可在 tap 关注中查看");
    }

    public async void OnUnfollowTapUserByCodeClicked() {
        string code = GetShortCode();
        await TDSFollows.UnfollowTapUserByShortCode(code);
        LCLogger.Debug($"取关 tap 好友成功，可在 tap 关注中查看");
    }

    public async void OnBlockTapUserClicked() {
        GetCurrentUser();

        string blockId = blockIdForTapInput.text;
        if (string.IsNullOrEmpty(blockId)) {
            LCLogger.Error("请输入用户 id");
            return;
        }

        TDSUser block = TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, blockId) as TDSUser;
        await TDSFollows.BlockTapUser(block);
        LCLogger.Debug($"拉黑 tap 用户成功");
    }

    public async void OnBlockTapUserByCodeClicked() {
        string code = GetShortCode();
        await TDSFollows.BlockTapUserByShortCode(code);
        LCLogger.Debug($"拉黑 tap 用户成功");
    }

    public async void OnUnblockTapUserClicked() {
        GetCurrentUser();

        string blockId = blockIdForTapInput.text;
        if (string.IsNullOrEmpty(blockId)) {
            LCLogger.Error("请输入用户 id");
            return;
        }

        TDSUser block = TDSUser.CreateWithoutData(TDSUser.CLASS_NAME, blockId) as TDSUser;
        await TDSFollows.UnblockTapUser(block);
        LCLogger.Debug($"取消拉黑 tap 用户成功");
    }

    public async void OnUnblockTapUserByCodeClicked() {
        string code = GetShortCode();
        await TDSFollows.UnblockTapUserByShortCode(code);
        LCLogger.Debug($"取消拉黑 tap 用户成功");
    }

    public async void OnQueryTapFolloweesClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyFolloweeList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.OnlyNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapFolloweesFromCacheClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyFolloweeList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapFollowersClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyFollowerList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.OnlyNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapFollowersFromCacheClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyFollowerList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapMutualsClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyMutualList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.OnlyNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapMutualsFromCacheClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyMutualList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapBlackClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyBlockList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.OnlyNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    public async void OnQueryTapBlackFromCacheClicked() {
        GetCurrentUser();

        QueryParams @params = GetTapFollowQueryParams();
        ThirdPartyFriendResult result = await TDSFollows.QueryThirdPartyBlockList(TAPTAP,
            @params.Cursor, @params.Limit,
            ThirdPartyFriendRequestCachePolicy.CacheElseNetwork,
            @params.Condition);
        PrintThirdPartyResult(result);
    }

    #endregion

    private QueryParams GetTDSQueryParams() {
        QueryParams @params = new QueryParams {
            Cursor = queryTokenForTDSInput.text?.Length > 0 ? queryTokenForTDSInput.text : null,
            Condition = OnlineSortForTDSToggle.isOn ? TDSFriends.SortCondition.OnlineCondition : null
        };
        int.TryParse(queryLimitForTDSInput.text, out int limit);
        limit = limit <= 0 ? 100 : limit;
        @params.Limit = limit;
        return @params;
    }

    private QueryParams GetTapFollowQueryParams() {
        QueryParams @params = new QueryParams {
            Cursor = queryTokenForTapInput.text?.Length > 0 ? queryTokenForTapInput.text : null,
            Condition = OnlineSortForTapToggle.isOn ? TDSFriends.SortCondition.OnlineCondition : null
        };
        int.TryParse(queryLimitForTapInput.text, out int limit);
        limit = limit <= 0 ? 100 : limit;
        @params.Limit = limit;
        return @params;
    }

    private TDSUser GetCurrentUser() {
        if (currentUser == null) {
            throw new Exception("请先登录");
        }
        return currentUser;
    }

    private string GetShortCode() {
        string code = userCodeForFollowInput.text;
        if (string.IsNullOrEmpty(code)) {
            throw new Exception("请输入 TDSUser Code");
        }
        return code;
    }

    private void PrintFriendResult(FriendResult result) {
        if (result == null) {
            return;
        }

        LCLogger.Debug($"数量：{result.FriendList?.Count}");
        foreach (TDSFriendInfo friendInfo in result.FriendList) {
            LCLogger.Debug($"{friendInfo.User.ObjectId} online: {friendInfo.Online}");
        }
        LCLogger.Debug($"下个游标：{result.Cursor}");
    }

    private void PrintThirdPartyResult(ThirdPartyFriendResult result) {
        if (result == null) {
            return;
        }

        LCLogger.Debug($"数量：{result.FriendList?.Count}");
        foreach (ThirdPartyFriend friend in result.FriendList) {
            LCLogger.Debug($"Third Party: {friend.Id}, {friend.Name}, {friend.Avatar}");
            LCLogger.Debug($"{friend.FriendInfo.User.ObjectId} online: {friend.FriendInfo.Online}");
        }
        LCLogger.Debug($"下个游标：{result.Cursor}");
    }
}
