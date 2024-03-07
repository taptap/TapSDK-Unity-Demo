# TapTap Android Dependency Resolver

## 目的

各个 SDK 模块在打 Android  包的时候，可能需要做一些 Android 定制化的内容，比如增加 Gradle 打包时的Android Dependencies，
或者修改 Gradle 工程里的 Properties 文件配置，之前的做法往往是打完包之后，直接修改 Unity 导出后的 Gradle 工程，
Unity Android Dependency Resolver 是通过字符串匹配来修改 Unity 的 [Android Gradle Template](https://docs.unity3d.com/Manual/gradle-templates.html)，
来达到修改 Gradle 工程的目的，比如利用 Unity 的 Android Gradle Template 中的 Placeholder 能快速定位到需要修改的地方，
达到修改目的。

## 使用方法

### 1. 安装

用 upm 导入需要在 Unity 工程的 Packages/manifest.json 文件中添加
"com.tapsdk.androiddependencyresolver": "https://github.com/luckisnow/android_dependency_resolver.git#1.1.1"

**推荐**用 npm 导入需要在 Unity 工程的 Packages/manifest.json 文件中添加

"com.tapsdk.androiddependencyresolver": "1.1.1"

还需要注册对应的 NPM 路径

```json
"scopedRegistries":
[  
  {    
    "name": "TapSDK",    
    "url": "https://nexus.tapsvc.com/repository/npm-registry/",    
    "scopes":
    [      
      "com.tapsdk",      
      "com.taptap",      
      "com.leancloud"    
    ]  
  }
]
```

### 2. 使用方式

 1. Unity Android Dependency Resolver 会在 Build Android 包或者 Export Gradle 工程的时候， 收集 Assets 文件夹以及 Package 文件夹下所有的 TapAndroidProvider.txt 文件，TapAndroidProvider.txt 负责配置 Android Gradle Template 的修改内容。

 2. 升级到 1.1.0 版本后，建议涉及到 Android Dependencies 修改用 Dependencies.xml 的方式添加，具体做法：在任意 Editor 下增加名为 XXXDependencies.xml 的文件，来列举需要添加的 dependencies。xml 格式要求：
    ```xml
    <dependencies>
      <androidPackages>
        <!-- 列举需要的Deps -->
        <androidPackage spec="com.google.android.gms:play-services-games1:9.8.0">
        <androidPackage spec="com.google.android.gms:play-services-games2:9.8.0">
        </androidPackage>
      </androidPackages>
    </dependencies>
    ```
    
    1. 如何配置 TapAndroidProvider.txt，我们具体举一个例子，并说明各个字段的意义:
   
         ```json
         {
           "Version": 1, // 当前配置版本，需要配置为 1，用来表示整体数据结构的版本，目前 Unity Android Dependency Resolver 仅能解析版本为 1 的数据
           "Use": true,  // 当前配置是否会被使用
           "Priority": 2,  // 在打包时，修改 Gradle 模板的顺序，目前只有 XDSDK 使用了 10 以内的数字
           "ModuleName": "XD.Common", // 修改 Gradle 模板模块的名字
           // 下面数组是用来表示所有需要修改 Gradle 模板的地方
           // 数组中的每个元素，会标明修改哪个具体的 Gradle 模板，这个 Gradle 模板中的具体位置，以及修改内容
           "AndroidGradleContext": [
             {
               // 修改位置（需要配合locationParam使用）
               // 1 - 根据 Unity Gradle 模板 Placeholder 进行修改，需要在 locationParam 字段中写清 Placeholder
               // 2 - Custom 自定义的匹配内容，有时候 Unity Gradle 模板中的 Placeholder 无法定位我们需要的修改内容，可以用 Custom 匹配模式
               // Custom 匹配支持正则匹配，同时如果匹配内容后，会把 locationParam 中的内容修改到定位的地方
               // 3 - 在末尾添加新的内容，适合修改 gradleTemplate.properties 这种内容，可以直接在模块插入新的属性
               // 4 - 在开头插入新的内容
               "locationType": 1,
               "unityVersionCompatibleType": 1,  // 本次修针对 Unity 哪个版本：0 - 任意版本；1 - Unity 2019 以上；2 - Unity 2019 以下
               // 修改哪个 Gradle 模板
               // 1- AndroidManifest.xml;2 - LauncherManifest.xml(Unity 2019版本之上才有，之前版本等于 AndroidManifest.xml);
               // 3 - mainTemplate.gradle;4 - launcherTemplate.gradle(Unity 2019版本之上才有，之前版本等于 mainTemplate.gradle)
               // 5 - baseProjectTemplate.gradle (Unity 2019版本之上才有，之前版本等于 mainTemplate.gradle)
               // 6 - gradleTemplate.properties
               "templateType": 6,
               // 修改方式，在根据 locationType 和 locationParam 定位到具体的修改位置后，需要如何修改：
               // 1 - 在定位的位置后面插入locationParam的内容；
               // 2 - 把locationParam的内容替换进来;
               // 3 - 在定位的位置前面插入locationParam的内容；
               "processType": 1,
               // 辅助定位的具体参数
               "locationParam": "ADDITIONAL_PROPERTIES",
               // 修改的具体内容，数组形式，比如这里会在 gradleTemplate.properties 的 ADDITIONAL_PROPERTIES 关键字后面添加这些内容，来达到修改 Android 工程属性的目的
               "processContent": [
                 "android.useAndroidX=true",
                 "android.enableJetifier=true"
               ]
             },
             // 修改 DEPS 的例子
             {
               "locationType": 1,
               "unityVersionCompatibleType": 0,
               "templateType": 3,
               "processType": 1,
               "locationParam": "DEPS",
               "processContent": [
                 "    implementation 'androidx.recyclerview:recyclerview:1.2.1'",
                 "    implementation 'com.google.code.gson:gson:2.8.6'",
                 "    implementation 'org.jetbrains.kotlin:kotlin-stdlib:1.5.10'",
                 "    implementation 'androidx.appcompat:appcompat:1.3.1'",
                 "    implementation \"com.squareup.retrofit2:retrofit:2.9.0\"",
                 "    implementation \"com.squareup.retrofit2:adapter-rxjava2:2.9.0\"",
                 "    implementation \"io.reactivex.rxjava2:rxandroid:2.1.1\"",
                 "    implementation \"com.squareup.okhttp3:okhttp:4.7.2\"",
                 "    implementation \"com.squareup.okio:okio:2.6.0\""
               ]
             },
             // 这里会替换到之前的 Unity 内置 Gradle 版本，更新到 4.0.1 版本
             {
               "locationType": 2,
               "unityVersionCompatibleType": 0,
               "templateType": 5,
               "processType": 2,
               "locationParam": "classpath 'com.android.tools.build:gradle:3.\\d{1}.\\d{1}'",
               "processContent": [
                 "classpath 'com.android.tools.build:gradle:4.0.1'"
               ]
             },
             {
               "locationType": 2,
               "unityVersionCompatibleType": 0,
               "templateType": 5,
               "processType": 2,
               "locationParam": "classpath 'com.android.tools.build:gradle:4.0.0'",
               "processContent": [
                 "classpath 'com.android.tools.build:gradle:4.0.1'"
               ]
             }
           ]
         }
         ```
 3. 涉及到 Android Dependencies 的修改可以 1.1.0 版本后可以使用 XXXDependencies.xml 来修改，也可以使用之前的 TapAndroidProvider.txt 方式修改，无论哪种方式，Unity Android Dependency Resolver 会自动与已经存在的 mainTemplate.gradle 合并，并优先使用更高版本的 Android 依赖库
 4. 配置好 TapAndroidProvider.txt ，在打包或者 Export 工程之后，可以在 Unity 工程的 Plugins/Android 文件夹下面看到修改的 Unity Gradle Template 文件内容。
 5. 所有 Editor 文件夹下的 XXXDependencies.xml 都会出包时或者菜单栏 _TapTap/AndroidDependencyResolver/Resolve_ / *TapTap/AndroidDependencyResolver/Force Resolve* 汇总在 *Assets/TapTap/Gen/Editor/* 下生成 _TapTapADRDependencies.xml_ 文件，Unity Android Dependency Resolver 会使用这个文件去修改 Unity 的 [Android Gradle Template](https://docs.unity3d.com/Manual/gradle-templates.html)，来达到修改 Gradle 工程的目的。

## 1.1.0 版本升级

### EDM4U 说明

EDM4U 是 Google 开发了提高 Unity SDK 交付保证的插件，被很多国外 Unity SDK 采用（比如 Facebook，appsflyer，Firebase等等）。主要包括这么几个功能：1）Android Dependencies Management；2）iOS Dependency Management；3）Package Manager Registry Setup；4）Unity Plugin Version Management。和 Unity Android Dependency Resolver 比较重合的是 Android Dependencies Management 这个功能。

EDM4U，[要求](https://github.com/googlesamples/unity-jar-resolver#android-resolver-usage)提供一份放置在 Editor 文件夹下的名为 XXXDependencies.xml 的文件，用来描述需要依赖哪些 Android dependencies。之后会进行 Resolve 的过程，Resolve 会根据是否有打开自定义 mainTemplate.gradle 文件进行不同的操作，如果打开了的话，会写入相关 dependencies 到 mainTemplate.gradle 文件中，这是 EDM4U 比较推荐的方式，如果没有打开的话，会直接下载相关 dependencies 到 Plugin/Android 中。

为了适配 EDM4U，Unity Android Dependency Resolver 对 dependencies 依赖包逻辑做了相关优化。

* 1.1.0 之前是使用 TapAndroidProvider.txt 来做，具体逻辑是根据 DEPS 关键字定位，然后加入 processContent 中的内容。
* 1.1.0 版本升级后的逻辑是收集所有 TapAndroidProvider 中 DEPS 内容以及所有 Editor 文件夹下的 XXXDependencies.xml 文件，然后根据这些内容生成 EDM4U 需要的格式（生成 TapTap/Gen/Editor/TapTapADRDependencies.xml 文件)，利用 EDM4U 去解决 dependencies，这里并不会强制要求用户安装 EDM4U 插件，如果没有的话，Unity Android Dependency Resolver 也能读取符合 EDM4U 格式的 ***Dependencies.xml 文件

