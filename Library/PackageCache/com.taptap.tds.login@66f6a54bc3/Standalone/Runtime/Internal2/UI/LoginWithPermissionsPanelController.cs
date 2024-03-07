using System;
using UnityEngine;
using UnityEngine.UI;
using TapTap.UI;
using TapTap.Login.Internal.Http;
using System.Linq;

namespace TapTap.Login.Internal {
    public class LoginWithPermissionsPanelController : BasePanelController {
        public class OpenParams : AbstractOpenPanelParameter {
            public string ClientId { get; set; }
            public string Name { get; set; }
            public TapLoginPermission[] Permissions { get; set; }
            public Action<TokenData, ProfileData> OnAuth { get; set; }
        }

        private TitleController titleController;
        private QRCodeController qrcodeController;
        private WebWithPermissionsController webController;

        protected override void BindComponents() {
            base.BindComponents();

            Button closeBtn = transform.Find("TopBar/CloseButton").GetComponent<Button>();
            closeBtn.onClick.AddListener(OnCloseClicked);

            Transform titleTrans = transform.Find("TopBar/Title");
            titleController = new TitleController(titleTrans);

            Transform qrcodeTrans = transform.Find("QRCode");
            qrcodeController = new QRCodeController(qrcodeTrans, OnAuth);

            Transform webTrans = transform.Find("Web");
            webController = new WebWithPermissionsController(webTrans, OnAuth);
        }

        protected override void OnLoadSuccess() {
            base.OnLoadSuccess();
            
            OpenParams openParams = openParam as OpenParams;
            titleController.Load();
            string[] permissions = openParams.Permissions.Select(p => p.Permission).ToArray();
            qrcodeController.Load(openParams.ClientId, permissions);
            webController.Load(openParams.ClientId, openParams.Name, openParams.Permissions);
        }

        private void OnDestroy() {
            qrcodeController.Unload();
            webController.Unload();
        }

        private void OnCloseClicked() {
            Close();
        }

        protected async void OnAuth(TokenData tokenData) {
            if (tokenData != null) {
                OpenParams openParams = openParam as OpenParams;
                ProfileData profileData = await LoginService.GetProfile(openParams.ClientId, null);
                
                Close();

                openParams.OnAuth.Invoke(tokenData, profileData);
            }
        }
    }
}