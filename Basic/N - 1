#include <iostream>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;
    std::cout << "Enter the upper limit (N): ";
    std::cin >> N;

    for (int n = 1; n <= N; ++n) {
        std::cout << n - 1 << "! = " << factorial(n - 1) << std::endl;
    }

    return 0;
}
