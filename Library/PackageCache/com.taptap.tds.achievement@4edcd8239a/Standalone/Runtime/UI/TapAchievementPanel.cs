using System;
using System.Collections.Generic;
using UnityEngine.UI;
using TapTap.UI;
using TapTap.UI.AillieoTech;
using UnityEngine;

namespace TapTap.Achievement.Standalone
{
    public class TapAchievementPanel : BasePanelController
    {
        internal class OpenParams : AbstractOpenPanelParameter
        {
            internal List<TapAchievementBean> lockAchievements;
            internal List<TapAchievementBean> unlockAchievements;
        }

        private const int MIN_ITEM_COUNT = 4;
        
        private Text currentTxt;
        private Text unlockTxt;
        private Text lockTxt;
        private RectTransform unlockScrollView;
        private RectTransform unlockNode;
        private RectTransform lockScrollView;
        private RectTransform lockNode;

        private OpenParams openParams;

        private Button backgroundBtn;
        private Button closeBtn;

        private ScrollRect contentScrollView;
        private RectTransform scrollContent;
        private RectTransform lockContent;
        private RectTransform unlockContent;

        
        protected override void BindComponents() 
        {
            scrollContent = transform.Find("Bg/Parts/Scroll View/Viewport/Content") as RectTransform;
            var titleNode = scrollContent.Find("Title");
            currentTxt = titleNode.Find("Current").GetComponent<Text>();
            contentScrollView = transform.Find("Bg/Parts/Scroll View").GetComponent<ScrollRect>();
            unlockNode = scrollContent.Find("UnlockPart") as RectTransform;
            unlockTxt = unlockNode.transform.Find("TitleText").GetComponent<Text>();
            lockNode = scrollContent.Find("LockPart") as RectTransform;
            lockTxt = lockNode.transform.Find("TitleText").GetComponent<Text>();
            unlockScrollView = unlockNode.transform.Find("AchievementContent") as RectTransform;
            lockScrollView = lockNode.transform.Find("AchievementContent") as RectTransform;
            backgroundBtn = transform.Find("Background").GetComponent<Button>();
            closeBtn = transform.Find("Bg/Close").GetComponent<Button>();

            lockContent = lockScrollView.Find("Viewport/Content") as RectTransform;
            unlockContent = unlockScrollView.Find("Viewport/Content") as RectTransform;
        }
        
        protected override void OnLoadSuccess() 
        {
            openParams = openParam as OpenParams;
            currentTxt.text = string.Format($"{UnlockItemCountFunc().ToString()}<size=21>/{(UnlockItemCountFunc()+LockItemCountFunc()).ToString()}</size>");
            
            unlockTxt.text = TapAchievementUtil.GetLocalizationItem().Unlock;
            lockTxt.text = TapAchievementUtil.GetLocalizationItem().Lock;

            int unlockCount = UnlockItemCountFunc();
            unlockNode.gameObject.SetActive(unlockCount > 0);
            // 没有已解锁
            if (unlockCount > 0)
            {
                var count = Math.Max(MIN_ITEM_COUNT, UnlockItemCountFunc());
                var remind = count % 4;
                int row;
                if (remind != 0)
                {
                    row = count / 4 + 1;
                    count = row * 4;
                }

                row = count / 4;

                CreateItem(count, unlockContent, openParams.unlockAchievements);

                var originSD = unlockContent.sizeDelta;
                // 8 是 gap,174 是 item 的高度
                unlockContent.sizeDelta = new Vector2(originSD.x, (174 + 8) * row + 8);
                
                var originPos = unlockNode.anchoredPosition;
                var offset = (174 + 8) * row + 8 + 74;
                lockNode.anchoredPosition = new Vector2(originPos.x, originPos.y - offset);
            }
            
            int lockCount = LockItemCountFunc();
            lockNode.gameObject.SetActive(lockCount > 0);

            if (lockCount > 0)
            {
                var count = Math.Max(MIN_ITEM_COUNT, LockItemCountFunc());
                var remind = count % 4;
                int row;
                if (remind != 0)
                {
                    row = count / 4 + 1;
                    count = row * 4;
                }

                row = count / 4;

                CreateItem(count, lockContent, openParams.lockAchievements);

                var originSD = lockContent.sizeDelta;
                // 8 是 gap,174 是 item 的高度
                lockContent.sizeDelta = new Vector2(originSD.x, (174 + 8) * row + 8);
            }
            
            backgroundBtn.onClick.RemoveAllListeners();
            backgroundBtn.onClick.AddListener(Close);
            closeBtn.onClick.RemoveAllListeners();
            closeBtn.onClick.AddListener(Close);

            contentScrollView.enabled = lockCount > 4 || unlockCount > 4;

            var originScrollContentSD = scrollContent.sizeDelta;
            float gap = 0;
            float unlockHeight = 0;
            float addin = 220;
            if (unlockCount > 0)
            {
                // 226
                gap = Mathf.Abs(unlockNode.anchoredPosition.y - lockNode.anchoredPosition.y) - Mathf.Abs(unlockNode.anchoredPosition.y);
                // 386
                unlockHeight = Mathf.Max(unlockNode.sizeDelta.y, unlockNode.sizeDelta.y);
            }
            // 1100
            var lockHeight = Mathf.Max(lockNode.sizeDelta.y, lockContent.sizeDelta.y);
            // 1712
            var totalHeight = Mathf.Abs(lockHeight) + gap + Mathf.Abs(unlockHeight) + addin;
            scrollContent.sizeDelta =
                new Vector2(originScrollContentSD.x, Mathf.Max(500, totalHeight));
        }

        protected override void OnShowEffectStart()
        {
            StopAllCoroutines();
            base.OnShowEffectStart();
        }

        protected override void OnCloseEffectEnd()
        {
            base.OnCloseEffectEnd();
            StopAllCoroutines();
        }

        private void CreateItem(int count, RectTransform parent, List<TapAchievementBean> dataList)
        {
            var itemPrefab = Resources.Load<GameObject>("Prefabs/TapAchievementItem");
            for (int i = 0; i < count; i++)
            {
                TapAchievementBean data = null;
                if (dataList != null && i >= 0 && i < dataList.Count) data = dataList[i];
                var newGo = GameObject.Instantiate(itemPrefab, parent);
                newGo.SetActive(true);
                var itemScript = newGo.GetComponent<TapAchievementItem>();
                itemScript.Init(this, data);
            }
        }
        
        private int UnlockItemCountFunc()
        {
            return openParams.unlockAchievements?.Count ?? 0;
        }
        
        private int LockItemCountFunc()
        {
            return openParams.lockAchievements?.Count ?? 0;
        }
        
        internal void OnClickDetailItem(TapAchievementBean data)
        {
            var openParams = new TapAchievementDetailPanel.OpenParams()
                { data = data, unlockCount = UnlockItemCountFunc(), totalCount = UnlockItemCountFunc()+LockItemCountFunc(), parent = this};
            UIManager.Instance
                .OpenUI<TapAchievementDetailPanel>("Prefabs/TapAchievementDetailPanel", openParams);
        }
    }
}
