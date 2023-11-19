#include <bits/stdc++.h>
using namespace std;

void transpose(int a[][100], int n) {
    int b[100][100];
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[j][i] = a[i][j];
        }
    }
for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = b[i][j];
        }
}
}
void printMatrix(int a[][100], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        if (i < n - 1) {
            cout << endl;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    // Transposing the matrix
    transpose(a, n);
    // Printing the transposed matrix
    printMatrix(a, n);
    return 0;
}
