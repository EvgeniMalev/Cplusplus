#include <iostream>
#include <thread>
#include <chrono>

void moveTo(double x, double y, double z) {
    std::cout << "Moving to position (" << x << ", " << y << ", " << z << ")..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    std::cout << "Arrived at position (" << x << ", " << y << ", " << z << ")" << std::endl;
}

void pickUp() {
    std::cout << "Picking up the object..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    std::cout << "Object picked up!" << std::endl;
}

void place() {
    std::cout << "Placing the object..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    std::cout << "Object placed!" << std::endl;
}

int main() {
    double pickX = 0.0, pickY = 0.0, pickZ = 0.0;
    double placeX = 10.0, placeY = 10.0, placeZ = 10.0;

    std::cout << "Starting pick and place operation..." << std::endl;

    moveTo(pickX, pickY, pickZ);

    pickUp();

    moveTo(placeX, placeY, placeZ);

    place();

    std::cout << "Pick and place operation completed!" << std::endl;

    return 0;
}
