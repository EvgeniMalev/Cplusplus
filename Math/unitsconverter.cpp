#include <iostream>

using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "=== Конвертор на мерни единици ===" << endl;
    cout << "1. Метри -> Километри" << endl;
    cout << "2. Километри -> Метри" << endl;
    cout << "3. Килограми -> Грамове" << endl;
    cout << "4. Грамове -> Килограми" << endl;
    cout << "5. Целзий -> Фаренхайт" << endl;
    cout << "6. Фаренхайт -> Целзий" << endl;
    cout << "Изберете опция: ";
    cin >> choice;

    cout << "Въведете стойност: ";
    cin >> value;

    switch (choice) {
        case 1:
            result = value / 1000.0;
            cout << value << " m = " << result << " km" << endl;
            break;

        case 2:
            result = value * 1000.0;
            cout << value << " km = " << result << " m" << endl;
            break;

        case 3:
            result = value * 1000.0;
            cout << value << " kg = " << result << " g" << endl;
            break;

        case 4:
            result = value / 1000.0;
            cout << value << " g = " << result << " kg" << endl;
            break;

        case 5:
            result = (value * 9.0 / 5.0) + 32.0;
            cout << value << " °C = " << result << " °F" << endl;
            break;

        case 6:
            result = (value - 32.0) * 5.0 / 9.0;
            cout << value << " °F = " << result << " °C" << endl;
            break;

        default:
            cout << "Невалиден избор!" << endl;
    }

    return 0;
}
