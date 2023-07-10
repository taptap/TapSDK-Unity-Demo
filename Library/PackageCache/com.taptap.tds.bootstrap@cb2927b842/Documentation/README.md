# 使用 TapTap.Bootstrap

## 使用前提

使用 TapTap.Bootstrap 前提是必须依赖以下库:
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)
* [TapTap.Login](https://github.com/TapTap/TapLogin-Unity.git)
* [LeanCloud.Storage](https://github.com/leancloud/csharp-sdk)
* [LeanCloud.RealTime](https://github.com/leancloud/csharp-sdk)

## 命名空间

```c#
using TapTap.Bootstrap;
```

## 接口描述

## 1.初始化

TapBootstrap 会根据 TapConfig 中的 TapDBConfig 配置来进行 TapDB 的自动初始化。

### 开启 TapDB
```c#
var config = new TapConfig.Builder()
    .ClientID("client_id")
    .ClientToken("client_token")
    .ServerURL("https://ikggdre2.lc-cn-n1-shared.com")
    .RegionType(RegionType.CN)
    .TapDBConfig(true,"channel","gameVersion",true)
    .Builder();
```
### 关闭 TapDB
```c#
var config = new TapConfig.Builder()
    .ClientID("client_id")
    .ClientToken("client_token")
    .ServerURL("https://ikggdre2.lc-cn-n1-shared.com")
    .RegionType(RegionType.CN)
//# .TapDBConfig(false,null,null,false)
    .EnableTapDB(false)
    .Builder();
```
### 初始化
```c#
TapBootstrap.Init(config);
```

## 2.账户系统

> 登陆成功之后，都会得到一个 `TDSUser` 实例

### 使用 TapTap OAuth 授权结果直接登陆/注册账户系统

```c#
var tdsUser = await TDSUser.LoginWithTapTap();
```

### 游客登陆

```c#
var tdsUser = await TDSUser.LoginAnonymously();
```

### 使用第三方平台授权登录/注册账户

```c#
var tdsUser = await TDSUser.LoginWithAuthData(Dictionary<string, object> authData, string platform,
LCUserAuthDataLoginOption option = null);
```

### 绑定第三方平台授权

```c#
await TDSUser.AssociateAuthData(Dictionary<string, object> authData, string platform);
```

### 退出登陆

```c#
TDSUser.Logout();
```

## 3.好友系统

### 申请成为好友

```c#
TDSUser tom, jerry;
await tom.ApplyFriendship(jerry);
```
申请成功的回调中，我们会得到一个 LCFriendshipRequest 的实例，这个实例中包含了两个用户：
- sourceUser，指请求的发起方，上面的例子中就是 `tom`。
- friend，指请求的目的方，上面的例子中就是 `jerry`。

tom 也可以在申请好友的时候，添加更多的属性，例如 tom 希望加 jerry 为好友的时候，也设定一个名为 cat 的圈子，可以这样操作：

```cs
Dictionary<string, object> attrs = new Dictionary<string, object> {
    { "group", "cat" }
};
await tom.ApplyFriendship(jerry, attrs);
```

### 获取好友申请列表
好友申请有三种状态：

- `pending`，对方没有回应，还处于等待中。
- `accepted`，对方已经接受，现在双方成为好友。
- `declined`，对方已经拒绝。

好友请求创建之后默认是 `pending` 状态。

jerry 这里可以通过 `friendshipRequestQuery` 来查找不同状态的请求。例如 jerry 想看看新的好友请求，可以这样操作：

```cs
LCQuery<LCFriendshipRequest> query = jerry.GetFriendshipRequestQuery(LCFriendshipRequest.STATUS_PENDING, false, true);
ReadOnlyCollection<LCFriendshipRequest> reqs = await query.Find();
foreach (LCFriendshipRequest req in reqs) {
    Console.WriteLine(req);
}
```

### 处理好友申请

jerry 对于新的好友请求，可以同意或者拒绝，也可以什么都不做，无视这些请求，甚至直接删除。这些操作我们都是支持的，请看下面的示例：

```cs
LCFriendshipRequest tomRequest, tuffyRequest, otherRequest;
await jerry.AcceptFriendshipRequest(tomRequest);
await jerry.DeclineFriendshipRequest(tuffyRequest);
await jerry.DeleteFriendshipRequest(otherRequest);
```

注意：
* 在 jerry 拒绝了 tom 的好友请求之后，如果 tom 再次请求成为 jerry 的好友，tom 在执行 applyFriendshipInBackground 时会直接得到错误的应答，表明 jerry 不想和 ta 成为好友。
* jerry 同意了 tuffy 的好友请求之后，它们就成为了好友，之后两个人中任何一人再次调用 applyFriendshipInBackground 申请横位好友时，也会直接得到错误的应答，表明它们已经是好友无需再次申请。
* jerry 删除陌生人的好友请求后，对方还可以再次发起请求。

### 响应好友变化通知

TDS 好友模块支持客户端监听好友状态变化，在游戏中实时给玩家提示。好友状态变化的接口包括

```cs
public class FriendshipNotification {
    public Action<LCFriendshipRequest> OnNewRequestComing { get; set; }
    public Action<LCFriendshipRequest> OnRequestAccepted { get; set; }
    public Action<LCFriendshipRequest> OnRequestDeclined { get; set; }
}
```

其中：
- onNewRequestComing 表示有其他人申请成为当前用户的好友，通过调用 `LCFriendshipRequest#getSourceUser()` 方法可以获得发起方用户信息。
- onRequestAccepted 表示当前用户的好友申请被对方通过，通过调用 `LCFriendshipRequest#getFriend()` 方法可以获得对方用户信息。
- onRequestDeclined 表示当前用户的好友申请被对方拒绝，通过调用 `LCFriendshipRequest#getFriend()` 方法可以获得对方用户信息。

开发者可以通过 `TDSUser#registerFriendshipNotification` 来注册通知接收器，通过调用 `TDSUser#unregisterFriendshipNotification` 来取消通知接收器。

### 获取好友列表

调用 `TDSUser#friendshipQuery()` 可以得到查询好友的 `LCQuery` 实例，之后调用 `LCQuery#findInBackground()` 方法就可以得到好友列表。示例如下：

```cs
LCQuery<LCObject> query = jerry.GetFirendshipQuery();
```

LCFriendship 里面会包含两个用户：

- `LCFriendship#getLCUser(LCFriendship.ATTR_USER)` 得到的是 jerry 自己；
- `LCFriendship#getLCUser(LCFriendship.ATTR_FOLLOWEE)` 得到的就是另一方的用户信息。

### 删除好友

成为好友关系的两个用户，之后也可以单方面删除好友。例如 jerry 不想再和 tom 成为好友，那只需要在自己的好友列表中删除包含 tom 的那条 LCFriendship 记录即可：

```cs
await friendship.Delete();
```

### 查询好友关系

我们使用 LCQuery 可以单独查询两个用户是否为好友关系。

```cs
LCQuery<LCObject> query = jerry.GetFirendshipQuery();
query.whereEqualTo("followee", tom);
int count = await query.Count();
if (count > 0) {
    // tom is a friend of jerry.
} else {
    // tom isn't a friend of jerry.
}
```

这一查询是通过网络发送到服务端执行的，一般情况下，我们推荐开发者在游戏启动时拉取一次当前登录用户的好友列表，然后缓存在本地，以后需要检查另外玩家是否为当前用户的好友时，直接从缓存中查询即可。如果担心好友数据变化，缓存没有得到及时更新，可以调用前面「响应好友变化通知」的方法，对好友数据更新进行监听，这样在绝大部分时候数据同步都是可以保证的。

## 4.云存档

### 构建云存档元数据

```c#
var gameSave = new TapGameSave
{
    Name = "GameSave_Name",// 存档名称
    Summary = "GameSave_Description", // 该字段会作为展示给用户的实际存档名
    ModifiedAt = DateTime.Now.ToLocalTime(), // 原文件修改时间
    PlayedTime = 1000L, // 游戏时长，单位 ms (非必填)
    ProgressValue = 100, // 游戏进度 ，单位 int (非必填)
    CoverFilePath = pic, // 游戏封面，可以传入一个本地文件路径，SDK 限制为 png/jpeg 格式
    GameFilePath = dll // 存档源文件，可以传入一个本地文件路径
};

```
### 保存存档

保存存档时，会去检查当前`TDSUser`是否已经登录以及元数据。

同时 SDK 在上传时会去限制存档本身以及相关联的两个文件（ Cover 以及 GameFile ）的权限为当前用户本身。
```c#
await gameSave.Save();
```

### 查询当前用户的所有存档

```c#
var collection = await TapGameSave.GetCurrentUserGameSaves();

foreach(var gameSave in collection){
    // 存档概览
    var name = gameSave.Summary; 
    // 原文件修改时间
    var modifiedAt = gameSave.ModifiedAt;
    // 游戏时长
    var playedTime = gameSave.PlayedTime;
    // 游戏进度
    var progressValue = gameSave.ProgressValue;
    // 游戏封面
    var coverFile = gameSave.CoverFile;
    // 存档源文件
    var gameFile = gameSave.GameFile;
    // 源文件下载地址
    var gameFileUrl = gameFile.Url;
}
```

### 查询当前用户存档

我们使用 `LCQuery` 来查询当前用户的云存档。

SDK 查询封装了一个限定方法用于查询当前`TDSUser`的云存档。
```c#
TDSUser user = await TDSUser.GetCurrent();
LCQuery<TapGameSave> gameSaveQuery = TapGameSave.GetQueryWithUser(user);
// 查询 Name 为 TDSUser_GameSave_Name 的云存档
gameSaveQuery.WhereEqualTo("name","TDSUser_GameSave_Name");
var collection = await gameSaveQuery.Find();
```