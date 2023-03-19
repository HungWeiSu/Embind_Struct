#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <emscripten.h>
#include <emscripten/emscripten.h>
#include <emscripten/heap.h>
#include <emscripten/em_asm.h>
#include <stdio.h>
#include "DeviceWrapper.hpp"
#include "IDevice.hpp"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::value_object<PanelInfo>("PanelInfo")
        .field("XResolution", &PanelInfo::XResolution)
        .field("YResolution", &PanelInfo::YResolution)
        ;

    emscripten::value_object<ICInfo>("ICInfo")
        .field("Panel", &ICInfo::Panel)
        ;

    emscripten::class_<Device>("Device")
        .constructor<>()
        .function("GetICInfo", &Device::GetICInfo)
        ;
}