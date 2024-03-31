#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

    char command;
    int x, y, z;

    while (1) {
        cout << "Enter an operator (bi, qu, by2, by3, sqr) or 'exit' to quit: ";
        cin >> command;

        if (command == 'exit') { 
            exit(0);
        }

        cout << "Enter three numbers: ";
        cin >> x >> y >> z;

        switch (command) {
        case 'bi':
            cout << x << " + " << y << " + " << z << " = " << (x*x) + (2*y) + z << endl;
            break;

        case 'qu':
            cout << x << " + " << y << " + " << z << " = " << (x*x*x*x) + (4*y) + z << endl;
            break;

        case 'by2':
            cout << x << " * " << y << " = " << (x*x) + (y*y) << endl;
            break;
        case 'by3':
            cout << x << " * " << y << " = " << (x*x*x) + (y*y*y) << endl;
            break;
        case 'sqr':
            cout << x << " * " << y << " = " << ((x + y)*(x + y)) << endl;
            break;
        default:
            cout << "Invalid Operator Input" << endl;
        }
    }
    return 0;
}
