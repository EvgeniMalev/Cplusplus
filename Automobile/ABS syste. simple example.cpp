#include <iostream>

int main() {
    float vehicleSpeed;  
    float wheelSpeed;     
    float brakePressure = 100.0; 

    std::cout << "Vehicle speed: ";
    std::cin >> vehicleSpeed;

    std::cout << "Wheel speed: ";
    std::cin >> wheelSpeed;

    float slip = (vehicleSpeed - wheelSpeed) / vehicleSpeed;

    if (slip > 0.20) {
        brakePressure -= 20;
        std::cout << "ABS active - reducing brake pressure.\n";
    } else {
        std::cout << "Normal braking.\n";
    }

    std::cout << "Brake pressure: "
              << brakePressure << "%\n";

    return 0;
}
