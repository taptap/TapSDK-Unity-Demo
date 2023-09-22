using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TapTap.Login.Internal
{
    internal class UIElement : UIBase
	{

        protected Dictionary<string, object> extra = null;
        public event Action<int, object> Callback;

        protected bool animationLaunched = false;
        protected float transitionDurationTime = 0.2f;

        private static readonly int animType = 0;

        public virtual Dictionary<string, object> Extra
        {
            get
            {
                return extra;
            }

            set
            {
                extra = value;
            }
        }

        public UIManager Manager { set; private get; }

        public void ClearCallback()
        {
            Callback = null;
        }

        protected virtual void OnCallback(int code, object data)
        {
            if (Callback != null)
            {
                Callback(code, data);
            }
        }

        protected UIManager GetUIManager()
        {
            return Manager;
        }

        protected internal virtual float DoPauseAnimation()
        {
            return 0f;
        }

        protected internal virtual float DoResumeAnimation()
        {
            return 0f;
        }

        protected internal virtual float DoExitAnimation()
        {
            StartCoroutine(PlayExit());
            return transitionDurationTime;
        }

        protected internal virtual float DoEnterAnimation()
        {
            StartCoroutine(PlayEnter());
            return transitionDurationTime;
        }

        // ReSharper disable Unity.PerformanceAnalysis
        public virtual IEnumerator PlayExit()
        {
            if (animType == 0)
            {
                if (!animationLaunched)
                {
                    animationLaunched = true;
                    float startTime = Time.time;
                    float endTime = startTime + transitionDurationTime;
                    CanvasGroup canvasGroup = UIOperation.GetComponent<CanvasGroup>(gameObject);
                    canvasGroup.alpha = 1f;
                    while (Time.time < endTime)
                    {
                        yield return new WaitForEndOfFrame();
                        float delta = (Time.time - startTime) / transitionDurationTime;
                        canvasGroup.alpha = 1 - delta;
                    }
                }
                animationLaunched = false;
                yield return null;
            }
            else
            {
                if (!animationLaunched)
                {
                    animationLaunched = true;
                    float startTime = Time.time;
                    float endTime = startTime + transitionDurationTime;
                    RectTransform rectTransform = transform.GetComponent<RectTransform>();
                    float targetX = rectTransform.position.x + Screen.width / 2 + rectTransform.rect.width / 2 + 200;
                    Vector3 startV3 = new Vector3(
                        rectTransform.position.x,
                        rectTransform.position.y,
                        rectTransform.position.z
                    );
                    rectTransform.position = startV3;
                    while (Time.time < endTime)
                    {
                        yield return new WaitForEndOfFrame();
                        float delta = (Time.time - startTime) / transitionDurationTime;
                        Vector3 currentV3 = new Vector3(
                            rectTransform.position.x + (targetX - rectTransform.position.x) * delta,
                            rectTransform.position.y,
                            rectTransform.position.z
                        );
                        rectTransform.position = currentV3;
                    }
                }
                animationLaunched = false;
                yield return null;
            }

        }

        public virtual IEnumerator PlayEnter()
        {
            if (animType == 0)
            {
                if (!animationLaunched)
                {
                    animationLaunched = true;
                    float startTime = Time.time;
                    float endTime = startTime + transitionDurationTime;
                    CanvasGroup canvasGroup = UIOperation.GetComponent<CanvasGroup>(gameObject);
                    canvasGroup.alpha = 0f;
                    while (Time.time < endTime)
                    {
                        yield return new WaitForEndOfFrame();
                        float delta = (Time.time - startTime) / transitionDurationTime;
                        canvasGroup.alpha = delta;
                    }
                }
                animationLaunched = false;
                yield return null;
            }
            else
            {
                if (!animationLaunched)
                {
                    animationLaunched = true;
                    float startTime = Time.time;
                    float endTime = startTime + transitionDurationTime;
                    RectTransform rectTransform = transform.GetComponent<RectTransform>();
                    float targetX = rectTransform.position.x;
                    Vector3 startV3 = new Vector3(
                        rectTransform.position.x + Screen.width / 2 + rectTransform.rect.width / 2 + 200,
                        rectTransform.position.y,
                        rectTransform.position.z
                    );
                    rectTransform.position = startV3;
                    while (Time.time < endTime)
                    {
                        yield return new WaitForEndOfFrame();
                        float delta = (Time.time - startTime) / transitionDurationTime;
                        Vector3 currentV3 = new Vector3(
                            rectTransform.position.x + (targetX - rectTransform.position.x) * delta,
                            rectTransform.position.y,
                            rectTransform.position.z
                        );
                        rectTransform.position = currentV3;
                    }
                }
                animationLaunched = false;
                yield return null;
            }

        }

    }
}

