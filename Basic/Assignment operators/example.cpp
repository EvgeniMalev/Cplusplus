#include <iostream>
using namespace std;

int main() {
    
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9, c = 0;

    // The result is 00000010
    cout << "a>>1 = " << (a >> 1) << endl;

    // The result is 00000100
    cout << "b>>1 = " << (b >> 1) << endl;

    // The result is 00001110
    c = a + b;

    // The result is 00000111   
    cout << "c>>1 = " << (c >> 1) << endl;

    return 0;
}
