#include <iostream>
using namespace std;

char getMax(char a, char b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    char a, b;
    
    cout << "Enter first letter: ";
    cin >> a;
    cout << "Enter second letter: ";
    cin >> b;
    
    cout << "The letter with the highest index in the alphabet is: " << getMax(a, b) << endl;

    return 0;
}
