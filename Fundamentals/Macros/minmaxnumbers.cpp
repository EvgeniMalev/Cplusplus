#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int x, y;

    std::cout << "Enter the first number: ";
    std::cin >> x;

    std::cout << "Enter the second number: ";
    std::cin >> y;

    std::cout << "The maximum of " << x << " and " << y << " is " << MAX(x, y) << std::endl;

    std::cout << "The minimum of " << x << " and " << y << " is " << MIN(x, y) << std::endl;

    return 0;
}
