#ifndef CURRENT_AMP_DRIVER_H
#define CURRENT_AMP_DRIVER_H

class CurrentAmpDriver {
public:
    CurrentAmpDriver(double gain, double maxCurrent);
    void setInputCurrent(double inputCurrent);
    double getAmplifiedCurrent() const;
    void printStatus() const;

private:
    double gain;
    double maxCurrent;
    double inputCurrent;
};

#endif
