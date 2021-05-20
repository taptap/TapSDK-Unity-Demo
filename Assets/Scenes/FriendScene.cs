using UnityEngine;
using TapTap.Friends;
using System.Collections.Generic;
using TapTap.Common;


public class FriendScene : MonoBehaviour, ITapMessageListener
{
    // Start is called before the first frame update
    void Start()
    {
        TapFriends.RegisterMessageListener(this);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnMessageWithCode(int code, Dictionary<string, object> extras)
    {
        label = "接收消息：";
        label = label + "code: " + code + " extras: " + Json.Serialize(extras);
    }

    private string label = "";
    private string from = "0";
    private string limit = "5";
    private string userId = "d669eda7fb704e08b1734a590ed899cc";
    private void OnGUI()
    {
        GUIStyle style = new GUIStyle(GUI.skin.button);
        style.fontSize = 40;

        GUI.depth = 0;

        if (GUI.Button(new Rect(60, 150, 180, 100), "添加好友", style))
        {
            TapFriends.AddFriend(userId, error =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "添加好友成功";
                }
            });
        }

        if (GUI.Button(new Rect(60, 300, 180, 100), "删除好友", style))
        {
            TapFriends.DeleteFriend(userId, error =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "删除好友成功";
                }
            });
        }

        if (GUI.Button(new Rect(60, 450, 180, 100), "好友列表", style))
        {
            int handleFrom = int.Parse(from);
            int handleLimit = int.Parse(limit);
            TapFriends.GetFollowingList(handleFrom, false, handleLimit, (list, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    if (list.Count != 0)
                    {
                        label = "获取好友列表成功: ";
                        foreach (TapUserRelationShip relation in list)
                        {
                            this.label = this.label + "userId：" + relation.userId +
                                         " name：" + relation.name +
                                         " avatar：" + relation.avatar +
                                         " gender：" + relation.gender +
                                         " mutualAttention：" + relation.mutualAttention +
                                         " relationship：" + relation.relationship + "\n";
                        }
                    }
                    else
                    {
                        this.label = "获取好友列表为空";
                    }
                }
            });
        }

        if (GUI.Button(new Rect(60, 600, 180, 100), "互关列表", style))
        {
            int handleFrom = int.Parse(from);
            int handleLimit = int.Parse(limit);
            TapFriends.GetFollowingList(handleFrom, true, handleLimit, (list, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    if (list.Count != 0)
                    {
                        this.label = "获取互关好友列表成功: ";
                        foreach (TapUserRelationShip relation in list)
                        {
                            this.label = this.label + "userId：" + relation.userId +
                                         " name：" + relation.name +
                                         " avatar：" + relation.avatar +
                                         " gender：" + relation.gender +
                                         " mutualAttention：" + relation.mutualAttention +
                                         " relationship：" + relation.relationship + "\n";
                        }
                    }
                    else
                    {
                        this.label = "获取互关好友列表为空";
                    }
                }
            });
        }

        if (GUI.Button(new Rect(60, 750, 180, 100), "粉丝列表", style))
        {
            int handleFrom = int.Parse(from);
            int handleLimit = int.Parse(limit);
            TapFriends.GetFollowerList(handleFrom, handleLimit, (list, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    if (list.Count != 0)
                    {
                        this.label = "获取粉丝列表成功: ";
                        foreach (TapUserRelationShip relation in list)
                        {
                            this.label = this.label + "userId：" + relation.userId +
                                         " name：" + relation.name +
                                         " avatar：" + relation.avatar +
                                         " gender：" + relation.gender +
                                         " mutualAttention：" + relation.mutualAttention +
                                         " relationship：" + relation.relationship + "\n";
                        }
                    }
                    else
                    {
                        this.label = "获取粉丝列表为空";
                    }
                }
            });
        }

        if (GUI.Button(new Rect(60, 900, 180, 100), "拉黑", style))
        {
            TapFriends.BlockUser(userId, error =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "拉黑用户成功";
                }
            });
        }

        if (GUI.Button(new Rect(60, 900, 180, 100), "取消拉黑", style))
        {
            TapFriends.UnblockUser(userId, error =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "取消拉黑用户成功";
                }
            });
        }

        if (GUI.Button(new Rect(60, 1050, 180, 100), "拉黑列表", style))
        {
            int handleFrom = int.Parse(from);
            int handleLimit = int.Parse(limit);
            TapFriends.GetBlockList(handleFrom, handleLimit, (list, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    if (list.Count != 0)
                    {
                        label = "获取拉黑列表成功";
                        foreach (TapUserRelationShip relation in list)
                        {
                            this.label = this.label + "userId：" + relation.userId +
                                         " name：" + relation.name +
                                         " avatar：" + relation.avatar +
                                         " gender：" + relation.gender +
                                         " mutualAttention：" + relation.mutualAttention +
                                         " relationship：" + relation.relationship + "\n";
                        }
                    }
                    else
                    {
                        label = "获取拉黑列表为空";
                    }
                }
            });
        }

        if (GUI.Button(new Rect(260, 150, 180, 100), "搜索好友", style))
        {
            TapFriends.SearchUser(userId, (relationShip, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "搜索用户成功";
                    this.label = this.label + "userId：" + relationShip.userId +
                                 " name：" + relationShip.name +
                                 " avatar：" + relationShip.avatar +
                                 " gender：" + relationShip.gender +
                                 " mutualAttention：" + relationShip.mutualAttention +
                                 " relationship：" + relationShip.relationship + "\n";
                }
            });
        }

        if (GUI.Button(new Rect(260, 300, 180, 100), "邀请链接", style))
        {
            TapFriends.GenerateFriendInvitation((invitationString, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "获取好友邀请链接成功: ";
                    this.label = this.label + invitationString;
                }
            });
        }

        if (GUI.Button(new Rect(260, 450, 240, 100), "分享邀请链接", style))
        {
            TapFriends.SendFriendInvitation((isInvitation, error) =>
            {
                if (error != null)
                {
                    label = $"Error:{error.code} Description:{error.errorDescription}";
                }
                else
                {
                    label = "分享好友邀请: ";
                    this.label = this.label + (isInvitation ? "成功" : "失败");
                }
            });
        }

        if (GUI.Button(new Rect(260, 600, 180, 100), "返回", style))
        {
            UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(0);
        }
    }
}
