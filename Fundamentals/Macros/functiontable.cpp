#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define PI        3.1415926536
#define START     0.0 
#define END       (4.0 * PI) 
#define STEP      (PI / 16.0) 
#define HEADER    (cout << \
 "  *****  Sine Function Table *****\n\n")

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    HEADER;
    
    // Table Head:
    cout << setw(16) << "x" << setw(20) << "sin(x)\n"
         << "   -----------------------------------------"
         << fixed << endl;
    
    double x;
    double min_value = sin(START); // Initialize with the first value
    double max_value = sin(START); // Initialize with the first value
    
    for (x = START; x < END + STEP/2; x += STEP) {
        double sin_x = sin(x);
        cout << setw(20) << x << setw(16) << sin_x << endl;
        
        min_value = MIN(min_value, sin_x);
        max_value = MAX(max_value, sin_x);
    }
    
    cout << endl << "Minimum value of sin(x) in the range: " << min_value << endl;
    cout << "Maximum value of sin(x) in the range: " << max_value << endl;

    return 0;
}
