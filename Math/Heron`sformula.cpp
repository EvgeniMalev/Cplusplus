#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Vavedi stranite na triagalnika (a b c): ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Nevaliden triagalnik!" << endl;
        return 1;
    }


    double p = (a + b + c) / 2.0;

    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Liceto na triagalnika e: " << S << endl;

    return 0;
}
