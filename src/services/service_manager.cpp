#include <iostream>
#include "service_manager.h"

void ServiceManager::start() {
    std::cout << "LMOS Services Starting..." << std::endl;

    std::cout << "Wi-Fi Service Loaded" << std::endl;
    std::cout << "Audio Service Loaded" << std::endl;
    std::cout << "Storage Service Loaded" << std::endl;
}

void ServiceManager::stop() {
    std::cout << "LMOS Services Stopped" << std::endl;
}
