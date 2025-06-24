#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], result[100][100];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j) {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j) {
            cout << "matrix2[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }

    for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
            result[i][j] = matrix1[i][j] - matrix2[i][j];

    cout << "Resultant matrix after subtraction:\n";
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
