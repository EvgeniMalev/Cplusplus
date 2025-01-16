#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

void Rectangle::calculateArea() {
    cout << "Rectangle Area: " << length * width << endl;
}

void Rectangle::display() {
    cout << "Rectangle: Length = " << length << ", Width = " << width << endl;
}
