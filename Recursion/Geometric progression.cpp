// Representing a geometric progression using recursion

#include <iostream>
using namespace std;

void printGM(int d, int n, int c);

int main() {
    int n, d, c;
    
    cout << "Enter the first term (a): ";
    cin >> c;
    cout << "Enter the multiply number (d): ";
    cin >> d;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    cout << c << " ";

    printGM(d, n - 1, c * d);

    return 0;
}

void printAM(int d, int n, int c) {
    if (n == 0)
        return;
    
    cout << c << " ";
    
    printGM(d, n - 1, c * d);
}
