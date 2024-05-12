#include <iostream>
using namespace std;

int ternarySearch(int l, int r, int key, int ar[]) {
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }

        if (key < ar[mid1]) {
            return ternarySearch(l, mid1 - 1, key, ar);
        } else if (key > ar[mid2]) {
            return ternarySearch(mid2 + 1, r, key, ar);
        } else {
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int ar[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }

    cout << "Enter the key to be searched in the array: ";
    cin >> key;

    int p = ternarySearch(0, n - 1, key, ar);

    if (p != -1) {
        cout << "Index of " << key << " is " << p << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
