#include "Rectangle.h"  
#include "Circle.h"    
#include <iostream>     

using namespace std;

int main() {

    Shape* shapes[2];  

    shapes[0] = new Rectangle(5.0, 3.0);  
    shapes[1] = new Circle(4.0);          

    for (int i = 0; i < 2; ++i) {
        shapes[i]->display();      
        shapes[i]->calculateArea(); 
        cout << endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}
