using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using TapTap.Bootstrap;
using TapTap.Common;
using UnityEngine;

namespace TapTap.Achievement
{
    public interface ITapAchievement
    {
        void Init(TapConfig tapConfig);

        void InitData();

        void RegisterCallback(IAchievementCallback callback);

        Task<List<TapAchievementBean>> FetchAllAchievementList();

        Task<List<TapAchievementBean>> GetLocalAllAchievementList();

        Task<List<TapAchievementBean>> GetLocalUserAchievementList();

        Task<List<TapAchievementBean>> FetchUserAchievementList();

        void FetchAllAchievementList(Action<List<TapAchievementBean>, TapError> action);

        void GetLocalAllAchievementList(Action<List<TapAchievementBean>, TapError> action);

        void GetLocalUserAchievementList(Action<List<TapAchievementBean>, TapError> action);

        void FetchUserAchievementList(Action<List<TapAchievementBean>, TapError> action);

        void Reach(string id);

        void GrowSteps(string id, int step);

        void MakeSteps(string id, int step);

        void ShowAchievementPage();

        void SetShowToast(bool showToast);

        void SetApplicationName(string name);

        void SetApplicationIcon(Texture2D iconTexuture);
    }




    public static class TapAchievementConstants
    {
        public static readonly string TapAchievementService = "TDSAchievementService";

        public static readonly string TapAchievementClz = "com.tds.achievement.wrapper.TDSAchievementService";

        public static readonly string TapAchievementImpl = "com.tds.achievement.wrapper.TDSAchievementServiceImpl";
    }
}