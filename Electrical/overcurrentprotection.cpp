#include <iostream>
#include <thread>
#include <chrono>

const double MAX_CURRENT = 50.0; 
const int CHECK_INTERVAL_MS = 1000;

double measureCurrent() {
    static double simulatedCurrent = 30.0;
    static bool increasing = true;

    if (increasing) {
        simulatedCurrent += 5.0;
        if (simulatedCurrent >= 60.0) {
            increasing = false;
        }
    } else {
        simulatedCurrent -= 5.0;
        if (simulatedCurrent <= 20.0) {
            increasing = true;
        }
    }
    return simulatedCurrent;
}

void tripRelay() {
    std::cout << "Relay tripped: Overcurrent detected!" << std::endl;
}

int main() {
    std::cout << "Starting Overcurrent Protection System..." << std::endl;

    while (true) {
        double current = measureCurrent();
        std::cout << "Current measured: " << current << " A" << std::endl;

        if (current > MAX_CURRENT) {
            tripRelay();
            break; 
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(CHECK_INTERVAL_MS));
    }

    std::cout << "System shutdown due to overcurrent." << std::endl;
    return 0;
}
