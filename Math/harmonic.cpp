#include <iostream>
using namespace std;

int main() {
    int n;
    double suma = 0;

    cout << "Vuvedete n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i;
    }

    cout << "Sumata = " << suma << endl;

    return 0;
}
