/* Sentile search algorythm in C++ */

#include <iostream>
using namespace std;

void sentinelSearch(int arr[], int n, int key) {
    int last = arr[n - 1];

    arr[n - 1] = key;
    int i = 0;

    while (arr[i] != key)
        i++;

    // Put the last element back
    arr[n - 1] = last;

    if ((i < n - 1) || (arr[n - 1] == key))
        cout << key << " is present at index " << i;
    else
        cout << "Element Not found";
}

int main() {
    int arrelements;
    cout << "Enter number of elements in the array: ";
    cin >> arrelements;

    int arr[arrelements];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < arrelements; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 180;

    sentinelSearch(arr, n, key);

    return 0;
}
