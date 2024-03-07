using System;
using System.Collections.Generic;
using TapTap.Login.Internal.Http;
using UnityEngine;
using UnityEngine.UI;

namespace TapTap.Login.Internal {
    public class WebWithPermissionsController : WebController {
        private readonly RectTransform contentTransform;
        private readonly Text titleText;
        private readonly Transform authTransform;
        private readonly List<Toggle> toggles;

        private TapLoginPermission[] allPermissions;

        public WebWithPermissionsController(Transform transform, Action<TokenData> onAuth) : 
            base(transform, onAuth) {
            contentTransform = transform.Find("Permission/Content").GetComponent<RectTransform>();
            titleText = transform.Find("Permission/Content/Title").GetComponent<Text>();
            authTransform = transform.Find("Permission/Content/Permissions/Viewport/Content");
            toggles = new List<Toggle>();
        }

        public void Load(string clientId, string name, TapLoginPermission[] permissions) {
            this.allPermissions = permissions;
            LoadBasicInfo(clientId);

            titleText.text = $"登录授权后 <b>{name}</b> 将获得您 TapTap 账号以下信息：";
            if (permissions != null) {
                foreach (TapLoginPermission permission in permissions) {
                    GameObject authItem = GameObject.Instantiate(Resources.Load("Prefabs/TapLogin/PermissionItem"))
                        as GameObject;
                    Text text = authItem.transform.Find("Label").GetComponent<Text>();
                    text.text = permission.Description;
                    authItem.transform.SetParent(authTransform);
                    Toggle toggle = authItem.GetComponent<Toggle>();
                    toggles.Add(toggle);
                }
            }

            LayoutRebuilder.ForceRebuildLayoutImmediate(contentTransform);
        }

        protected override void OnJumpClicked() {
            // 生成 permissions
            List<string> ps = new List<string>();
            for (int i = 0; i < toggles.Count; i++) {
                if (toggles[i].isOn) {
                    ps.Add(allPermissions[i].Permission);
                }
            }
            base.permissions = ps.ToArray();
            base.OnJumpClicked();
        }
    }
}
