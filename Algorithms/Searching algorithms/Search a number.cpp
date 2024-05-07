#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int x = 0;
    int arr[] = {6, 12, 20, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Enter a value of x: ";
    cin >> x;
    cout << "The numbers of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = search(arr, n, x);

    if (result == -1)
        cout << "The element is not present in the array";
    else
        cout << "Element is at index " << result;
    
    return 0;
}
