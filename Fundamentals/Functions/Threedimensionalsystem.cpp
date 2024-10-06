#include <iostream>
using namespace std;

class Point {
public:
    double x;
    double y; 
    double z; 
};

int main() {
    Point pt1, pt2;

    pt1.x = 8.5;  
    pt1.y = 0.0;
    pt1.z = 3.2;

    pt2.x = -4;
    pt2.y = 2.5;
    pt2.z = -1.1;

    cout << "pt1 = (" << pt1.x << ", " << pt1.y << ", " << pt1.z << ")" << endl;
    cout << "pt2 = (" << pt2.x << ", " << pt2.y << ", " << pt2.z << ")" << endl;

    pt1 = pt2;
    cout << "After assigning pt2 to pt1:" << endl;
    cout << "pt1 = (" << pt1.x << ", " << pt1.y << ", " << pt1.z << ")" << endl;
    cout << "pt2 = (" << pt2.x << ", " << pt2.y << ", " << pt2.z << ")" << endl;

    pt1.x = 0;
    cout << "After modifying pt1's x coordinate:" << endl;
    cout << "pt1 = (" << pt1.x << ", " << pt1.y << ", " << pt1.z << ")" << endl;
    
    cout << "pt2 = (" << pt2.x << ", " << pt2.y << ", " << pt2.z << ")" << endl;

    return 0;
}
