//
// Created by 甘尧 on 2023/7/7.
//
#pragma once

#include <memory>
#include <string>
#include <cstdint>

namespace tapsdk::platform {

enum class DeviceType {
    Local,
    Sandbox,
    Cloud
};

class Window {
public:
    // 当 App 进入前台
    static void OnForeground();
    // 当 App 进入后台
    static void OnBackground();
};

class Device {
public:
    static void SetCurrent(const std::shared_ptr<Device> &device);
    static std::shared_ptr<Device> GetCurrent();

    virtual ~Device() = default;

    // 当前 Device ID
    virtual std::string GetDeviceID() = 0;
    // 缓存目录
    virtual std::string GetCacheDir() = 0;
    // CA 证书目录 (可选)
    virtual std::string GetCaCertDir() = 0;
    // 设备类型
    virtual DeviceType GetDeviceType();
};

}
