using System;
using System.Collections.Generic;
using TapTap.Common;
using UnityEngine;
using LC.Newtonsoft.Json;

namespace TapTap.Achievement
{
    public class TapAchievementBean : ICloneable
    {
        public static readonly int StateUnReached = 0;

        public static readonly int StateReached = 1;

        public static readonly int VisibleFalse = 0;

        public static readonly int VisibleTrue = 1;

        /*base*/
        [JsonProperty("id")]
        public string id;

        [JsonProperty("displayId")]
        public string displayId;

        [JsonProperty("visible")]
        public int visible = VisibleFalse;

        [JsonProperty("title")]
        public string title;

        [JsonProperty("subTitle")]
        public string subTitle;

        [JsonProperty("achieveIcon")]
        public string achieveIcon;

        [JsonProperty("step")]
        public int step;

        [JsonProperty("createTime")]
        public long createTime;

        [JsonProperty("showOrder")]
        public int showOrder;

        /*user*/
        [JsonProperty("fullReached")]
        public bool fullReached;

        [JsonProperty("reachedStep")]
        public int reachedStep;

        [JsonProperty("reachedTime")]
        
        public long reachedTime;
        
        [JsonProperty("isChanged")]
        public bool isChanged;
        
        [JsonProperty("type")]
        public int type;

        public AchievementStats stats;

        public bool IsCanShow()
        {
            return IsFullReached() || IsVisible();
        }
        
        public bool IsFullReached()
        {
            return fullReached || reachedStep == step;
        }

        public bool IsVisible()
        {
            return visible == VisibleFalse;
        }
        
        public bool IsFullAchievement() {
            return type == 99;
        }
        
        public bool NeeShowProgress()
        {
            return IsVisible() &&
                   !IsFullReached() && step > 1 && reachedStep > 0;
        }


        public override string ToString()
        {
            if (stats == null)
            {
                return string.Format(
                    $"id: {id}\t displayId: {displayId}\t visible: {visible}\t title: {title}\t subTitle: {subTitle}\t achieveIcon: {achieveIcon}\t type: {type}\t step: {step}\t reachedStep: {reachedStep}\t fullReached: {fullReached}\t reachedTime: {reachedTime}\t reachedTime: {reachedTime}\t showOrder: {showOrder}\t isChanged: {isChanged}");
            }
            
            return string.Format(
                $"id: {id}\t displayId: {displayId}\t visible: {visible}\t title: {title}\t subTitle: {subTitle}\t achieveIcon: {achieveIcon}\t type: {type}\t rarity: {(stats == null ? -1 : stats.rarity)}\t level: {(stats == null ? -1 : stats.level)}\t step: {step}\t reachedStep: {reachedStep}\t fullReached: {fullReached}\t reachedTime: {reachedTime}\t reachedTime: {reachedTime}\t showOrder: {showOrder}\t isChanged: {isChanged}");
        }

        public TapAchievementBean(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            id = SafeDictionary.GetValue<string>(dic, "id");
            displayId = SafeDictionary.GetValue<string>(dic, "displayId");
            visible = SafeDictionary.GetValue<int>(dic, "visible");
            title = SafeDictionary.GetValue<string>(dic, "title");
            subTitle = SafeDictionary.GetValue<string>(dic, "subTitle");
            achieveIcon = SafeDictionary.GetValue<string>(dic, "achieveIcon");
            step = SafeDictionary.GetValue<int>(dic, "step");
            reachedStep = SafeDictionary.GetValue<int>(dic, "reachedStep");
            fullReached = SafeDictionary.GetValue<bool>(dic, "fullReached");
            reachedTime = SafeDictionary.GetValue<long>(dic, "reachedTime");
            createTime = SafeDictionary.GetValue<long>(dic, "createTime");
            showOrder = SafeDictionary.GetValue<int>(dic, "showOrder");
            isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged");
            type = SafeDictionary.GetValue<int>(dic, "type");
            if (Platform.IsIOS())
            {
                Debug.Log($"AchievementStats:{SafeDictionary.GetValue<string>(dic, "stats")}");
                stats = new AchievementStats(SafeDictionary.GetValue<string>(dic, "stats"));
            }
            else if (Platform.IsAndroid())
            {
                if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "stats") is Dictionary<string, object>
                    statsDic)
                {
                    stats = new AchievementStats(statsDic);
                }
            }
        }

        public TapAchievementBean(Dictionary<string, object> dic)
        {
            id = SafeDictionary.GetValue<string>(dic, "id");
            displayId = SafeDictionary.GetValue<string>(dic, "displayId");
            visible = SafeDictionary.GetValue<int>(dic, "visible");
            title = SafeDictionary.GetValue<string>(dic, "title");
            subTitle = SafeDictionary.GetValue<string>(dic, "subTitle");
            achieveIcon = SafeDictionary.GetValue<string>(dic, "achieveIcon");
            step = SafeDictionary.GetValue<int>(dic, "step");
            createTime = SafeDictionary.GetValue<long>(dic, "createTime");
            showOrder = SafeDictionary.GetValue<int>(dic, "showOrder");
            fullReached = SafeDictionary.GetValue<bool>(dic, "fullReached");
            reachedStep = SafeDictionary.GetValue<int>(dic, "reachedStep");
            reachedTime = SafeDictionary.GetValue<long>(dic, "reachedTime");
            isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged");
            type = SafeDictionary.GetValue<int>(dic, "type");
            if (Platform.IsIOS())
            {
                Debug.Log($"AchievementStats:{SafeDictionary.GetValue<string>(dic, "stats")}");
                stats = new AchievementStats(SafeDictionary.GetValue<string>(dic, "stats"));
            }
            else if (Platform.IsAndroid())
            {
                if (SafeDictionary.GetValue<Dictionary<string, object>>(dic, "stats") is Dictionary<string, object>
                    statsDic)
                {
                    stats = new AchievementStats(statsDic);
                }
            }
        }

        public TapAchievementBean() {

        }

        public static TapAchievementBean Parse(Dictionary<string, object> dic) {
            TapAchievementBean achievement = new TapAchievementBean {
                id = SafeDictionary.GetValue<string>(dic, "achievement_id"),
                displayId = SafeDictionary.GetValue<string>(dic, "achievement_open_id"),
                visible = SafeDictionary.GetValue<int>(dic, "is_hide"),
                step = SafeDictionary.GetValue<int>(dic, "count_step"),
                //"成就类型：1-普通成就，99-白金成就", 之前版本的 SafeDictionary 可以设置 defaultValue,这里会自动将 0 -> 1
                type = SafeDictionary.GetValue<int>(dic, "achievement_type") == 0 ? 1 : SafeDictionary.GetValue<int>(dic, "achievement_type"),
                showOrder = SafeDictionary.GetValue<int>(dic, "show_order"),
                createTime = SafeDictionary.GetValue<long>(dic, "createTime"),
                fullReached = SafeDictionary.GetValue<bool>(dic, "full_completed"),
                reachedStep = SafeDictionary.GetValue<int>(dic, "completed_step"),
                reachedTime = SafeDictionary.GetValue<long>(dic, "complete_time"),
                isChanged = SafeDictionary.GetValue<bool>(dic, "isChanged")
            };

            if (dic.TryGetValue("achievement_config_out_dto", out object dtoObj) &&
                    dtoObj is Dictionary<string, object> dto) {
                achievement.title = SafeDictionary.GetValue<string>(dto, "achievement_title");
                achievement.subTitle = SafeDictionary.GetValue<string>(dto, "achievement_sub_title");
                achievement.achieveIcon = SafeDictionary.GetValue<string>(dto, "achievement_icon");
            }

            if (dic.TryGetValue("achievement_rarity", out object statObj) &&
                statObj is Dictionary<string, object> stat) {
                achievement.stats = new AchievementStats(stat);
            }

            return achievement;
        }

        public bool Reach() {
            if (IsFullReached()) {
                return false;
            }

            fullReached = true;
            reachedStep = step;
            reachedTime = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            return true;
        }

        public bool Grow(int step) {
            return Make(reachedStep + step);
        }

        public bool Make(int step) {
            if (IsFullReached()) {
                return false;
            }

            if (step <= reachedStep) {
                return false;
            }

            reachedStep = step;
            if (reachedStep >= this.step) {
                fullReached = true;
                reachedStep = this.step;
            }
            reachedTime = DateTimeOffset.UtcNow.ToUnixTimeMilliseconds();
            return true;
        }

        public object Clone() {
            TapAchievementBean bean = new TapAchievementBean {
                id = id,
                displayId = displayId,
                visible = visible,
                title = title,
                subTitle = subTitle,
                achieveIcon = achieveIcon,
                step = step,
                createTime = createTime,
                showOrder = showOrder,
                fullReached = fullReached,
                reachedStep = reachedStep,
                reachedTime = reachedTime,
                type = type,
            };
            if (stats != null) {
                bean.stats = new AchievementStats {
                    level = stats.level,
                    rarity = stats.rarity
                };
            }
            return bean;
        }
    }

    public class AchievementStats
    {
        public int level;

        public double rarity;

        public AchievementStats(Dictionary<string, object> dic)
        {
            level = SafeDictionary.GetValue<int>(dic, "level");
            rarity = SafeDictionary.GetValue<double>(dic, "rarity");
        }

        public AchievementStats(string json)
        {
            var dic = Json.Deserialize(json) as Dictionary<string, object>;
            level = SafeDictionary.GetValue<int>(dic, "level");
            rarity = SafeDictionary.GetValue<double>(dic, "rarity");
        }

        internal AchievementStats() { }
    }
}