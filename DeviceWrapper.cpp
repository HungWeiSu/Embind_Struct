#include "DeviceWrapper.hpp"
#include <stdio.h>

ICInfo Device::GetICInfo() {
    // 填充 icinfo 结构
    icInfo.Panel.XResolution = "1920";
    icInfo.Panel.YResolution = "1080";
    return icInfo;
}
