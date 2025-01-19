#include <iostream>
#include <cstdlib>
#include <ctime>

class BiochemicalSensor {
private:
    double threshold;
    double concentration;

public:
    BiochemicalSensor(double thresh) : threshold(thresh), concentration(0.0) {}
    
    void readSensorData() {
        concentration = (std::rand() % 100) / 10.0; 
    }
    
    bool isThresholdExceeded() {
        return concentration > threshold;
    }
    
    void displayStatus() {
        std::cout << "Current Concentration: " << concentration << " mg/L" << std::endl;
        if (isThresholdExceeded()) {
            std::cout << "Warning: Biochemical concentration exceeds safe threshold!" << std::endl;
        } else {
            std::cout << "Status: Normal levels." << std::endl;
        }
    }
};

int main() {
    std::srand(std::time(0)); 
    BiochemicalSensor sensor(5.0); 
    
    for (int i = 0; i < 10; ++i) {
        sensor.readSensorData();
        sensor.displayStatus();
        std::cout << "----------------------" << std::endl;
    }
    
    return 0;
}
