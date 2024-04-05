#include <iostream>

using namespace std;

int main(){
    double rsd;
    cout << "Insert value: ";
    cin >> rsd;

    double bgn = rsd * 0.017;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Value in BGN: " << bgn << endl;
    return 0;
}
