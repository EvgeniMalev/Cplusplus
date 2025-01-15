#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

void Circle::calculateArea() {
    cout << "Circle Area: " << M_PI * radius * radius << endl;
}

void Circle::display() {
    cout << "Circle: Radius = " << radius << endl;
}
