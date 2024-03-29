// Calculating N factorial using Recursion

#include <iostream>
using namespace std;

int NfactorialUsingRecursion(int n);

int main() {
    int num;

    cout << "Please enter a number: ";
    cin >> num;

    int factorial = NfactorialUsingRecursion(num);

    cout << "Factorial of " << num << " is: " << factorial << endl;

    return 0;
}

int NfactorialUsingRecursion(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
       
        return n * NfactorialUsingRecursion(n - 1);
    }
}
