#if UNITY_EDITOR && UNITY_ANDROID
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml.Linq;
using Regex = System.Text.RegularExpressions.Regex;
using LC.Newtonsoft.Json;

namespace TapTap.AndroidDependencyResolver.Editor
{
    public static class AndroidUtils
    {
        private static string _PluginPath;
        private static string _AndroidEditorModulePath;
        
        private static string _CustomMainManifest;
        private static string _InternalMainManifest;
        private static string _InternalLauncherManifest;
        private static string _CustomLauncherManifest;
        
        private static string _InternalMainGradleTemplate;
        private static string _CustomMainGradleTemplate;
        
        private static string _InternalLauncherGradleTemplate;
        private static string _CustomLauncherGradleTemplate;
        private static string _InternalBaseGradleTemplate;
        private static string _CustomBaseGradleTemplate;
        private static string _InternalGradlePropertiesTemplate;
        private static string _CustomGradlePropertiesTemplate;

        private static Regex _DependenciesRegex = new Regex(@".*Tap.*Dependencies\.xml$"); 
        private const string DEPENDENCIES_MODULE_NAME = "EDU4M_DEPEDENCY";
        private const string DEPENDENCIES_FILE_NAME = "Assets/TapTap/Gen/Editor/TapTapADRDependencies.xml";
        
        /// <summary>
        /// Line that indicates the start of the injected dependencies block in the template.
        /// </summary>
        private const string DependenciesStartLine = "// TapTap Android Resolver Dependencies Start";

        /// <summary>
        /// Line that indicates the end of the injected dependencies block in the template.
        /// </summary>
        private const string DependenciesEndLine = "// TapTap Android Resolver Dependencies End";

        public static void SaveProvider(string path, AndroidGradleContextProvider provider, bool assetDatabaseRefresh = true)
        {
            var serializer = new JsonSerializer();
            serializer.NullValueHandling = NullValueHandling.Include;
            serializer.DefaultValueHandling = DefaultValueHandling.Include;
            using (var sw = new StreamWriter(path))
            using (JsonWriter writer = new JsonTextWriter(sw))
            {
                writer.Formatting = Formatting.Indented;
                serializer.Serialize(writer, provider);
            }
            if (assetDatabaseRefresh) AssetDatabase.Refresh();
        }

        public static void Process()
        {
            var temp = new AndroidGradleProcessor();
            temp.OnPreprocessBuild(null);
        }
        
        public static List<AndroidGradleContextProvider> Load()
        {
            var guids = AssetDatabase.FindAssets("TapAndroidProvider");
            if (guids == null) return null;
            var providers = new List<AndroidGradleContextProvider>();
            foreach (var guid in guids)
            {
                var assetPath = AssetDatabase.GUIDToAssetPath(guid);
                using (var file = File.OpenText(assetPath))
                {
                    try
                    {
                        var serializer = new JsonSerializer();
                        var gradleContextProvider = (AndroidGradleContextProvider)serializer.Deserialize(file, typeof(AndroidGradleContextProvider));
                        if (gradleContextProvider?.AndroidGradleContext == null) continue;
                        for (var index = 0; index < gradleContextProvider.AndroidGradleContext.Count; index++)
                        {
                            var gradleContext = gradleContextProvider.AndroidGradleContext[index];
                            if (gradleContext.processContent != null) gradleContext.processContent.Reverse();
                        }

                        gradleContextProvider.AndroidGradleContext.Reverse();
                        providers.Add(gradleContextProvider);
                    }
                    catch (Exception e)
                    {
                        Debug.LogErrorFormat(string.Format("[TapTap.AGCP] Deserialize AndroidGradleContextProvider Error! Error Msg:\n{0}\nError Stack:\n{1}", e.Message, e.StackTrace));
                    }
                }
            }
            
            return providers;
        }

        private static MethodInfo GetEDM4UResolveMethod()
        {
            Type playServicesResolverType = Type.GetType("GooglePlayServices.PlayServicesResolver, Google.JarResolver");

            if (playServicesResolverType != null)
            {
                // 获取 ExecuteMenuResolve 方法
                MethodInfo executeMenuResolveMethod = playServicesResolverType.GetMethod("Resolve",
                    BindingFlags.Public | BindingFlags.Static);

                if (executeMenuResolveMethod != null)
                {
                    // 检查方法签名是否一致
                    ParameterInfo[] parameters = executeMenuResolveMethod.GetParameters();
                    var validate = executeMenuResolveMethod.IsStatic &&
                                     executeMenuResolveMethod.ReturnType == typeof(void);
                    if (validate)
                        return executeMenuResolveMethod;
                }
            }

            return null;
        }
        
        private static bool HaveEDM4U()
        {
            return GetEDM4UResolveMethod() != null;
        }

        private static bool IsDepsContext(AndroidGradleContext context)
        {
            return context != null && context.locationType == AndroidGradleLocationType.Builtin &&
                   context.locationParam == "DEPS" && context.templateType == CustomTemplateType.UnityMainGradle &&
                   context.processType == AndroidGradleProcessType.Insert;
        }

        private static void GenerateDependencies(List<AndroidGradleContextProvider> providers)
        {
            List<AndroidGradleContext> deps = new List<AndroidGradleContext>();
            foreach (var provider in providers)
            {
                if (provider.AndroidGradleContext == null || provider.AndroidGradleContext.Count <= 0) continue;
                foreach (var androidGradleContext in provider.AndroidGradleContext)
                {
                    if (IsDepsContext(androidGradleContext))
                    {
                        deps.Add(androidGradleContext);
                    }
                }
            }

            var filePath = UnityPath2AbsolutePath(DEPENDENCIES_FILE_NAME);
            // check filePath is exist,if clean it content
            if (File.Exists(filePath))
            {
                File.WriteAllText(filePath, string.Empty);
            }
            else
            {
                var dir = Path.GetDirectoryName(filePath);
                if (!Directory.Exists(dir))
                {
                    Directory.CreateDirectory(dir);
                }
                // create a new file
                File.Create(filePath).Dispose();
            }

            StringBuilder sb = new StringBuilder();
            foreach (var dep in deps)
            {
                foreach (var processContent in dep.processContent)
                {
                    sb.AppendLine(processContent);
                }
            }
            
            ParseDependencies(sb.ToString(), filePath);
            
            AssetDatabase.ImportAsset(DEPENDENCIES_FILE_NAME);
        }
        
        // 将输入的依赖项字符串解析为 XML 文档
        private static void ParseDependencies(string inputText, string outputPath)
        {
            // 解析每一行依赖项
            var androidPackages = inputText.Split('\n')
                .Select(line => line.Trim())
                .Where(line => line.StartsWith("implementation"))
                .Select(line => {
                    string[] parts = line.Split('\'', '\"');
                    // 获取第二段字符串作为 spec
                    string spec = parts[1];
                    return new XElement("androidPackage", new XAttribute("spec", spec));
                });

            // 创建 XML 文档
            XDocument doc = new XDocument(
                new XElement("dependencies",
                    new XElement("androidPackages", androidPackages)
                )
            );

            // 将 XML 文档保存到文件
            doc.Save(outputPath);
        }
        
        private static AndroidGradleContextProvider GetDependencies()
        {
            var dependenciesPath = LoadDependencies();
            List<string> deps = new List<string>();
            foreach (var filename in dependenciesPath) {
                var doc = XDocument.Load(UnityPath2AbsolutePath(filename)); 
                List<string> specs = doc.Descendants("androidPackage")
                    .Attributes("spec")
                    .Select(attr => $"    implementation \"{attr.Value}\"")    
                    .ToList();
                deps.AddRange(specs);
            }
            var provider = new AndroidGradleContextProvider();
            provider.Priority = -1;
            provider.ModuleName = DEPENDENCIES_MODULE_NAME;
            provider.AndroidGradleContext = new List<AndroidGradleContext>();
            provider.AndroidGradleContext.Add(new AndroidGradleContext()
            {
                locationType = AndroidGradleLocationType.Builtin,
                unityVersionCompatibleType = UnityVersionCompatibleType.EveryVersion,
                templateType = CustomTemplateType.UnityMainGradle,
                processType = AndroidGradleProcessType.Insert,
                locationParam = "DEPS",
                processContent = deps,
            });
            return provider;
        }
        
        private static string UnityPath2AbsolutePath(string unityPath)
        {
            if (string.IsNullOrEmpty(unityPath)) return "";
            // convert relative path to absolute path
            return Application.dataPath.Replace("Assets", unityPath);
        }

        private static string[] LoadDependencies()
        {
            var guids = AssetDatabase.FindAssets("Dependencies t:TextAsset", new[] {"Assets", "Packages"});
            HashSet<string> matchingEntries = new HashSet<string>();
            foreach (string assetGuid in guids) {
                string filename = AssetDatabase.GUIDToAssetPath(assetGuid);
                // Ignore non-existent files as it's possible for the asset database to reference
                // missing files if it hasn't been refreshed or completed a refresh.
                if (File.Exists(filename) || Directory.Exists(filename))
                {
                    if (_DependenciesRegex.Match(filename).Success)
                    {
                        matchingEntries.Add(filename);
                    }
                }
            }
            string[] entries = new string[matchingEntries.Count];
            matchingEntries.CopyTo(entries);
            return entries;
        }
        
        public static void ProcessCustomGradleContext(AndroidGradleContext gradleContext, bool haveEDM4U)
        {
            if (gradleContext == null) return;
            // 打开 Gradle 模板
            var fileInfo = ToggleCustomTemplateFile(gradleContext.templateType, true);
            if (fileInfo == null)
            {
                Debug.LogFormat("[TapTap.AGCP] fileInfo == null return! gradleContext.template: {0}, gradleContext.Content: {1}", gradleContext.templateType, string.Join("||", gradleContext.processContent));
                return;
            }

            // 逐行解决依赖
            for (var i = 0; i < gradleContext.processContent.Count; i++)
            {
                var content = gradleContext.processContent[i];
                var appendNewline = gradleContext.processType == AndroidGradleProcessType.Insert && i == 0;
                ProcessEachContext(gradleContext, content, fileInfo, haveEDM4U, appendNewline);
            }
        }
        
        private static void CheckDepsHeadline(bool haveEDM4U, bool needHeader)
        {
            var gradleTemplateFileInfo = ToggleCustomTemplateFile(CustomTemplateType.UnityMainGradle, true);
            var contents = File.ReadAllText(gradleTemplateFileInfo.FullName);
            
            string clearContents = Regex.Replace(contents, string.Format(@"{0}[\s\S]*{1}", DependenciesStartLine, DependenciesEndLine), "");
            if (!haveEDM4U)
            {
                // 定义要添加的依赖项字符串
                string androidResolverDependencies;
                if (needHeader)
                    androidResolverDependencies = string.Format("\t{0}\n\t{1}\n**DEPS**", DependenciesStartLine, DependenciesEndLine);
                else
                {
                    androidResolverDependencies = "**DEPS**";
                }

                // 使用正则表达式替换原始文本中的 **DEPS** 标记
                string newContent = Regex.Replace(clearContents, @"\*\*DEPS\*\*", androidResolverDependencies);
                File.WriteAllText(gradleTemplateFileInfo.FullName, newContent);
            }
            else
            {
                File.WriteAllText(gradleTemplateFileInfo.FullName, clearContents);
            }
        }
        
        private static string RemoveDuplicateFields(string input)
        {
            string[] lines = input.Split('\n');
            HashSet<string> nonDuplicateLines = new HashSet<string>();

            foreach (string line in lines)
            {
                string trimmedLine = line.Trim();
                if (!nonDuplicateLines.Contains(trimmedLine))
                {
                    nonDuplicateLines.Add(trimmedLine);
                }
            }

            string result = string.Join("\n", nonDuplicateLines);

            return result;
        }

        // 因为 EDM4U 和 AGP 会同时修改 gradleTemplate.properties,并且 EMD4U 不会检查已经存在的内容，所以去掉重复添加的部分
        private static void CheckGradlePropertiesTemplate(bool haveEDM4U)
        {
            var fileInfo = ToggleCustomTemplateFile(CustomTemplateType.GradleProperties, true);
            if (fileInfo == null) return;
            var contents = File.ReadAllText(fileInfo.FullName);
            if (string.IsNullOrEmpty(contents)) return;
            var newContents = RemoveDuplicateFields(contents);
            File.WriteAllText(fileInfo.FullName, newContents);
        }
        
        private static void ProcessEachContext(AndroidGradleContext gradleContext, string eachContext, FileInfo gradleTemplateFileInfo, bool haveEDM4U, bool apeendNewline = false)
        {
            // 检查 Unity 版本
            if (UnityVersionValidate(gradleContext) == false)
            {
                Debug.LogFormat($"[TapTap.AGCP] Unity Version not Validate! Gradle Template Name: {gradleTemplateFileInfo.Name} gradleContext Content: {eachContext}");
                return;
            }
            
            var contents = File.ReadAllText(gradleTemplateFileInfo.FullName);
                
            Match match = null;
            // 寻找修改位置
            if (IsDepsContext(gradleContext) && !haveEDM4U)
            {
                match = Regex.Match(contents, $"{DependenciesStartLine}", RegexOptions.Multiline);
            }
            else if (gradleContext.locationType == AndroidGradleLocationType.Builtin)
            {
                match = Regex.Match(contents, $"\\*\\*{gradleContext.locationParam}\\*\\*", RegexOptions.Multiline);
            }
            else if (gradleContext.locationType == AndroidGradleLocationType.Custom)
            {
                match = Regex.Match(contents, gradleContext.locationParam, RegexOptions.Multiline);
            }
            else if (gradleContext.locationType == AndroidGradleLocationType.End)
            {
            }
            else if (gradleContext.locationType == AndroidGradleLocationType.Start)
            {
                match = Regex.Match(contents, @"^(?!\s*//)", RegexOptions.Multiline);
            }

            var index = 0;
            if (gradleContext.locationType == AndroidGradleLocationType.Start)
            {
                index = match.Index;
            }
            else if (gradleContext.locationType != AndroidGradleLocationType.End)
            {
                if (match == null || match.Success == false)
                {
                    var msg = string.Format("[TapTap.AGCP] Couldn't find Custom Gradle Template Location! Gradle Type: {0} Location Type: {1} Location Param: {2}", gradleContext.templateType, gradleContext.locationType, gradleContext.locationParam);
                    Debug.LogWarning(msg);
                    return;
                }
                
                if (gradleContext.processType == AndroidGradleProcessType.InsertBefore)
                    index = match.Index;
                else if (gradleContext.processType == AndroidGradleProcessType.Insert)
                    index = match.Index + match.Length;
                else if (gradleContext.processType == AndroidGradleProcessType.Replace)
                    index = match.Index;
            }
            else
            {
                index = contents.Length;
            }
            
            // 已经替换过的情况
            if (HadWrote(gradleContext, eachContext, gradleTemplateFileInfo, ref contents, index))
            {
                Debug.LogFormat("[TapTap.AGCP] Gradle Content had wroten! Gradle Template Name: {0} gradleContext Content: {1}", gradleTemplateFileInfo.Name, eachContext);
                return;
            }
            // 检查是否需要引入,不能引入的原因是 gradle 已经存在 >= package 的版本
            var needImport = CheckNeedImport(gradleContext, eachContext, contents, gradleTemplateFileInfo, ref index, out string fixedContents);
            if (needImport == false)
            {
                Debug.LogFormat("[TapTap.AGCP] Gradle Content don't need Import! Gradle Template Name: {0} gradleContext Content: {1}", gradleTemplateFileInfo.Name, eachContext);
                return;
            }
            if (false == string.IsNullOrEmpty(fixedContents)) contents = fixedContents;
            if (IsDepsContext(gradleContext) && haveEDM4U)
            {
                return;
            }
            // 替换新的修改内容
            string newContents = null;
            if (gradleContext.processType == AndroidGradleProcessType.Insert)
            {
                // DEPS 中 ' 和 " 是相同的含义,所以需要特殊处理
                if (gradleContext.locationParam == "DEPS")
                {
                    eachContext = eachContext.Replace("'", "\"");
                }
                newContents = contents.Insert(index, string.Format("\n{0}{1}", eachContext, (apeendNewline?"\n":"")));
            }
            else if (gradleContext.processType == AndroidGradleProcessType.InsertBefore)
            {
                // DEPS 中 ' 和 " 是相同的含义,所以需要特殊处理
                if (gradleContext.locationParam == "DEPS")
                {
                    eachContext = eachContext.Replace("'", "\"");
                }
                newContents = contents.Insert(index, string.Format("{0}{1}", eachContext, (apeendNewline?"\n":"")));
            }
            else if (gradleContext.processType == AndroidGradleProcessType.Replace)
            {
                var replaceContent = contents.Replace(contents.Substring(index, match.Length),
                    string.Format("{0}{1}", eachContext, apeendNewline ? "\n" : ""));
                newContents = replaceContent;
            }
            File.WriteAllText(gradleTemplateFileInfo.FullName, newContents);
            Debug.LogFormat("[TapTap.AGCP] Write Gradle Content Successful! Gradle Template Name: {0} gradleContext Content: {1}", gradleTemplateFileInfo.Name, eachContext);
        }
        
        private static bool UnityVersionValidate(AndroidGradleContext gradleContext)
        {
            // 版本检查
            var unityVersionCompatibleType = gradleContext.unityVersionCompatibleType;
            if (unityVersionCompatibleType == UnityVersionCompatibleType.Unity_2019_3_Above)
            {
#if !UNITY_2019_3_OR_NEWER
                return false;
#endif
            }
            if (unityVersionCompatibleType == UnityVersionCompatibleType.Unity_2019_3_Beblow)
            {
#if UNITY_2019_3_OR_NEWER
                return false;
#endif
            }

            return true;
        }

        // 是否已经写过
        private static bool HadWrote(AndroidGradleContext gradleContext, string eachContext, FileInfo gradleTemplateFileInfo, ref string contents, int insertIndex)
        {
            var hadWrote = false;
            
            if (gradleContext.locationType == AndroidGradleLocationType.End)
            {
                var text = contents.TrimEnd();
                text = text.Substring(text.Length - eachContext.Length, eachContext.Length);
                hadWrote = text == eachContext;
            }
            else
            {
                if (gradleContext.processType == AndroidGradleProcessType.Insert)
                {
                    // DEPS 会清理所有之前插入的内容,因为新的内容需要放到DependenciesStartLine和DependenciesEndLine之间
                    if (hadWrote == false && gradleContext.locationParam == "DEPS")
                    {
                        var temp = Regex.Match(contents, string.Format("^\\s*{0}", eachContext.Trim()), RegexOptions.Multiline);
                        hadWrote = temp.Success;
                        if (hadWrote == false)
                        {
                            var tmpContext = eachContext.Replace("\"", "'");
                            temp = Regex.Match(contents, string.Format("^\\s*{0}", tmpContext.Trim()), RegexOptions.Multiline);
                            hadWrote = temp.Success;
                        }
                        if (hadWrote)
                        {
                            contents = contents.Remove(temp.Index, temp.Length + 1);
                            File.WriteAllText(gradleTemplateFileInfo.FullName, contents);
                        }

                        hadWrote = false;
                    }
                    else
                    {
                        var temp = Regex.Match(contents, string.Format("^{0}", eachContext), RegexOptions.Multiline, TimeSpan.FromSeconds(2));
                        hadWrote = temp.Success;
                    }
                }
                else if (gradleContext.processType == AndroidGradleProcessType.Replace)
                {
                    hadWrote = contents.Substring(insertIndex, eachContext.Length) == eachContext;
                }
            }

            return hadWrote;
        }
        /// <summary>
        /// 检查是否有引入包重复情况
        /// </summary>
        /// <param name="gradleContext"></param>
        /// <param name="eachContext"></param>
        /// <param name="contents"></param>
        /// <param name="gradleTemplateFileInfo"></param>
        /// <param name="insertIndex"></param>
        /// <param name="newContents"></param>
        /// <returns>是否需要继续引入包</returns>
        private static bool CheckNeedImport(AndroidGradleContext gradleContext, string eachContext, string contents, FileInfo gradleTemplateFileInfo, ref int insertIndex, out string newContents)
        {
            newContents = null;
            var headerPattern = "^.*";
            var packageNamePattern =
                "\\s*([-\\w]{0,62}\\.\\s*)+[-\\w]{0,62}\\s*:\\s*[-\\w]{0,62}\\s*";
            var versionNumberPattern =
                "\\s*(\\d{1,3}\\.\\s*){1,3}\\d{1,3}\\s*";
            var packageAllPattern = headerPattern + "['\"]" + packageNamePattern + ":" + versionNumberPattern + "['\"]";

            var importMatch = Regex.Match(eachContext, packageAllPattern, RegexOptions.Multiline);
            if (string.IsNullOrEmpty(importMatch.Value)) return true;

            var importPkgNameMatch = Regex.Match(importMatch.Value, packageNamePattern, RegexOptions.Multiline);
            if (string.IsNullOrEmpty(importPkgNameMatch.Value)) return true;
            
            try
            {
                var pattern = headerPattern + "['\"]" + importPkgNameMatch.Value + ":" + versionNumberPattern + "['\"]";
                // 已经存在的 gradle 文件有没有对应的 package 内容
                var builtinMatches = Regex.Matches(contents, pattern, RegexOptions.Multiline, TimeSpan.FromSeconds(2));
                if (builtinMatches.Count == 0) return true;

                var importVersionMatch = Regex.Match(importMatch.Value, versionNumberPattern, RegexOptions.Multiline);
                var importVersion = new Version(importVersionMatch.Value);

                foreach (Match builtinMatch in builtinMatches)
                {
                    // 检查前面是否已经有了注释, -2 是防止末尾的\n
                    var matchEndIdx = builtinMatch.Index + builtinMatch.Length - 2;
                    var headerIdx = contents.LastIndexOf('\n', matchEndIdx);
                    var commentIdx = contents.LastIndexOf("//", matchEndIdx, matchEndIdx - headerIdx, StringComparison.Ordinal);
                    if (commentIdx >= 0) continue;
                    
                    // 版本相同不添加
                    var builtinVersionMatch = Regex.Match(builtinMatch.Value, versionNumberPattern, RegexOptions.Multiline);
                    if (builtinVersionMatch.Success == false) continue;
                    var builtinVersion = new Version(builtinVersionMatch.Value);
                    if (importVersion == builtinVersion) return false;
                    // 如果是替换的话,不需要添加注释
                    if (gradleContext.processType == AndroidGradleProcessType.Replace) return true;
                    Debug.LogWarningFormat(string.Format("[TapTap.AGCP] Detect Package Collision! Gradle File: {0} Process Content: {1} Collision Content: {2}", gradleContext.templateType, eachContext, builtinMatch.Value));
                    // 引入版本更低,那就不用引入了
                    if (importVersion < builtinVersion) return false;
                    // 引入版本更高,把已经存在的版本注释掉
                    newContents = contents.Insert(headerIdx + 1, "//");
                    File.WriteAllText(gradleTemplateFileInfo.FullName, newContents);
                    if (gradleContext.locationType == AndroidGradleLocationType.End) insertIndex = newContents.Length;
                    return true;
                }
                return true;
            }
            catch (Exception e)
            {
                Debug.LogError(e);
            }

            return true;
        }
        
        public static bool HaveCustomTemplateFile(CustomTemplateType templateType)
        {
            if (string.IsNullOrEmpty(_AndroidEditorModulePath))
            {
                Init();
            }

            GetTemplatePath(templateType, out _, out string customPath);

            return File.Exists(customPath);
        }
        
        private static FileInfo ToggleCustomTemplateFile(CustomTemplateType templateType, bool create)
        {
            if (string.IsNullOrEmpty(_AndroidEditorModulePath))
            {
                Init();
            }

            GetTemplatePath(templateType, out string internalPath, out string customPath);

            return ToggleAsset(internalPath, customPath, create);
        }
        
        private static FileInfo ToggleAsset(string originalFile, string assetFile, bool create)
        {
            if (string.IsNullOrEmpty(originalFile) || string.IsNullOrEmpty(assetFile)) return null;
            var str = assetFile + ".DISABLED";
            var directoryName = Path.GetDirectoryName(assetFile);
            if (create)
            {
                if (File.Exists(str))
                {
                    Debug.LogFormat($"[TapTap.AGCP] Re-Create Gradle Template! Gradle Template Name: {assetFile}");
                    AssetDatabase.MoveAsset(str, assetFile);
                    return new FileInfo(assetFile);
                }

                if (File.Exists(assetFile)) return new FileInfo(assetFile);
                if (!Directory.Exists(directoryName))
                    Directory.CreateDirectory(directoryName);
                if (File.Exists(originalFile))
                {
                    Debug.LogFormat($"[TapTap.AGCP] Copy Built-in Gradle Template to Project! Gradle Template Name: {assetFile}");
                    File.Copy(originalFile, assetFile);
                }
                else
                {
                    Debug.LogErrorFormat($"[TapTap.AGCP] Built-in Gradle Template doesn't exist! Gradle Template Name: {assetFile}");
                    File.Create(assetFile).Dispose();
                }
                AssetDatabase.Refresh();
                return new FileInfo(assetFile);
            }
            else
            {
                AssetDatabase.MoveAsset(assetFile, str);
                return new FileInfo(str);
            }
        }

        private static void GetTemplatePath(CustomTemplateType templateType, out string internalPath,
            out string customPath)
        {
            internalPath = null;
            customPath = null;
            switch (templateType)
            {
                case CustomTemplateType.AndroidManifest:
                    internalPath = _InternalMainManifest;
                    customPath = _CustomMainManifest;
                    break;
                case CustomTemplateType.BaseGradle:
                    internalPath = _InternalBaseGradleTemplate;
                    customPath = _CustomBaseGradleTemplate;
                    break;
                case CustomTemplateType.GradleProperties:
                    internalPath = _InternalGradlePropertiesTemplate;
                    customPath = _CustomGradlePropertiesTemplate;
                    break;
                case CustomTemplateType.LauncherGradle:
                    internalPath = _InternalLauncherGradleTemplate;
                    customPath = _CustomLauncherGradleTemplate;
                    break;
                case CustomTemplateType.LauncherManifest:
                    internalPath = _InternalLauncherManifest;
                    customPath = _CustomLauncherManifest;
                    break;
                case CustomTemplateType.UnityMainGradle:
                    internalPath = _InternalMainGradleTemplate;
                    customPath = _CustomMainGradleTemplate;
                    break;
            }
        }
        
        private static void Init()
        {
#if UNITY_2019_3_OR_NEWER
             _AndroidEditorModulePath =
                    BuildPipeline.GetPlaybackEngineDirectory(BuildTarget.Android, BuildOptions.None);
#else
            var buildPipelineType = typeof(BuildPipeline);
            var methodInfo = buildPipelineType.GetMethod("GetBuildToolsDirectory", BindingFlags.Static | BindingFlags.NonPublic);
            var temp = methodInfo.Invoke(null, new object[] { BuildTarget.Android }) as string;
            _AndroidEditorModulePath = temp.Substring(0, temp.LastIndexOf('/'));
#endif
            _PluginPath = Path.Combine("Assets", "Plugins", "Android");
            
#if UNITY_2019_3_OR_NEWER
            var builtinAPK = Path.Combine(BuildPipeline.GetPlaybackEngineDirectory(BuildTarget.Android, BuildOptions.None), "Apk");
#else
            var builtinAPK = Path.Combine(_AndroidEditorModulePath, "Apk");
#endif
            _InternalMainManifest = Path.Combine(builtinAPK, "UnityManifest.xml");
            _CustomMainManifest = Path.Combine(_PluginPath, "AndroidManifest.xml");
            
#if UNITY_2019_3_OR_NEWER
            _InternalLauncherManifest = Path.Combine(builtinAPK, "LauncherManifest.xml");
            _CustomLauncherManifest = Path.Combine(_PluginPath, "LauncherManifest.xml");
#else
            _InternalLauncherManifest = Path.Combine(builtinAPK, "UnityManifest.xml");
            _CustomLauncherManifest = Path.Combine(_PluginPath, "AndroidManifest.xml");
#endif
            
            var builtinGradleTemplates = Path.Combine(_AndroidEditorModulePath, "Tools", "GradleTemplates");
            _InternalMainGradleTemplate = Path.Combine(builtinGradleTemplates, "mainTemplate.gradle");
            _CustomMainGradleTemplate = Path.Combine(_PluginPath, "mainTemplate.gradle");
            
#if UNITY_2019_3_OR_NEWER
            _InternalLauncherGradleTemplate = Path.Combine(builtinGradleTemplates, "launcherTemplate.gradle");
            _CustomLauncherGradleTemplate = Path.Combine(_PluginPath, "launcherTemplate.gradle");
#else
            _InternalLauncherGradleTemplate = Path.Combine(builtinGradleTemplates, "mainTemplate.gradle");
            _CustomLauncherGradleTemplate = Path.Combine(_PluginPath, "mainTemplate.gradle");
#endif
            
#if UNITY_2019_3_OR_NEWER
            _InternalBaseGradleTemplate = Path.Combine(builtinGradleTemplates, "baseProjectTemplate.gradle");
            _CustomBaseGradleTemplate = Path.Combine(_PluginPath, "baseProjectTemplate.gradle");
#else
            _InternalBaseGradleTemplate = Path.Combine(builtinGradleTemplates, "mainTemplate.gradle");
            _CustomBaseGradleTemplate = Path.Combine(_PluginPath, "mainTemplate.gradle");
#endif
            
#if UNITY_2019_3_OR_NEWER
            _InternalGradlePropertiesTemplate = Path.Combine(builtinGradleTemplates, "gradleTemplate.properties");
            _CustomGradlePropertiesTemplate = Path.Combine(_PluginPath, "gradleTemplate.properties");
#endif
            
        }
        
        #region Interface code

        [MenuItem("TapTap/AndroidDependencyResolver/Resolve")]
        internal static void MenuResolve()
        {
            Resolve(false);
        }
        
        [MenuItem("TapTap/AndroidDependencyResolver/Force Resolve")]
        internal static void MenuForceResolve()
        {
            Resolve(true);
        }
        
        public static void Resolve(bool forceResolve)
        {
            var providers = Load();
            GenerateDependencies(providers);
            var haveEDM4U = HaveEDM4U();
            var autoGenerateDepsProvider = GetDependencies();
            providers.Add(autoGenerateDepsProvider);
            providers.Sort((a,b)=> a.Priority.CompareTo(b.Priority));
            // 当前有 TapTap 添加的 DEPS 依赖
            CheckDepsHeadline(haveEDM4U, autoGenerateDepsProvider.AndroidGradleContext.Count > 0 && autoGenerateDepsProvider.AndroidGradleContext[0].processContent.Count > 0);
            
            if (providers == null) return;
            Debug.LogFormat($"[TapTap.AGCP] Load Provider Count: {providers?.Count ?? -1}");
            foreach (var provider in providers)
            {
                if (provider.AndroidGradleContext == null)
                {
                    Debug.LogFormat("[TapTap.AGCP] Provider: {0} return! since : provider.AndroidGradleContext == null", 0);
                    continue;
                }
                if (provider.Use == false)
                {
                    Debug.LogFormat("[TapTap.AGCP] Provider: {0} return! since : provider.Use == false", 0);
                    continue;
                }

                if (provider.Version != AndroidGradleProcessor.VERSION)
                {
                    Debug.LogFormat("[TapTap.AGCP] Provider: {0} return! since : provider.Version != VERSION", 0);
                    continue;
                }
                foreach (var context in provider.AndroidGradleContext)
                {
                    try
                    {
                        if (IsDepsContext(context))
                        {
                            if (provider.ModuleName != DEPENDENCIES_MODULE_NAME)
                                continue;
                        }
                        ProcessCustomGradleContext(context, haveEDM4U);

                        if (IsDepsContext(context) && haveEDM4U)
                        {
                            EDM4UResolve(forceResolve);
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.LogErrorFormat("[TapTap.AGCP] Process Custom Gradle Context Error! Error Msg:\n{0}\nError Stack:\n{1}", e.Message, e.StackTrace);
                    }
                }
            }

            CheckGradlePropertiesTemplate(haveEDM4U);
        }

        private static void EDM4UResolve(bool forceResolve)
        {
            var method = GetEDM4UResolveMethod();
            // 获取函数的参数类型
            Action action = () => { Debug.LogFormat("TapTap AndroidGradleProvider Call EDM4U Resolution complete"); };
            Action<bool> boolAction = (result) => { Console.WriteLine($"TapTap AndroidGradleProvider Call EDM4U Resolution complete with result: {result}"); };
            object[] parameters = { action, forceResolve, boolAction };
                    
            method?.Invoke(null, parameters);
        }
                
     
        #endregion
    }
}
#endif