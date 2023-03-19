#ifndef IDEVICE_HPP
#define IDEVICE_HPP

struct PanelInfo {
    std::string XResolution;
    std::string YResolution;
};

struct ICInfo {
    PanelInfo Panel; 
};

#endif