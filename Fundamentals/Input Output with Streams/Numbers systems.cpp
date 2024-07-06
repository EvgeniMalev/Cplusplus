// Function to convert a decimal number to Quinary,Quaternary, Heximal and Octal number 

#include <iostream>
#include <string>

using namespace std;

string toBase(int number, int base) {
    string result = "";
    while (number > 0) {
        int remainder = number % base;
        result = to_string(remainder) + result;
        number /= base;
    }
    return result.empty() ? "0" : result;
}

int main() {
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    cout << uppercase
         << "Octal\tDecimal\tHexadecimal\tQuinary\tQuaternary\n"
         << oct << number << "\t"
         << dec << number << "\t"
         << hex << number << "\t"
         << toBase(number, 5) << "\t"
         << toBase(number, 4) << endl;

    return 0;
}
