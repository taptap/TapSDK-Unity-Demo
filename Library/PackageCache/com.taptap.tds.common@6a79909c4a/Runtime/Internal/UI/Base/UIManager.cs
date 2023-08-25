using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;

namespace TapTap.UI
{
    public class UIManager : MonoSingleton<UIManager>
    {
        public const int TOPPEST_SORTING_ORDER = 32767;

        private const int LOADING_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER;

        private const int TOAST_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER - 10;
        private const int TIP_PANEL_SORTING_ORDER = TOPPEST_SORTING_ORDER - 20;
        
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
            panel.Dispose();
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
        public void OpenToast(string text, float popupTime = 2.0f)
        {
            if (!string.IsNullOrEmpty(text) && popupTime > 0)
            {
                var toast = OpenUI<ToastPanelController>("Toast", new ToastPanelOpenParam(text, popupTime));
                if (toast != null)
                {
                    // toast.SetOpenOrder(TOAST_PANEL_SORTING_ORDER);
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
                var tip = OpenUI<TipPanelController>("Tip", new TipPanelOpenParam(text, textColor, textAnchor));
                if (tip != null)
                {
                    tip.transform.SetAsLastSibling();
                }
            }
        }
        
        /// <summary>
        /// open toast panel for tip info
        /// </summary>
        public async Task OpenToastAsync(string text, float popupTime = 2.0f)
        {
            if (!string.IsNullOrEmpty(text) && popupTime > 0)
            {
                var toast = await OpenUIAsync<ToastPanelController>("Toast", new ToastPanelOpenParam(text, popupTime));
                if (toast != null)
                {
                    // toast.SetOpenOrder(TOAST_PANEL_SORTING_ORDER);
                    toast.transform.SetAsLastSibling();
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
        
        internal Transform GetUIRootTransform(BasePanelController panel)
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