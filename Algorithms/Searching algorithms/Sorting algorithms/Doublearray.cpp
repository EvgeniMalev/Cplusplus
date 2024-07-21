#include <iostream> 
#include <algorithm> 
using namespace std;

void selectionSort(double arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}


void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
  cout << endl;
}

int main() {
    double arr[] = { 64.3, 25.4, 12.1, 22.2, 11.1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
