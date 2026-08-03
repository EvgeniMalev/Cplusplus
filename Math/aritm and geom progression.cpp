#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int choice;
    double a1, d, q;
    int n;

    cout << "==============================" << endl;
    cout << "1. Aritmetichna progresiq" << endl;
    cout << "2. Geometrichna progresiq" << endl;
    cout << "Izberete: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            cout << "\n--- Aritmetichna progresiq ---" << endl;

            cout << "Purvi chlen (a1): ";
            cin >> a1;

            cout << "Razlika (d): ";
            cin >> d;

            cout << "Broi chlenove (n): ";
            cin >> n;

            double an = a1 + (n - 1) * d;
            double Sn = (n * (a1 + an)) / 2;

            cout << "\nn-ti chlen = " << an << endl;
            cout << "Suma na purvite " << n << " chlena = " << Sn << endl;

            break;
        }

        case 2:
        {
            cout << "\n--- Geometrichna progresiq ---" << endl;

            cout << "Purvi chlen (a1): ";
            cin >> a1;

            cout << "Koefficient (q): ";
            cin >> q;

            cout << "Broi chlenove (n): ";
            cin >> n;

            double an = a1 * pow(q, n - 1);

            double Sn;

            if(q == 1)
                Sn = a1 * n;
            else
                Sn = a1 * (pow(q, n) - 1) / (q - 1);

            cout << "\nn-ti chlen = " << an << endl;
            cout << "Suma na purvite " << n << " chlena = " << Sn << endl;

            break;
        }

        default:
            cout << "Greshen izbor!" << endl;
    }

    return 0;
}
