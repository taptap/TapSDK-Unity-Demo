using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace TapTap.Login.Internal {
    public class ClientButtonListener : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler {
        public Action OnMouseEnter { get; set; }
        public Action OnMouseExit { get; set; }

        public void OnPointerEnter(PointerEventData eventData) {
            OnMouseEnter?.Invoke();
        }

        public void OnPointerExit(PointerEventData eventData) {
            OnMouseExit?.Invoke();
        }
    }
}
