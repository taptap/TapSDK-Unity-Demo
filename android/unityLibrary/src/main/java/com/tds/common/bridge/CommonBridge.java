package com.tds.common.bridge;

import com.tds.common.utils.DeviceUtils;
import com.tds.common.utils.GUIDHelper;
import com.unity3d.player.UnityPlayer;
import com.tds.common.tracker.TdsTrackerHandler;

import java.util.Map;
import org.json.JSONObject;



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

    public static String GetOpenLogCommonParams(){
       JSONObject commonConfig = new JSONObject();

      try {
        Map<String, String> commonParams = TdsTrackerHandler.getCommonParams(UnityPlayer.currentActivity, "");
        for (Map.Entry<String, String> entry : commonParams.entrySet()) {
          commonConfig.put(entry.getKey(), entry.getValue());
        }
        return commonConfig.toString();
      } catch (Exception e) {
        return "";
      }
    }
}
