#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int degrees = 0;
    
    cout << "Enter degrees: ";
    cin >> degrees;
    
    double radians = degrees * M_PI / 180.0;

    cout << "Tangent: " << tan(radians) << endl;

    double tanValue = tan(radians);
    double cotanValue = 0;
    
    if (tanValue != 0) { 
        cotanValue = 1 / tanValue; 
        cout << "Cotangent: " << cotanValue << endl;

        if (fabs(cotanValue - 1 / tanValue) < 1e-9) { 
            cout << "Math is correct!" << endl;
        } else {
            cout << "Math is NOT correct!" << endl;
        }
    } else {
        cout << "Tangent is zero. Cannot calculate cotangent." << endl;
    }

    return 0;
}
