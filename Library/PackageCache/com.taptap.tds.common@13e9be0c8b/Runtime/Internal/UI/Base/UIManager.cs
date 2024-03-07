using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

namespace TapTap.UI
{
    public class UIManager : MonoSingleton<UIManager>
    {
        public enum GeneralToastLevel {
            None = 0,
            Info = 1,
            Warning = 2,
            Error = 3,
            Success =4,
        }
        
        private class ToastConfig {
            public bool white;
            public string text;
            public float popupTime;
            public Texture icon;
        }
        
        private static Texture whiteToastSuccessIcon;
        private static Texture whiteToastErrorIcon;
        private static Texture whiteToastInfoIcon;
        private static Texture whiteToastWarningIcon;
        private static Texture taptapToastIcon;

        public static Texture WhiteToastSuccessIcon {
            get {
                if (whiteToastSuccessIcon == null)
                    whiteToastSuccessIcon = UnityEngine.Resources.Load<Texture>("taptap-toast-success");
                return whiteToastSuccessIcon;
            }
        }
        
        public static Texture WhiteToastErrorIcon {
            get {
                if (whiteToastErrorIcon == null)
                    whiteToastErrorIcon = UnityEngine.Resources.Load<Texture>("taptap-toast-error");
                return whiteToastErrorIcon;
            }
        }
        
        public static Texture WhiteToastWarningIcon {
            get {
                if (whiteToastWarningIcon == null)
                    whiteToastWarningIcon = UnityEngine.Resources.Load<Texture>("taptap-toast-warning");
                return whiteToastWarningIcon;
            }
        }
        
        public static Texture WhiteToastInfoIcon {
            get {
                if (whiteToastInfoIcon == null)
                    whiteToastInfoIcon = UnityEngine.Resources.Load<Texture>("taptap-toast-info");
                return whiteToastInfoIcon;
            }
        }
        
        public static Texture TapTapToastIcon {
            get {
                if (taptapToastIcon == null)
                    taptapToastIcon = Resources.Load<Texture>("TapSDKCommonTapIcon-v2");
                return taptapToastIcon;
            }
        }

        private List<ToastConfig> _toastCacheData = new List<ToastConfig>(12);
        public const int TOPPEST_SORTING_ORDER = 32767;

        private const int LOADING_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER;

        private const int TOAST_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER - 10;
        private const int TIP_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER - 20;

        private const int REFERENCE_WIDTH = 1920;
        private const int REFERENCE_HEIGHT = 1080;
        
        private readonly Dictionary<Type, BasePanelController> _registerPanels = new Dictionary<Type, BasePanelController>();

        // uicamera
        private Camera _uiCamera;

        private GameObject _uiRoot;
        private GameObject _uiConstantRoot;
        private Canvas _uiRootCanvas;

        public Camera UiCamera => _uiCamera;

        public override void Init()
        {
            if (_uiRoot == null  && Application.isPlaying)
            {
                CreateUIRoot();
            }
        }

        private void CreateUIRoot()
        {
            _uiRoot = Instantiate(Resources.Load<GameObject>("TapSDKUIRoot"));
            DontDestroyOnLoad(_uiRoot);
            var canvas = _uiRoot.GetComponent<Canvas>();
            _uiCamera = canvas.renderMode == RenderMode.ScreenSpaceOverlay ? Camera.main : canvas.worldCamera;
            _uiRoot.transform.SetParent(UIManager.Instance.transform);
            _uiRootCanvas = _uiRoot.transform.GetComponent<Canvas>();

            CanvasScaler scaler = _uiRoot.GetComponent<CanvasScaler>();
            scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            scaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
            scaler.referenceResolution = new Vector2(REFERENCE_WIDTH, REFERENCE_HEIGHT);
            float referenceRatio = REFERENCE_WIDTH * 1.0f / REFERENCE_HEIGHT;
            float screenRatio = Screen.width * 1.0f / Screen.height;
            scaler.matchWidthOrHeight = screenRatio > referenceRatio ? 1 : 0;

            _uiConstantRoot = Instantiate(Resources.Load<GameObject>("TapSDKConstantUIRoot"));
            DontDestroyOnLoad(_uiConstantRoot);
            canvas = _uiConstantRoot.GetComponent<Canvas>();
            _uiCamera = canvas.renderMode == RenderMode.ScreenSpaceOverlay ? Camera.main : canvas.worldCamera;
            _uiConstantRoot.transform.SetParent(UIManager.Instance.transform);
            _uiRootCanvas = _uiConstantRoot.transform.GetComponent<Canvas>();
        }

        public override void Uninit()
        {
            _uiCamera = null;
            _uiRoot = null;
            _uiConstantRoot = null;
            _uiRootCanvas = null;
            base.Uninit();
        }

        /// <summary>
        /// Get Or Create UI asynchronously
        /// </summary>
        /// <param name="path">the prefab path</param>
        /// <param name="param">opening param</param>
        /// <param name="onAsyncGet">if u want to get ui do something,here is for u, which is invoked after BasePanelController.OnLoadSuccess</param>
        /// <typeparam name="TPanelController"></typeparam>
        /// <returns>get panel instance if sync mode load</returns>
        public async Task<TPanelController> OpenUIAsync<TPanelController>(string path, AbstractOpenPanelParameter param = null, Action<BasePanelController> onAsyncGet = null) where TPanelController : BasePanelController
        {
            var basePanelController = GetUI<TPanelController>();

            // 如果已有界面(之前缓存过的),则不执行任何操作
            if (basePanelController != null)
            {
                if (!basePanelController.canvas.enabled)
                {
                    basePanelController.canvas.enabled = true;
                }

                onAsyncGet?.Invoke(basePanelController);

                return basePanelController;
            }
            
            ResourceRequest request = Resources.LoadAsync<GameObject>(path);
            while (request.isDone == false)
            {
                await Task.Yield();
            }
            
            GameObject go = request.asset as GameObject;
            var basePanel = Instantiate(go).GetComponent<TPanelController>();
            if (basePanel != null)
            {
                var prefabRectTransform = basePanel.transform as RectTransform;
                var anchorMin = prefabRectTransform.anchorMin;
                var anchorMax = prefabRectTransform.anchorMax;
                var anchoredPosition = prefabRectTransform.anchoredPosition;
                var sizeDelta = prefabRectTransform.sizeDelta;
                
                InternalOnPanelLoaded(typeof(TPanelController), basePanel, param);   
                if (IsNeedCorrectRectTransform(basePanel))
                {
                    var panelRectTransform = basePanel.transform as RectTransform;
                    panelRectTransform.anchorMin = anchorMin;
                    panelRectTransform.anchorMax = anchorMax;
                    panelRectTransform.anchoredPosition = anchoredPosition;
                    panelRectTransform.sizeDelta = sizeDelta;
                }
                onAsyncGet?.Invoke(basePanel);
                
                EnsureSpecialPanel();
                return basePanel;
            }
            else
            {
                return null;
            }
        }
        
        /// <summary>
        /// Get Or Create UI asynchronously
        /// </summary>
        /// <param name="panelType">the panel Type</param>
        /// <param name="path">the prefab path</param>
        /// <param name="param">opening param</param>
        /// <param name="onAsyncGet">if u want to get ui do something,here is for u, which is invoked after BasePanelController.OnLoadSuccess</param>
        /// <returns>get panel instance if sync mode load</returns>
        public async Task<BasePanelController> OpenUIAsync(Type panelType, string path, AbstractOpenPanelParameter param = null, Action<BasePanelController> onAsyncGet = null)
        {
            if (!typeof(BasePanelController).IsAssignableFrom(panelType))
            {
                return null;
            }
            var basePanelController = GetUI(panelType);

            // 如果已有界面(之前缓存过的),则不执行任何操作
            if (basePanelController != null)
            {
                if (!basePanelController.canvas.enabled)
                {
                    basePanelController.canvas.enabled = true;
                }

                onAsyncGet?.Invoke(basePanelController);

                return basePanelController;
            }
            
            ResourceRequest request = Resources.LoadAsync<GameObject>(path);
            while (request.isDone == false)
            {
                await Task.Yield();
            }
            
            GameObject go = request.asset as GameObject;
            var basePanel = Instantiate(go).GetComponent<BasePanelController>();
            if (basePanel != null)
            {
                var prefabRectTransform = basePanel.transform as RectTransform;
                var anchorMin = prefabRectTransform.anchorMin;
                var anchorMax = prefabRectTransform.anchorMax;
                var anchoredPosition = prefabRectTransform.anchoredPosition;
                var sizeDelta = prefabRectTransform.sizeDelta;
                
                InternalOnPanelLoaded(panelType, basePanel, param);    
                if (IsNeedCorrectRectTransform(basePanel))
                {
                    var panelRectTransform = basePanel.transform as RectTransform;
                    panelRectTransform.anchorMin = anchorMin;
                    panelRectTransform.anchorMax = anchorMax;
                    panelRectTransform.anchoredPosition = anchoredPosition;
                    panelRectTransform.sizeDelta = sizeDelta;
                }
                onAsyncGet?.Invoke(basePanel);
                
                EnsureSpecialPanel();
                return basePanel;
            }
            else
            {
                return null;
            }
        }

        /// <summary>
        /// Get Or Create UI
        /// </summary>
        /// <param name="path">the prefab path</param>
        /// <param name="param">opening param</param>
        /// <typeparam name="TPanelController"></typeparam>
        /// <returns>get panel instance if sync mode load</returns>
        public TPanelController OpenUI<TPanelController>(string path, AbstractOpenPanelParameter param = null) where TPanelController : BasePanelController
        {
            TPanelController basePanelController = GetUI<TPanelController>();

            // 如果已有界面(之前缓存过的),则不执行任何操作
            if (basePanelController != null)
            {
                if (!basePanelController.canvas.enabled)
                {
                    basePanelController.canvas.enabled = true;
                }

                return basePanelController;
            }

            var go = Resources.Load(path) as GameObject;
            if (go != null)
            {
                var prefabRectTransform = go.transform as RectTransform;
                var anchorMin = prefabRectTransform.anchorMin;
                var anchorMax = prefabRectTransform.anchorMax;
                var anchoredPosition = prefabRectTransform.anchoredPosition;
                var sizeDelta = prefabRectTransform.sizeDelta;
                
                GameObject panelGo = GameObject.Instantiate(go);
                
                var basePanel = panelGo.GetComponent<TPanelController>();
                if (basePanel == null) {
                    basePanel = panelGo.AddComponent<TPanelController>();
                }
                _registerPanels.Add(typeof(TPanelController), basePanel);
                
                basePanel.transform.SetAsLastSibling();
                if (IsNeedCorrectRectTransform(basePanel))
                {
                    var panelRectTransform = basePanel.transform as RectTransform;
                    panelRectTransform.anchorMin = anchorMin;
                    panelRectTransform.anchorMax = anchorMax;
                    panelRectTransform.anchoredPosition = anchoredPosition;
                    panelRectTransform.sizeDelta = sizeDelta;
                }
                
                basePanel.OnLoaded(param);
                
                EnsureSpecialPanel();
                return basePanel;
            }
            return null;
        }

        /// <summary>
        /// Get Or Create UI
        /// </summary>
        /// <param name="panelType">panel type MUST based on BasePanelController</param>
        /// <param name="path">the prefab path</param>
        /// <param name="param">opening param</param>
        /// <returns>get panel instance if sync mode load</returns>
        public BasePanelController OpenUI(Type panelType, string path, AbstractOpenPanelParameter param = null)
        {
            if (!typeof(BasePanelController).IsAssignableFrom(panelType))
            {
                return null;
            }
            var basePanelController = GetUI(panelType);

            // 如果已有界面(之前缓存过的),则不执行任何操作
            if (basePanelController != null)
            {
                if (basePanelController != null && !basePanelController.canvas.enabled)
                {
                    basePanelController.canvas.enabled = true;
                }
                
                return basePanelController;
            }

            var panelGo = Resources.Load(path) as GameObject;
            if (panelGo != null)
            {
                var prefabRectTransform = panelGo.transform as RectTransform;
                var anchorMin = prefabRectTransform.anchorMin;
                var anchorMax = prefabRectTransform.anchorMax;
                var anchoredPosition = prefabRectTransform.anchoredPosition;
                var sizeDelta = prefabRectTransform.sizeDelta;
                
                var basePanel = GameObject.Instantiate(panelGo).GetComponent<BasePanelController>();

                _registerPanels.Add(panelType, basePanel);

                // basePanel.SetOpenOrder(uiOpenOrder);
                basePanel.transform.SetAsLastSibling();
                
                if (IsNeedCorrectRectTransform(basePanel))
                {
                    var panelRectTransform = basePanel.transform as RectTransform;
                    panelRectTransform.anchorMin = anchorMin;
                    panelRectTransform.anchorMax = anchorMax;
                    panelRectTransform.anchoredPosition = anchoredPosition;
                    panelRectTransform.sizeDelta = sizeDelta;
                }
                basePanel.OnLoaded(param);

                EnsureSpecialPanel();
                return basePanel;
            }
            return null;
        }

        public BasePanelController GetUI(Type panelType)
        {
            if (!typeof(BasePanelController).IsAssignableFrom(panelType))
            {
                return null;
            }

            if (_registerPanels.TryGetValue(panelType, out BasePanelController basePanelController))
            {
                return basePanelController;
            }

            return null;
        }

        public TPanelController GetUI<TPanelController>() where TPanelController : BasePanelController
        {
            Type panelType = typeof(TPanelController);

            if (_registerPanels.TryGetValue(panelType, out BasePanelController panel))
            {
                return (TPanelController)panel;
            }
                
            return null;
        }

        public bool CloseUI(Type panelType)
        {
            if (!typeof(BasePanelController).IsAssignableFrom(panelType))
            {
                return false;
            }
            BasePanelController baseController = GetUI(panelType);
            if (baseController != null)
            {
                if (panelType == typeof(BasePanelController))     // 标尺界面是测试界面 不用关闭
                    return false;
                else
                    baseController.Close();
                return true;
            }
            return false;
        }

        public bool CloseUI<TPanelController>() where TPanelController : BasePanelController
        {
            TPanelController panel = GetUI<TPanelController>();
            if (panel != null)
            {
                panel.Close();
                return true;
            }
            return false;
        }
        
        /// <summary>
        /// add ui would invoked after create ui automatically, don't need mannually call it in most case
        /// </summary>
        public void AddUI(BasePanelController panel)
        {
            if (panel == null)
            {
                return;
            }
            var rt = panel.transform as RectTransform;
            Vector2 cacheAP = Vector2.zero;
            Vector2 cacheOffsetMax = Vector2.zero;
            Vector2 cacheOffsetMin = Vector2.zero;
            Vector2 cacheSizeDelta = Vector2.zero;
            if (rt != null)
            {
                cacheAP = rt.anchoredPosition;
                cacheOffsetMax = rt.offsetMax;
                cacheOffsetMin = rt.offsetMin;
                cacheSizeDelta = rt.sizeDelta;
            }
            panel.transform.SetParent(panel.AttachedParent);
            if (rt != null)
            {
                rt.anchoredPosition = cacheAP;
                rt.offsetMax = cacheOffsetMax;
                rt.offsetMin = cacheOffsetMin;
                rt.sizeDelta = cacheSizeDelta;
            }
            panel.transform.localScale = Vector3.one;
            panel.transform.localRotation = Quaternion.identity;
            panel.gameObject.name = panel.gameObject.name.Replace("(Clone)", "");
        }

        /// <summary>
        /// remove ui would invoked automatically, don't need mannually call it in most case
        /// </summary>
        public void RemoveUI(BasePanelController panel)
        {
            if (panel == null)
            {
                return;
            }
            Type panelType = panel.GetType();
            if (_registerPanels.ContainsKey(panelType))
            {
                _registerPanels.Remove(panelType);
            }

            if (panelType == typeof(ToastBlackPanelController) || panelType == typeof(ToastWhitePanelController)) {
                CheckToastCache();
            }
            
            panel.Dispose();
        }

        private void CheckToastCache() {
            if (_toastCacheData.Count > 0) {
                var config = _toastCacheData[0];
                InternalOpenToast(config.white, config.text, config.popupTime, config.icon);
                _toastCacheData.RemoveAt(0);
            }
        }

        /// <summary>
        /// take some ui to the most top layer
        /// </summary>
        /// <param name="panelType"></param>
        public void ToppedUI(Type panelType)
        {
            if (!typeof(BasePanelController).IsAssignableFrom(panelType))
            {
                return;
            }
            ToppedUI(GetUI(panelType));
        }

        /// <summary>
        /// take some ui to the most top layer
        /// </summary>
        /// <param name="panel"></param>
        /// <param name="toppedSepcialUI">特殊 UI(Loading,Toast之类) 是否需要重新制定</param>
        public void ToppedUI(BasePanelController panel, bool toppedSepcialUI = true)
        {
            if (panel == null)
            {
                return;
            }

            // panel.SetOpenOrder(uiOpenOrder);
            panel.transform.SetAsLastSibling();
            if (toppedSepcialUI) EnsureSpecialPanel();
        }
        
        /// <summary>
        /// open toast panel for tip info
        /// </summary>
        public void OpenToast(bool white, string text, float popupTime = 3.0f, Texture icon = null) {
            // print this function parameters
            if (!string.IsNullOrEmpty(text) && popupTime > 0) {
                bool isShowing = GetUI<ToastWhitePanelController>() != null || GetUI<ToastBlackPanelController>() != null;
                if (ToastTryMerge(white, text, popupTime, icon)) {
                    return;
                }
                if (isShowing) {
                    var config = new ToastConfig() {
                        white = white,
                        text = text,
                        popupTime = popupTime,
                        icon = icon,
                    };
                    _toastCacheData.Add(config);
                }
                else {
                    InternalOpenToast(white, text, popupTime, icon);
                }
            }
        }

        private bool ToastTryMerge(bool white, string text, float popupTime, Texture icon) {
            var currentToastPanel = GetUI<ToastWhitePanelController>();
            if (currentToastPanel?.toastParam != null) {
                var param = currentToastPanel?.toastParam;
                // 目前只有白色 Toast 进行 Merge
                bool sameToast = param.icon == icon && param.text == text && white;
                if (sameToast) {
                    currentToastPanel.Refresh(popupTime);
                    return true;
                }
            }

            return false;
        }
        
        /// <summary>
        /// 打开通用 Toast(白色底)
        /// </summary>
        /// <param name="text"></param>
        /// <param name="toastLevel">设置 Toast 提示级别,会展示提示图片,如果不想要提示图片,请使用 GeneralToastLevel.None</param>
        /// <param name="popupTime"></param>
        public void OpenToast(string text, GeneralToastLevel toastLevel, float popupTime = 3.0f) {
            OpenToast(true, text, popupTime, GetToastIcon(toastLevel));
        }

        private Texture GetToastIcon(GeneralToastLevel toastLevel) {
            if (toastLevel == GeneralToastLevel.None)
                return null;
            switch (toastLevel) {
                case GeneralToastLevel.Info:
                    return UIManager.WhiteToastInfoIcon;
                case GeneralToastLevel.Warning:
                    return UIManager.WhiteToastWarningIcon;
                case GeneralToastLevel.Error:
                    return UIManager.WhiteToastErrorIcon;
                case GeneralToastLevel.Success:
                    return UIManager.WhiteToastSuccessIcon;
            }

            return null;
        }

        private void InternalOpenToast(bool white, string text, float popupTime, Texture icon) {
            if (string.IsNullOrEmpty(text) || popupTime <= 0) return;
            if (white) {
                var toast = OpenUI<ToastWhitePanelController>("TapCommonToastWhite", new ToastPanelOpenParam(text, popupTime, icon));
                if (toast != null) {
                    toast.transform.SetAsLastSibling();
                }
            }
            else {
                var toast = OpenUI<ToastBlackPanelController>("TapCommonToastBlack", new ToastPanelOpenParam(text, popupTime, icon));
                if (toast != null) {
                    toast.transform.SetAsLastSibling();
                }
            }
        }
        
        /// <summary>
        /// open toast panel for tip info
        /// </summary>
        public void OpenTip(string text, Color textColor, TextAnchor textAnchor = TextAnchor.MiddleCenter)
        {
            if (!string.IsNullOrEmpty(text))
            {
                Debug.LogFormat($"[UIManager] Call OpenTip text:{text} ");
                var tip = OpenUI<TipPanelController>("TapCommonTip", new TipPanelOpenParam(text, textColor, textAnchor));
                if (tip != null)
                {
                    tip.transform.SetAsLastSibling();
                }
            }
        }
        
        /// <summary>
        /// open loading panel that would at the toppest layer and block interaction
        /// </summary>
        public void OpenLoading()
        {
            var loadingPanel = OpenUI<LoadingPanelController>("Loading");
            if (loadingPanel != null)
            {
                // https://www.reddit.com/r/Unity3D/comments/2b1g1l/order_in_layer_maximum_value/
                // loadingPanel.SetOpenOrder(LOADING_PANEL_SORTING_ORDER);
                loadingPanel.transform.SetAsLastSibling();
            }
        }
        
        /// <summary>
        /// open loading panel that would at the toppest layer and block interaction
        /// </summary>
        public async Task OpenLoadingAsync()
        {
            var loadingPanel = await OpenUIAsync<LoadingPanelController>("Loading");
            if (loadingPanel != null)
            {
                // https://www.reddit.com/r/Unity3D/comments/2b1g1l/order_in_layer_maximum_value/
                // loadingPanel.SetOpenOrder(LOADING_PANEL_SORTING_ORDER);
                loadingPanel.transform.SetAsLastSibling();
            }
        }

        public void CloseLoading()
        {
            var loadingPanel = GetUI<LoadingPanelController>();
            if (loadingPanel != null)
            {
                loadingPanel.Close();
            }
        }
        
        public void CloseTip()
        {
            var panel = GetUI<TipPanelController>();
            if (panel != null)
            {
                panel.Close();
            }
        }

        private bool IsNeedCorrectRectTransform(BasePanelController controller)
        {
            if (controller == null) return false;
            return (controller.panelConfig.animationType & EAnimationMode.RightSlideIn) == EAnimationMode.None;
        }

        private void InternalOnPanelLoaded(Type tPanelController, BasePanelController basePanel, AbstractOpenPanelParameter param = null)
        {
            _registerPanels.Add(tPanelController, basePanel);

            basePanel.OnLoaded(param);
            
            // basePanel.SetOpenOrder(uiOpenOrder);
            
            basePanel.transform.SetAsLastSibling();
        }

        private void EnsureSpecialPanel()
        {
            var temp = _registerPanels.Where(panel =>
                panel.Value != null && panel.Value.gameObject.activeInHierarchy && panel.Value.toppedOrder != 0);
            var toppedPanels = new List<KeyValuePair<Type,BasePanelController>>(temp);
            if (toppedPanels.Count == 0) return;
            toppedPanels.Sort((x,y)=>x.Value.toppedOrder.CompareTo(y.Value.toppedOrder));
            foreach (var toppedPanel in toppedPanels)
            {
                toppedPanel.Value.transform.SetAsLastSibling();
            }
        }
        
        public Transform GetUIRootTransform(BasePanelController panel)
        {
            if (panel?.openParam != null && panel.openParam.NeedConstantResolution)
                return _uiConstantRoot.transform;
            else
                return _uiRoot.transform;
        }

        
        #region external api
        public void SetSortOrder(int order)
        {
            _uiRootCanvas.sortingOrder = order;
        }

        public Camera GetUICamera()
        {
            return _uiCamera;
        }
        #endregion
    }
}