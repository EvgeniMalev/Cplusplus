#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {
    double rate; 
    long maxTerms = 10; 

    long a; 
    long d; 
    cout << "Enter the first term for arithmetic progression: ";
    cin >> a;
    cout << "Enter the common difference for arithmetic progression: ";
    cin >> d;
  
    double a_g; 
    double r; 
    cout << "Enter the first term for geometric progression: ";
    cin >> a_g;
    cout << "Enter the common ratio for geometric progression: ";
    cin >> r;

    cout << "\nPlease give the rate of exchange: one Euro in US-$: ";
    cin >> rate;

    cout << "\n* * * Arithmetic Progression Table * * *\n";
    cout << setw(12) << "Term" << setw(20) << "Euro" << setw(20) << "US-$" << "\t\tRate: " << rate << endl;
    cout << fixed << setprecision(2) << endl;

    for(long n = 1; n <= maxTerms; ++n) {
        long euro = a + (n - 1) * d;
        cout << setw(12) << n << setw(20) << euro << setw(20) << euro * rate << endl;
    }

    cout << "\n* * * Geometric Progression Table * * *\n";
    cout << setw(12) << "Term" << setw(20) << "Euro" << setw(20) << "US-$" << "\t\tRate: " << rate << endl;
    cout << fixed << setprecision(2) << endl;

    for(long n = 1; n <= maxTerms; ++n) {
        double euro = a_g * pow(r, n - 1);
        cout << setw(12) << n << setw(20) << euro << setw(20) << euro * rate << endl;
    }

    return 0;
}
