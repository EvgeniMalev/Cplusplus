#include <iostream>
using namespace std;

#define N 4

void sum(int A[][N], int B[][N], int C[][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[N][N] = {{8, 1, 9, 3},
                   {2, 2, 2, 4},
                   {3, 3, 3, 3},
                   {4, 3, 2, 1}};

    int B[N][N] = {{1, 1, 1, 1},
                   {1, 1, 1, 1},
                   {1, 1, 1, 1},
                   {4, 3, 2, 1}};

    int C[N][N];  

    sum(A, B, C);

    cout << "Result matrix is \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
           cout << " " << C[i][j];
        cout <<"\n";
    }
    return 0;
}
