#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, i, limit1 = 25, limit2 = -20;

    cout << "Squares from 0 to " << limit1 << ":\n";
    for(i = 0; i <= limit1; i += 2) {
        x = i * i;
        cout << setw(10) << x;
    }
    cout << endl;

    cout << "Squares from 0 to " << limit2 << ":\n";
    for(i = 0; i >= limit2; i -= 2) {
        x = i * i;
        cout << setw(10) << x;
    }
    cout << endl;

    return 0;
}
