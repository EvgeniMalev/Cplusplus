#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Въведете a, b и c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Това не е квадратно уравнение!" << endl;
        return 0;
    }

    double D = b * b - 4 * a * c;

    cout << "Дискриминанта D = " << D << endl;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);

        cout << "Два различни корена:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);

        cout << "Един двоен корен:" << endl;
        cout << "x = " << x << endl;
    }
    else {
        cout << "Няма реални корени!" << endl;
    }

    return 0;
}
