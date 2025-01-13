#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w);
    void calculateArea() override;
    void display() override;
};

#endif
