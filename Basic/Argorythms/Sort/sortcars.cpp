#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> cars = {"Fiat", "Alfa Romeo", "Innocenti", "Maserati", "Lancia", "Ferrari", "Lamborghini"};

    std::sort(cars.begin(), cars.end());

    for (const auto& car : cars) {
        std::cout << car << std::endl;
    }

    return 0;
}
