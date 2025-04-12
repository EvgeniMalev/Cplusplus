#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE] = {10, 20, 30, 40, 50};
    int sum[SIZE];

    
    for (int i = 0; i < SIZE; i++) {
        sum[i] = array1[i] + array2[i];
    }

    
    cout << "Sum of the arrays: ";
    for (int i = 0; i < SIZE; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
