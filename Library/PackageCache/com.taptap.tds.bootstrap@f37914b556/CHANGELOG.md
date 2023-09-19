# ChangeLog
## 3.11.1
- TapTap.Login v3.11.1
- TapTap.Common v3.11.1
- LeanCloud.Realtime v0.10.11
- LeanCloud.Storage v0.10.11

## 3.11.0

### Dependencies

- TapTap.Login v3.11.0
- TapTap.Common v3.11.0
- LeanCloud.Realtime v0.10.11
- LeanCloud.Storage v0.10.11

## 3.10.0

### New Feature
- 支持排行榜

### Dependencies

- TapTap.Login v3.10.0
- TapTap.Common v3.10.0
- LeanCloud.Realtime v0.10.11
- LeanCloud.Storage v0.10.11

## 3.9.0

### Dependencies

- TapTap.Login v3.9.0
- TapTap.Common v3.9.0
- LeanCloud.Realtime v0.10.11
- LeanCloud.Storage v0.10.11

## 3.8.0

### Dependencies

- TapTap.Login v3.8.0
- TapTap.Common v3.8.0
- LeanCloud.Realtime v0.10.10
- LeanCloud.Storage v0.10.10

## 3.7.1

### Dependencies

- TapTap.Login v3.7.1
- TapTap.Common v3.7.1
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.7.0

### Dependencies

- TapTap.Login v3.7.0
- TapTap.Common v3.7.0
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0


## 3.6.3

### Dependencies

- TapTap.Login v3.6.3
- TapTap.Common v3.6.3
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.6.1

### Dependencies

- TapTap.Login v3.6.1
- TapTap.Common v3.6.1
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.6.0

### Dependencies

- TapTap.Login v3.6.0
- TapTap.Common v3.6.0
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.5.0

### Dependencies

- TapTap.Login v3.5.0
- TapTap.Common v3.5.0
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.4.0

### Dependencies

- TapTap.Login v3.4.0
- TapTap.Common v3.4.0
- LeanCloud.Realtime v0.10.0
- LeanCloud.Storage v0.10.0

## 3.3.0

### Dependencies

- TapTap.Login v3.3.0
- TapTap.Common v3.3.0
- LeanCloud.Realtime v0.9.11
- LeanCloud.Storage v0.9.11

## 3.2.0

### New Feature

- 支持云存档

### Dependencies

- TapTap.Login v3.2.0
- TapTap.Common v3.2.0
- LeanCloud.Storage v0.9.5
- LeanCloud.Realtime v0.9.5

## 3.1.0

### New Feature

- `TDSUser` 新增好友系统操作

### Dependencies

- TapTap.Login v3.1.0
- TapTap.Common v3.1.0
- LeanCloud.Storage v0.9.2
- LeanCloud.Realtime v0.9.2

## 3.0.0

TapSDK 3.0 开始，我们在单纯的 TapTap 登录之外，还提供了一个内建账户系统供游戏使用：开发者可以直接用 TapTap OAuth
授权的结果生成一个游戏内的账号（TDSUser），然后用该账号保存更多玩家数据。同时，我们也支持将更多第三方认证登录的结果绑定到这一账号上来（以及后续的解绑操作）。

### New Feature

- 新增 `TDSUser` 用于内建账户系统操作

### BreakingChange

- `TapBootstrap` 接口仅保留 `TapBootstrap.Init(tapConfig)` 接口

### Dependencies

- LeanCloud.Storage v0.8.2
- TapTap.Login v3.0.0
- TapTap.Common v3.0.0

## 2.1.7

### Dependencies

- TapTap.Common v2.1.7

## 2.1.6

### Dependencies

- TapTap.Common v2.1.6

## 2.1.5

### Dependencies

- TapTap.Common v2.1.5

## 2.1.4

### Optimization and fixed bugs

- 优化多语言相关

### Dependencies

- TapTap.Common v2.1.4

## 2.1.3

### Feature

* 新增繁中、日文、韩文、泰文和印尼语多语言配置

## 2.1.2

### BreakingChange

* 废弃 OpenUserCenter 接口

### Dependencies

* TapTap.Common v2.1.2

## 2.1.1

### Feature

* 新增篝火测试资格校验
    ```
  TapBootstrap.GetTestQualification((bool, error)=>{ }):
    ```
* 通过 TapConfig 进行初始化配置
    * 新增 TapDBConfig 用于 TapDB 初始化配置
    * 新增 ClientSecret 用于 TapSDK 初始化
  ```c#
  //建议使用以下 TapConfig 构造方法进行初始化
  var config = new TapConfig.Builder()
                .ClientID("client_id")
                .ClientSecret("client_secret")
                .RegionType(RegionType.CN)
                .TapDBConfig(true, "gameChannel", "gameVersion", true)
                .ConfigBuilder();
  TapBootstrap.Init(config);
  ```

### Breaking changes

* LoginType 删除 Apple、Guest 登陆方式
* TDS-Info.plist 删除 Apple_SignIn_Enable 配置
* 废弃 Bind 接口
* TapConfig 构造方法参数修改

### Dependencies

* TapTap.Common v2.1.1

## 2.1.0

### Feature

* 支持性改动用于 TapTap.Friends

### Dependencies

* TapTap.Common v2.1.0

## 2.0.0

### Feature

* TapTap Bootstrap

### Dependencies

* TapTap.Common v2.0.0