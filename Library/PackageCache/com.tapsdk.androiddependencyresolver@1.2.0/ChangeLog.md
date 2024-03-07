# ChangeLog
## 1.1.6 (2023 年 07 月 06 日)
### Bugfix

- 修复导出 Android 工程时相关 Android 依赖不能被正确添加的问题
  
## 1.1.5 (2023 年 07 月 06 日)
### Improvements

- 新增 localtionType = 4: 首行插入功能
- 新增 processType = 3: 前向插入,之前常用的插入为 processType = 1,会在匹配到内容后,在后面新插入相应的内容,而 processType = 3,则会在匹配到内容后,在前面插入相应的内容

## 1.1.4 (2023 年 07 月 05 日)
### Bugfix

- 修复当 Android Dependencies 为空时,不能正确清楚之前添加的 Android Dependencies 中的内容.

## 1.1.3 (2023 年 07 月 04 日)
### Bugfix

- 修复不能正确读取新生成的 TapTap/Gen/Editor/TapTapADRDependencies.xml 文件的问题。
  
## 1.1.2 (2023 年 07 月 03 日)
### Improvements

- 新增公共接口：TapTap.AndroidDependencyResolver.Editor.AndroidUitls.Resolve，用来更新 Unity Android 打包自定义配置

## 1.1.1 (2023 年 07 月 03 日)
### Improvements

- 优化 Android Dependencies 插入位置：从 \*\*DEPS\*\* 后一行，变为 \*\*DEPS\*\* 前一行
  
## 1.1.0 (2023 年 06 月 30 日)
### New Feature

- 优化 Android Dependecies 收集逻辑：收集所有 TapAndroidProvider 中 DEPS 内容以及所有 Editor 文件夹下的 XXXDependencies.xml 文件，然后根据这些内容生成 TapTap/Gen/Editor/TapTapADRDependencies.xml 文件，利用这个文件去修改 mainTemplate.gradle
- 新增菜单栏：TapTap/AndroidDependencyResolver/Resolve / TapTap/AndroidDependencyResolver/Force Resolve 用来提前更新 Unity Android 打包自定义配置
  
## 1.0.0 (2023 年 01 月)
#### Feature
- 支持 Unity Android 打包自定义配置 Gradle 依赖

#### TapSDK Dependencies
- LeanCloud: _**0.10.12**_

#### Feature

