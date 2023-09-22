using System;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace TapTap.Login.Internal
{
    internal class UIManager : MonoBehaviour
    {
        public static readonly int RESULT_FAILED = -1;
        public static readonly int RESULT_SUCCESS = 0;
        public static readonly int RESULT_BACK = 1;
        public static readonly int RESULT_CLOSE = 2;

        private GameObject containerObj;


        private readonly List<UIElement> uiElements = new List<UIElement>();


        public void ShowQRCodeLogin<T>(Dictionary<string, object> configs, Action<int, object> callback)
            where T : UIElement
        {
            PushUIElement<T>("TapTapSdkQRCodeWindow", configs, callback);
        }

        private void PushUIElement<T>(string prefabName,
            Dictionary<string, object> extra,
            Action<int, object> callback) where T : UIElement
        {
            GameObject gameObj = Instantiate(Resources.Load("Prefabs/" + prefabName)) as GameObject;
            if (gameObj == null)
            {
                Debug.LogError("Could not find prefab named \"" + prefabName + "\"");
            }
            else
            {
                if (uiElements.Count == 0 && containerObj == null)
                {
                    CreateContainer();
                }

                gameObj.name = prefabName;
                DontDestroyOnLoad(gameObj);
                gameObj.AddComponent<T>();
                UIElement element = UIOperation.GetComponent<T>(gameObj);
                element.Manager = this;
                element.Extra = extra;
                element.Callback += callback;
                element.transform.SetParent(containerObj.transform, false);

                UIElement lastElement = null;
                if (uiElements.Count > 0)
                {
                    lastElement = uiElements[uiElements.Count - 1];
                }

                uiElements.Add(element);

                UIAnimator animator = UIOperation.GetComponent<UIAnimator>(containerObj);
                element.OnEnter();
                animator.DoEnterAnimation(lastElement, element, () =>
                {
                    if (lastElement != null)
                    {
                        lastElement.OnPause();
                    }
                });
            }
        }

        public void Pop()
        {
            PopUIElement(null);
        }

        private void PopUIElement(string targetName)
        {
            if (containerObj == null || uiElements.Count == 0)
            {
                Debug.LogError("No UIElement can be popped.");
            }
            else
            {
                UIElement element = uiElements[uiElements.Count - 1];

                if (targetName != null && !targetName.Equals(element.name))
                {
                    Debug.LogError("Could not find specify UIElement : " + targetName);
                    return;
                }

                uiElements.RemoveAt(uiElements.Count - 1);

                UIElement lastElement = null;
                if (uiElements.Count > 0)
                {
                    lastElement = uiElements[uiElements.Count - 1];
                }

                UIAnimator animator = UIOperation.GetComponent<UIAnimator>(containerObj);
                if (lastElement != null)
                {
                    lastElement.OnResume();
                }

                animator.DoExitAnimation(element, lastElement, () =>
                {
                    element.OnExit();
                    if (uiElements.Count == 0)
                    {
                        DestroyContainer();
                        Destroy(gameObject);
                    }
                });
            }
        }

        private void CreateContainer()
        {
            containerObj = Instantiate(Resources.Load("Prefabs/TapTapSdkWindow")) as GameObject;
            containerObj.name = "TapTapSdkWindow";
            DontDestroyOnLoad(containerObj);
            UIElement containerElement = UIOperation.GetComponent<ContainerWindow>(containerObj);
            UIAnimator containerAnimator = UIOperation.GetComponent<UIAnimator>(containerObj);
            containerElement.Manager = this;
            containerElement.OnEnter();
            containerAnimator.DoEnterAnimation(null, containerElement,
                () =>
                {
                    
                });
        }

        // ReSharper disable Unity.PerformanceAnalysis
        private void DestroyContainer()
        {
            if (containerObj != null)
            {
                UIElement containerElement = UIOperation.GetComponent<ContainerWindow>(containerObj);
                UIAnimator containerAnimator = UIOperation.GetComponent<UIAnimator>(containerObj);
                containerElement.OnEnter();
                containerAnimator.DoExitAnimation(containerElement, null, () =>
                {
                    Destroy(containerObj);
                    containerObj = null;
                });
            }
        }
    }
}