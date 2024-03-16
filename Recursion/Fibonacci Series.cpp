// Calculating Fibonacci Series using recursion

#include <iostream>
using namespace std;

int FibonacciSeriesRecursion(int n, int n1 = 0, int n2 = 1);

int main() {
    int n;

    cout << "Please enter the final number of the Fibonacci Series: ";
    cin >> n;

    cout << "The Fibonacci series is: ";
    FibonacciSeriesRecursion(n);

    return 0;
}

int FibonacciSeriesRecursion(int n, int n1, int n2) {
    if (n <= 0) {
        return 0;
    }
    cout << n1 << " ";
    if (n == 1) {
        return 1;
    }
    int n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    FibonacciSeriesRecursion(n - 1, n1, n2);
}
