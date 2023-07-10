using System;
using System.Collections;
using UnityEngine;

namespace TapTap.Login.Internal
{
    [DisallowMultipleComponent]
    internal class UIAnimator : MonoBehaviour
    {
        public delegate void Action();

        // ReSharper disable Unity.PerformanceAnalysis
        public void DoExitAnimation(UIElement exit, UIElement resume, Action onAnimationEnd = null)
        {
            float exitDuration = 0, resumeDuration = 0;

            if (exit != null)
            {
                exitDuration = exit.DoExitAnimation();
            }

            if (resume != null)
            {
                resumeDuration = resume.DoResumeAnimation();
            }

            BlockForSecond(Math.Max(exitDuration, resumeDuration) + 0.1f, onAnimationEnd);
        }

        public void DoEnterAnimation(UIElement pause, UIElement enter, Action onAnimationEnd = null)
        {
            float pauseDuration = 0, enterDuration = 0;

            if (pause != null)
            {
                pauseDuration = pause.DoPauseAnimation();
            }

            if (enter != null)
            {
                enterDuration = enter.DoEnterAnimation();
            }

            BlockForSecond(Math.Max(pauseDuration, enterDuration) + 0.1f, onAnimationEnd);
        }

        private void BlockForSecond(float duration, Action callback = null)
        {
            if (duration > 0)
            {
                StartCoroutine(BlockCoroutine(duration, () =>
                {
                    if (callback != null)
                    {
                        callback();
                    }
                }));
            }
            else
            {
                if (callback != null)
                {
                    callback();
                }
            }
        }

        private IEnumerator BlockCoroutine(float blockDuration, Action onBlockEnd = null)
        {
            yield return new WaitForSeconds(blockDuration);
            if (onBlockEnd != null)
            {
                onBlockEnd();
            }
        }
    }
}