#include <iostream>
#include "CurrentAmpDriver.h"

CurrentAmpDriver::CurrentAmpDriver(double gain, double maxCurrent)
    : gain(gain), maxCurrent(maxCurrent), inputCurrent(0.0) {}

void CurrentAmpDriver::setInputCurrent(double inputCurrent) {
    this->inputCurrent = inputCurrent;
}

double CurrentAmpDriver::getAmplifiedCurrent() const {
    double amplifiedCurrent = inputCurrent * gain;
    if (amplifiedCurrent > maxCurrent) {
        amplifiedCurrent = maxCurrent;
    }
    return amplifiedCurrent;
}

void CurrentAmpDriver::printStatus() const {
    std::cout << "Input Current: " << inputCurrent << " A" << std::endl;
    std::cout << "Amplified Current: " << getAmplifiedCurrent() << " A" << std::endl;
    std::cout << "Gain: " << gain << std::endl;
    std::cout << "Max Current: " << maxCurrent << " A" << std::endl;
}
