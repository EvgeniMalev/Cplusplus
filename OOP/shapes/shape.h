#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0; 
    virtual void display() = 0;      
    virtual ~Shape() {}              
};

#endif
