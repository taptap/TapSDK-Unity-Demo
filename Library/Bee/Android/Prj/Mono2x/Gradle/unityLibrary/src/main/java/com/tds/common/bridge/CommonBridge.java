package com.tds.common.bridge;

import com.tds.common.utils.DeviceUtils;
import com.tds.common.utils.GUIDHelper;
import com.unity3d.player.UnityPlayer;

public class CommonBridge {
    public static String getDeviceId() {
        if (!GUIDHelper.INSTANCE.initialized()) {
            GUIDHelper.INSTANCE.init(UnityPlayer.currentActivity);
        }
        return GUIDHelper.INSTANCE.getUID();
    }

    public static int getDeviceType() {
        int deviceType = 0;
        if(DeviceUtils.isRunInSandbox()){
            deviceType =  1;
        }
        if(DeviceUtils.isRunInCloud()){
            deviceType =  2;
        }
        return deviceType;
    }
}
