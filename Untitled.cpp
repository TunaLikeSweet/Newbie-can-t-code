#include <iostream>

#define n 4

void transpose(int a[][n], int b[][n], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            b[j][i] = a[i][j];
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    int b[n][n];
    transpose(a, b, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
