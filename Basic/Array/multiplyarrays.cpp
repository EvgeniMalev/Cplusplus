#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE] = {10, 20, 30, 40, 50};
    int result[SIZE];


    for (int i = 0; i < SIZE; i++) {
        result[i] = arr1[i] * arr2[i];
    }


    cout << "Result of multiplication: ";
    for (int i = 0; i < SIZE; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
