using System;
using System.Collections;
using System.Threading.Tasks;
using TapTap.UI;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using Random = UnityEngine.Random;

namespace TapTap.Achievement.Standalone
{
    public class TapAchievementItem : MonoBehaviour
    {
        [SerializeField] private GameObject invalidNode;
        [SerializeField] private GameObject validNode;
        [SerializeField] private Text titleTxt;
        [SerializeField] private Text desTxt;
        [SerializeField] private GameObject progressNode;
        [SerializeField] private Text progressTxt;
        [SerializeField] private RawImage completeIconImg;
        [SerializeField] private RawImage uncompleteIconImg;
        // 橄榄枝
        [SerializeField] private GameObject branch;
        [SerializeField] private Text rarityTxt;
        [SerializeField] private GameObject leftRarityRoots;
        [SerializeField] private GameObject rightRarityRoots;
        [SerializeField] private GameObject frameRoots;
        [SerializeField] private GameObject crown;
        [SerializeField] private Button clickButton;
        [SerializeField] private GameObject brandRoot;

        private TapAchievementPanel parent;
        private float progress;
        private TapAchievementBean data;
        
        public void Init(TapAchievementPanel parentPanel, TapAchievementBean data)
        {
            parent = parentPanel;
            invalidNode.gameObject.SetActive(data == null);
            validNode.gameObject.SetActive(data != null);
            if (data == null) return;
            this.data = data;
            InitContent(data);
            clickButton.onClick.RemoveAllListeners();
            clickButton.onClick.AddListener(OnClick);
        }

        private void InitContent(TapAchievementBean data)
        {
            if (!data.IsCanShow())
            {
                titleTxt.text = TapAchievementUtil.GetLocalizationItem().InvisibleTitle;
                desTxt.text = TapAchievementUtil.GetLocalizationItem().InvisibleSubtitle;
            }
            else
            {
                titleTxt.text = data.title;
                desTxt.text = data.subTitle;
            }
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
                completeIconImg.gameObject.SetActive(true);
                uncompleteIconImg.gameObject.SetActive(true);
                // 0.1 以下看不到,所以这里要把[0-1]映射成[0.1-1]
                var p = Mathf.Clamp01(progress);
                p = p * 0.9f + 0.1f;
                completeIconImg.material = new Material(completeIconImg.material);
                completeIconImg.material.SetFloat("_Progress",p);
            }
            else
            {
                var reached = data.IsFullReached() || !data.IsVisible();
                completeIconImg.gameObject.SetActive(reached);
                uncompleteIconImg.gameObject.SetActive(!reached);
                completeIconImg.material.SetFloat("_Progress",1);
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
            branch.gameObject.SetActive(data.IsCanShow() && level == "4");
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

        private void OnClick()
        {
            parent.OnClickDetailItem(data);

        }
    }
}