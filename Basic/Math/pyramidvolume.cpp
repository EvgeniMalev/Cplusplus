#include <iostream>
using namespace std;

double calculatePyramidVolume(double baseLength, double baseWidth, double height) {
    return (baseLength * baseWidth * height) / 3.0;
}

int main() {
    double baseLength, baseWidth, height;

    cout << "Pyramid Volume Calculator" << endl;
    cout << "Enter base length: ";
    cin >> baseLength;

    cout << "Enter base width: ";
    cin >> baseWidth;

    cout << "Enter height: ";
    cin >> height;

    double volume = calculatePyramidVolume(baseLength, baseWidth, height);
    cout << "The volume of the pyramid is: " << volume << " cubic units" << endl;

    return 0;
}
