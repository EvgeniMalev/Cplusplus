#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40, 50};
    vector<int> v3; 

    vector<int>::iterator i1;
    vector<int>::iterator i2;

    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        *i1 = 1;
    }

    for (i2 = v2.begin(); i2 != v2.end(); ++i2) { 
        *i2 = 1;
    }

    for (size_t i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i] + v2[i]);
    }

    cout << "v1: ";
    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        cout << *i1 << " ";
    }
    cout << endl;

    cout << "v2: ";
    for (i2 = v2.begin(); i2 != v2.end(); ++i2) {
        cout << *i2 << " ";
    }
    cout << endl;

    cout << "v3: ";
    for (auto i3 = v3.begin(); i3 != v3.end(); ++i3) {
        cout << *i3 << " ";
    }
    cout << endl;

    return 0;
}
