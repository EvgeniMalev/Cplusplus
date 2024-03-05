#include <iostream>
using namespace std;

void print_triangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
       
        for (int j = 0; j < rows - i; ++j) {
            cout << "  ";
        }
        
        for (int k = 0; k < i; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    print_triangle(rows);
    return 0;
}
