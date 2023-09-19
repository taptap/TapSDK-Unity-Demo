using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TapTap.Bootstrap;
using UnityNative.Toasts.Example;
using TapTap.Common;
// 导入基础模块
using LeanCloud;
// 导入存储模块
using LeanCloud.Storage;
// 如有需要，导入即时通讯模块
using LeanCloud.Realtime;
// 如有需要，导入 LiveQuery 模块
using LeanCloud.LiveQuery;
using System.Collections.ObjectModel;
using System.IO;

public class StorageScene : MonoBehaviour
{
    public GUISkin demoSkin;

    // Start is called before the first frame update
    void Start()
    {
        LCApplication.Initialize("hskcocvse6x1cgkklm", "XQuOYJZ5Oo2wHXf7J5pK1yEtRWH59Tp9AdfMpwOf", "https://hskcocvs.cloud.tds1.tapapis.cn");
        LCLogger.LogDelegate = (LCLogLevel level, string info) => {
        switch (level) {
            case LCLogLevel.Debug:
                Debug.Log($"[DEBUG] {DateTime.Now} {info}\n");
                break;
            case LCLogLevel.Warn:
                Debug.Log($"[WARNING] {DateTime.Now} {info}\n");
                break;
            case LCLogLevel.Error:
                Debug.Log($"[ERROR] {DateTime.Now} {info}\n");
                break;
            default:
                Debug.Log(info);
                break;
            }
        };




    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public async void OnGUI(){
        GUI.skin = demoSkin;
        float scale = 1.0f;

		
		float btnWidth= Screen.width / 5 * 2;
        float btnWidth2 = btnWidth + 80 * scale;

        float btnHeight = Screen.height / 25;
		float btnTop = 30 * scale;
		float btnGap = 20 * scale;

		GUI.skin.button.fontSize = Convert.ToInt32(13 * scale);

        var style = new GUIStyle(GUI.skin.button) { fontSize = 20 };
        var labelStyle = new GUIStyle(GUI.skin.label) { fontSize = 30 };

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth /2, btnHeight), "返回", style))
		{
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);

        }

        btnTop += btnHeight + 20 * scale;

        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "对象：", labelStyle);


        btnTop += btnHeight * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "保存对象", style))
		{
            saveObject();
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "获取对象", style))
		{

            searchObject();
        }

        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "同步对象", style))
		{
            // 当云端数据发生更改时，你可以调用 Fetch 方法来刷新对象，使之与云端数据同步：
            // 刷新操作会强行使用云端的属性值覆盖本地的属性。因此如果本地有属性修改，Fetch 操作会丢弃这些修改。为避免这种情况，你可以在刷新时指定 需要刷新的属性，这样只有指定的属性会被刷新（包括内置属性 objectId、createdAt 和 updatedAt），其他属性不受影响。
           LCObject todo = LCObject.CreateWithoutData("Todo", "637f4066ba896540ba264dc2");
           await todo.Fetch();
           UnityNativeToastsHelper.ShowShortText("同步对象成功！");

        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "更新对象", style))
		{
            LCObject todo = LCObject.CreateWithoutData("Todo", "637f4066ba896540ba264dc2");
            todo["content"] = "这周周会改到周三下午三点。";
            await todo.Save();
            UnityNativeToastsHelper.ShowShortText("更新对象成功！");

        }


         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "删除对象", style))
		{
            // 传入删除对象的 objectId
            LCObject todo = LCObject.CreateWithoutData("Todo", "638028fc67fcec2d35200742");
            await todo.Delete();
            UnityNativeToastsHelper.ShowShortText("删除对象成功！");
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "一对多存储对象", style))
		{
            // 创建 Blog 对象，然后 Blog 表中添加下 评论（comment）的对象
            LCObject blog = new LCObject("Blog");
            blog["title"] = "博客标题";
            blog["content"] = "博客内容";
            // 创建 comment
            LCObject comment = new LCObject("Comment");
            comment["content"] = "这个博客写的太好了。。。的评论";
            // 将 comment 设为 blog 的一个属性值
            blog["parent"] = comment;
            // 保存 comment 会同时保存 post
            await blog.Save();
            UnityNativeToastsHelper.ShowShortText("保存对象成功！");

        }

         btnTop += btnHeight + 20 * scale;

        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "查询：", labelStyle);


        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "基础查询", style))
		{
            // 查询 Todo 表中 所有 title 字段为 “马拉松报名”的对象
            LCQuery<LCObject> query = new LCQuery<LCObject>("Todo");
            query.WhereEqualTo("title", "马拉松报名");
            ReadOnlyCollection<LCObject> todo = await query.Find();

            foreach( LCObject todoItem in todo )
            {
               Debug.Log($"查询对象成功： {todoItem.ToString()}");
               UnityNativeToastsHelper.ShowShortText("查询对象成功："+ todoItem.ToString());
            }
        }

        if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "字符串查询", style))
		{
            LCQuery<LCObject> query = new LCQuery<LCObject>("Todo");
            // 相当于 SQL 中的 title LIKE 'lunch%'
            query.WhereStartsWith("title", "马拉松");
            ReadOnlyCollection<LCObject> todo = await query.Find();
            foreach( LCObject todoItem in todo )
            {
               Debug.Log($"查询对象成功： {todoItem.ToString()}");
               UnityNativeToastsHelper.ShowShortText("查询对象成功："+ todoItem.ToString());
            }
        }

         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "数组查询", style))
		{
            LCQuery<LCObject> query = new LCQuery<LCObject>("Todo");
            query.WhereEqualTo("tags", "工作");
            ReadOnlyCollection<LCObject> todo = await query.Find();
            foreach( LCObject todoItem in todo )
            {
               Debug.Log($"查询对象成功： {todoItem.ToString()}");
               UnityNativeToastsHelper.ShowShortText("查询对象成功："+ todoItem.ToString());
            }

        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "关系查询", style))
		{
            LCObject comment = LCObject.CreateWithoutData("Comment", "638037ea6f398057007b3094");
            LCQuery<LCObject> query = new LCQuery<LCObject>("Blog");
            query.WhereEqualTo("parent", comment);
            // comments 包含与 post 相关联的评论
            ReadOnlyCollection<LCObject> blogs = await query.Find();
            foreach( LCObject blog in blogs )
            {
               Debug.Log($"查询对象成功： {blog.ToString()}");
               UnityNativeToastsHelper.ShowShortText("查询对象成功："+ blog.ToString());
            }
            

        }

         btnTop += btnHeight + 20 * scale;

        GUI.Label(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "文件：", labelStyle);


        btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "保存文件", style))
		{
                 // 如下使用 Url 构建文件
                   LCFile file = new LCFile("logo.png", new Uri("http://hskcocvs.tds1.tapfiles.cn/QmoY5flS51V3XlQx6QOUKeJItp9JceGt/TDS%20DEMO.png"));
                   await file.Save();
                   UnityNativeToastsHelper.ShowShortText("上传文件成功");    
        }

         if (GUI.Button(new Rect((Screen.width - btnGap) / 2 + btnGap, btnTop, btnWidth, btnHeight), "上传进度监听", style))
		{
            LCFile file = new LCFile("logo.png", new Uri("http://hskcocvs.tds1.tapfiles.cn/QmoY5flS51V3XlQx6QOUKeJItp9JceGt/TDS%20DEMO.png"));
            await file.Save((count, total) => {
            print($"{count}/{total}");
            if (count == total) {
                print("上传完成");
            }
            });

        }
         btnTop += btnHeight + 20 * scale;

		if (GUI.Button(new Rect((Screen.width - btnGap) / 2 - btnWidth, btnTop, btnWidth, btnHeight), "删除文件", style))
		{
            LCFile file = (LCFile) LCObject.CreateWithoutData("_File", "552e0a27e4b0643b709e891e");
            await file.Delete();
            UnityNativeToastsHelper.ShowShortText("删除文件");  
        }


    }


    public async void saveObject(){
        // 构建对象
        LCObject todo = new LCObject("Todo");
        // 为属性赋值
        todo["title"] = "马拉松报名";
        todo["priority"] = 2;
        // 将对象保存到云端
        await todo.Save();
        UnityNativeToastsHelper.ShowShortText("保存对象成功！");


        
    }

    public async void searchObject(){
        LCQuery<LCObject> query = new LCQuery<LCObject>("Todo");
        LCObject todo = await query.Get("64b9eda53d92abed054dc76678");
        // todo 就是 ObjectId 为 637f4066ba896540ba264dc2 的 Todo 实例
        string title = todo["title"] as string;
        int priority = (int)(todo["priority"]);

        // 获取内置属性
        string objectId = todo.ObjectId;
        DateTime updatedAt = todo.UpdatedAt;
        DateTime createdAt = todo.CreatedAt;
        UnityNativeToastsHelper.ShowShortText("查询对象成功："+ title +"--" + priority);
        Debug.Log("查询对象成功=="+objectId+" == "+ title);


     

    }
}
