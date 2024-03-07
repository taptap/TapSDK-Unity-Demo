# 使用 TapTap.Achievement

## 使用前提

使用 TapTap.Achievement 前提是必须依赖以下库:
* [TapTap.Bootstrap](https://github.com/TapTap/TapBootstrap-Unity.git)

## 命名空间

```c#
using TapTap.Achievement;
```

## 接口描述

### 1.注册监听回调

```c#
TapAchievement.RegisterCallback(IAchievementCallback callback);

private class AchievementCallback:IAchievementCallback{

    public void OnAchievementSDKInitSuccess()
    {
        //成就SDK 初始化成功
    }

    public void OnAchievementSDKInitFail(TapError errorCode)
    {
        if (errorCode != null)
        {
            //初始化失败
        }
    }

    public void OnAchievementStatusUpdate(TapAchievementBean bean, TapError errorCode)
    {
        if (errorCode != null)
        {
            // 成就状态更新失败
            return;
        }

        if (bean != null)
        {
            // 成就状态更新更新
        }
    }

}

```

### 2.初始化数据

由于成就系统会在本地记录用户的成就数据，所以请在用户登录后初始化数据。
这个步骤是异步操作，需要确认收到成功回调时才能进行更多操作。

```c#
TapAchievement.InitData();
```

### 3.获取全部成就

获取全部成就数据分为服务器数据以及本地数据。

```c#
// 获取本地数据
TapAchievement.GetLocalAllAchievementList((list, code) =>
{
     if (code != null)
     {
        // 获取成就数据失败
     }
     else
     {
        // 获取成就数据成功
     });
}
// 获取服务器数据
TapAchievement.FetchAllAchievementList((list, code) =>
{
     if (code != null)
     {
        // 获取成就数据失败
     }
     else
     {
        // 获取成就数据成功
     });
}
```

### 4.获取用户成就
```c#
// 获取本地数据
TapAchievement.GetLocalUserAchievementList((list, code) =>
{
     if (code != null)
     {
        // 获取成就数据失败
     }
     else
     {
        // 获取成就数据成功
     });
}
// 获取服务器数据
TapAchievement.FetchUserAchievementList((list, code) =>
{
     if (code != null)
     {
        // 获取成就数据失败
     }
     else
     {
        // 获取成就数据成功
     });
}
```
### 5.达成某个成就
```c#
// displayID 为 DC 中添加成就时自行设定的 成就ID
TapAchievement.Reach(reachId);
```

### 6.多步长成就增长步数

成就增长步数提供两种方式调用，growSteps 中传递当前增量达成的步数（例如：多走了5步，则传递5即可），makeSteps 中传递当前成就已达成的步数，(例如：当前已经走了100步，则传递100)，调用 growSteps 时 SDK 内部会计算当前全量步数。

```c#
TapAchievement.GrowSteps(reachId, step);
TapAchievement.MakeSteps(reachId, step);
```

### 7.设置冒泡开关

```c#
TapAchievement.SetShowToast(bool isShow);
```

### 8.显示成就界面
```c#
TapAchievement.ShowAchievementPage();
```

### 9.成就相关数据解读

```c#
public string id;// 成就 id
public string displayId;// id 
public int visible = VisibleFalse;//是否是隐藏成就
public string title;//标题
public string subTitle;//副标题
public string achieveIcon;// 图标
public int step;//设定步数
public bool fullReached;//是否达成
public int reachedStep;//达成步数
public long reachedTime;//达成时间
public AchievmentStats stats;//当前成就稀有度指标
```