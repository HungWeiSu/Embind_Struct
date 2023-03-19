#ifndef DEVICEWRAPPER_HPP
#define DEVICEWRAPPER_HPP

#include <string>
#include "IDevice.hpp"

class Device {
public:
    ICInfo GetICInfo();
private:
    ICInfo icInfo;
};

#endif