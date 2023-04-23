using System.Collections;
using UnityEngine.UI;
using TapTap.UI;
using UnityEngine;
using UnityEngine.Networking;

namespace TapTap.Achievement.Standalone
{
    public class TapAchievementToast : BasePanelController
    {
        internal class OpenParams : AbstractOpenPanelParameter
        {
            internal TapAchievementBean data;
        }
        
        [SerializeField] private Text title;
        [SerializeField] private Text congratulationText;
        [SerializeField] private RawImage icon;
        [SerializeField] private Animation animation;

        private OpenParams param;

        protected override void OnLoadSuccess()
        {
            param = (openParam as OpenParams);
            InitContent();
            animation.Play("TapAchievementToastAC");
        }
        
        private void InitContent()
        {
            InitTitle();
            InitIcon();
        }
        
        private void InitTitle()
        {
            title.text = param.data.title;
            congratulationText.text = TapAchievementUtil.GetLocalizationItem().ToastCongra;
        }
        
        private void InitIcon()
        {
            SetIcon(param.data);
        }

        private async void SetIcon(TapAchievementBean data)
        {
            if (string.IsNullOrEmpty(data.achieveIcon)) return;
            
            var texture = await TapAchievementUtil.GetTextureFromUrl(data.displayId, data.achieveIcon);
            InternalSetIcon(texture);
        }
        
 
        private void InternalSetIcon(Texture iconTexture)
        {
            // 有可能等 Coroutine 结束的时候,已经 Close 了
            if (this == null) return;
            icon.texture = iconTexture;
        }

        private void OnPlayEnd()
        {
            Close();
            TapAchievementController.OnAchievementToastEnded();
        }
    }
}
