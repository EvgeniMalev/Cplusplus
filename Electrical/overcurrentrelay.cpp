#include <iostream>

const float CURRENT_THRESHOLD = 10.0;

float measureCurrent() {
    return 12.5;
}

void handleOvercurrent(float current) {
    std::cout << "Warning: Overcurrent detected! Current = " << current << "A\n";
    std::cout << "Taking protective action (e.g., shutting down system)\n";
}

int main() {
    std::cout << "Starting overcurrent protection system...\n";

    float current = measureCurrent();

    if (current > CURRENT_THRESHOLD) {
        handleOvercurrent(current);
    } else {
        std::cout << "Current is within safe limits. Current = " << current << "A\n";
    }

    return 0;
}
