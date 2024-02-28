#include <iostream>
#include <vector>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // initialize minimum element index

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]); // swap
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void splitArray(int arr[], int n, vector<int>& oddNumbers, vector<int>& evenNumbers) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]); // Even number
        } else {
            oddNumbers.push_back(arr[i]); // Odd number
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> oddNumbers, evenNumbers;

    // Split the array into odd and even numbers
    splitArray(arr, n, oddNumbers, evenNumbers);

    // Sort the array
    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    cout << "Odd numbers: ";
    for (int num : oddNumbers)
        cout << num << " ";
    cout << endl;

    cout << "Even numbers: ";
    for (int num : evenNumbers)
        cout << num << " ";
    cout << endl;

    return 0;
}
