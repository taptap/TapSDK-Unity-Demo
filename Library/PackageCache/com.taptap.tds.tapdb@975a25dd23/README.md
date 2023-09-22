## [TapTap.TapDB](./Documentation/README.md)

## 使用前提

使用 TapTap.TapDB 前提是必须依赖以下库:
* [TapTap.Common](https://github.com/TapTap/TapCommon-Unity.git)

## 命名空间

```c#
using TapTap.TapDB;
```

## 接口描述

### 初始化
```c#
TapDB.Init(string clientId, string channel, string gameVersion, bool isCN);
```

### 设置用户

```c#
TapDB.SetUser(string userId);

TapDB.SetUser(string userId,string openId,string loginType);
```

### 设置姓名

```c#
TapDB.SetName(string name);
```

### 设置玩家等级

```c#
TapDB.SetLevel(int level);
```

### 设置服务器

```c#
TapDB.SetServer(string server);
```

### 充值成功

```c#
TapDB.OnCharge(string orderId, string productId, long amount, string currencyType, string payment);
```

### 自定义事件

```c#
TapDB.TrackEvent(string eventName,string jsonProperties);
```

### 注册静态事件

```c#
TapDB.RegisterStaticProperties(string jsonProperties);
```

### 取消静态事件

```c#
TapDB.UnregisterStaticProperty(string propertKey);
```

### 清除静态事件

```c#
TapDB.ClearStaticProperties();
```

### 注册动态事件
```c#
TapDB.RegisterDynamicProperties(IDynamicProperties properties);
```

### 设备初始化

```c#
TapDB.DeviceInitialize(string properties);
```

### 设备更新

```c#
TapDB.DeviceUpdate(string properties);
```

### 用户初始化

```c#
TapDB.UserInitialize(string properties);
```

### 用户更新

```c#
TapDB.UserUpdate(string properties);
```

### 添加用户

```c#
TapDB.UserAdd(string properties);
```

### 清除用户

```c#
TapDB.ClearUser();
```

## iOS 独占方法

### 开启 IDFA 

```c#
TapDB.AdvertiserIDCollectionEnabled(bool enable);
```