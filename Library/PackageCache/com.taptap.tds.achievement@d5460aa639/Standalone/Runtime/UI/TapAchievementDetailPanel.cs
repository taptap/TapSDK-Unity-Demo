using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TapTap.UI;
using TapTap.UI.AillieoTech;
using UnityEngine;
using UnityEngine.Networking;
using Random = UnityEngine.Random;

namespace TapTap.Achievement.Standalone
{
    public class TapAchievementDetailPanel : BasePanelController
    {
        internal class OpenParams : AbstractOpenPanelParameter
        {
            internal TapAchievementBean data;
            internal int unlockCount;
            internal int totalCount;
            internal TapAchievementPanel parent;
        }
        
        [SerializeField] private Text gameTitle;
        [SerializeField] private RawImage gameIcon;
        [SerializeField] private Text achGetDes;
        [SerializeField] private GameObject progressNode;
        [SerializeField] private Text progressTxt;
        [SerializeField] private RawImage completeIconImg;
        [SerializeField] private RawImage uncompleteIconImg;
        [SerializeField] private GameObject branch;
        [SerializeField] private Text rarityTxt;
        [SerializeField] private GameObject leftRarityRoots;
        [SerializeField] private GameObject rightRarityRoots;
        [SerializeField] private GameObject frameRoots;
        [SerializeField] private GameObject crown;
        [SerializeField] private Text[] titleTxts;
        [SerializeField] private Text[] desTxts;
        [SerializeField] private ScrollRect contentScrollView;
        [SerializeField] private RectTransform scrollViewContent;
        [SerializeField] private Text dateTimeTxt;
        [SerializeField] private Text reachPercentTxt;
        [SerializeField] private GameObject normalTextNode;
        [SerializeField] private GameObject hideTextNode;
        [SerializeField] private GameObject transparentPad;
        
        [SerializeField] private Button clickButton;
        [SerializeField] private Button closeButton;
        [SerializeField] private GameObject brandRoot;
        
        private OpenParams param;
        private float progress;

        private readonly Vector2 desExtents = new Vector2(1180, 115);
        
        protected override void OnLoadSuccess()
        {
            param = openParam as OpenParams;
            InitContent();
            clickButton.onClick.RemoveAllListeners();
            clickButton.onClick.AddListener(OnClick);
            closeButton.onClick.RemoveAllListeners();
            closeButton.onClick.AddListener(OnClick);
        }
        
        private void InitContent()
        {
            InitTitle();
            InitIcon();
            InitAchievementDescription();
            InitScrollView();
        }
        
        private void InitTitle()
        {
            gameTitle.text = TapAchievementUtil.GetApplicationName();
            gameIcon.texture = TapAchievementUtil.GetGameIcon();
            achGetDes.text = string.Format(TapAchievementUtil.GetLocalizationItem().DetailAchievementData, param.unlockCount.ToString(), param.totalCount.ToString());
        }
        
        private void InitIcon()
        {
            var data = param.data;
            progress = (float)data.reachedStep / data.step;
            SetProgress(data);
            SetIcon(data);
            SetRarity(data);
        }
        
        private void SetProgress(TapAchievementBean data)
        {
            bool needProgress = data.NeeShowProgress();
            progressNode.gameObject.SetActive(needProgress);
            progressTxt.text = string.Format($"{Mathf.FloorToInt(progress * 100)}");
        }
        
        private async void SetIcon(TapAchievementBean data)
        {
            if (string.IsNullOrEmpty(data.achieveIcon)) return;
            bool needProgress = data.NeeShowProgress();
            if (needProgress)
            {
                // 0.1 以下看不到,所以这里要把[0-1]映射成[0.115-1]
                var p = Mathf.Clamp01(progress);
                p = p * 0.885f + 0.115f;
                completeIconImg.gameObject.SetActive(true);
                uncompleteIconImg.gameObject.SetActive(true);
                completeIconImg.material = new Material(completeIconImg.material);
                completeIconImg.material.SetFloat("_Progress",Mathf.Clamp01(p));
            }
            else
            {
                var reached = data.IsFullReached() || !data.IsVisible();
                completeIconImg.gameObject.SetActive(reached);
                uncompleteIconImg.gameObject.SetActive(!reached);
            }
            crown.gameObject.SetActive(data.IsCanShow() && data.IsFullAchievement());
            Texture texture;
            if (!data.IsCanShow())
            {
                texture = TapAchievementUtil.GetHideAchievementIcon();
            }
            else
            {
                texture = await TapAchievementUtil.GetTextureFromUrl(data.displayId, data.achieveIcon);
            }
            InternalSetIcon(texture);
        }

        private void InternalSetIcon(Texture iconTexture)
        {
            if (this == null) return;
            completeIconImg.texture = iconTexture;
            uncompleteIconImg.texture = iconTexture;
        }
        
        private void SetRarity(TapAchievementBean data)
        {
            brandRoot.gameObject.SetActive(data.IsCanShow());
            // "level": "稀有度：1-普通，2-稀有，3-珍贵，4-极为珍贵"
            var level = data.stats == null ? "1" : data.stats.level.ToString();
            SetOneSideRarity(leftRarityRoots, level);
            SetOneSideRarity(rightRarityRoots, level);
            branch.gameObject.SetActive(level == "4");
            var t = TapAchievementUtil.GetRarityTitle(level);
            rarityTxt.enabled = false;
            rarityTxt.resizeTextForBestFit = !t.Contains(" ");
            rarityTxt.text = t;
            rarityTxt.enabled = true;
 
            for (int i = 1; i <= 4; i++)
            {
                var singleSideRarity = frameRoots.transform.Find(i.ToString());
                singleSideRarity.gameObject.SetActive(level == i.ToString());
            }
        }
        
        private void SetOneSideRarity(GameObject root, string level)
        {
            for (int i = 1; i <= 4; i++)
            {
                var singleSideRarity = root.transform.Find(i.ToString());
                singleSideRarity.gameObject.SetActive(true);
                singleSideRarity.transform.Find("Opaque").gameObject.SetActive(level == i.ToString());
            }
        }
        
        private void InitAchievementDescription()
        {
            var data = param.data;
            var titleContent = data.IsCanShow() ? data.title : TapAchievementUtil.GetLocalizationItem().InvisibleTitle;
            var desContent = data.IsCanShow() ? data.subTitle : TapAchievementUtil.GetLocalizationItem().InvisibleSubtitle;
            foreach (var titleTxt in titleTxts)
            {
                titleTxt.text = titleContent;
            }
            foreach (var desTxt in desTxts)
            {
                desTxt.text = desContent;
            }

            bool showPercent = data.IsCanShow() && data.stats != null && data.stats.rarity > 0;
            reachPercentTxt.gameObject.SetActive(showPercent);
            normalTextNode.gameObject.SetActive(showPercent);
            hideTextNode.gameObject.SetActive(!showPercent);
            if (showPercent)
            {
                var rarity = data.stats.rarity;
                var key = rarity < 0.001
                    ? TapAchievementUtil.GetLocalizationItem().DetailGetPercentlow
                    : TapAchievementUtil.GetLocalizationItem().DetailGetPercent;
                reachPercentTxt.text = string.Format(key, rarity.ToString("P2"));
            }
            dateTimeTxt.gameObject.SetActive(data.IsFullReached());
            DateTime dateTime = new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
            dateTime = dateTime.AddMilliseconds(data.reachedTime).ToLocalTime();
            string time = dateTime.ToString("yyyy.MM.dd");
            dateTimeTxt.text = string.Format(TapAchievementUtil.GetLocalizationItem().DetailGetDatetime, time);
            
        }
        
        
        private void InitScrollView()
        {
            StartCoroutine(InitScrollViewCoroutine());
        }
        
        private IEnumerator InitScrollViewCoroutine()
        {
            var data = param.data;
            var desContent = data.IsCanShow() ? data.subTitle : TapAchievementUtil.GetLocalizationItem().InvisibleSubtitle;
            var isNormalModel = data.IsCanShow() && data.stats.rarity > 0;
            var needEnableScrollView = false;
            var desTxt = desTxts[0];
            float height = 430;
            if (!string.IsNullOrWhiteSpace(desContent))
            {
                yield return new WaitForEndOfFrame();
                
                var settings = desTxt.GetGenerationSettings(desExtents);
                var textGenerator = desTxt.cachedTextGeneratorForLayout;
                textGenerator.GetPreferredWidth(desContent, settings);
                textGenerator.GetPreferredHeight(desContent, settings);
                int lineCount = textGenerator.lineCount;
                contentScrollView.enabled = isNormalModel ? (lineCount > 4) : (lineCount > 7);
                transparentPad.SetActive(contentScrollView.enabled);
                if (contentScrollView.enabled)
                {
                    var old = scrollViewContent.sizeDelta;
                    height = 430 + lineCount * 15;
                    scrollViewContent.sizeDelta = new Vector2(old.x, height);
                }
            }
            else
            {
                contentScrollView.enabled = false;
                transparentPad.SetActive(false);
            }
        }

        private void OnClick()
        {
            this.Close();
        }


    }
}
