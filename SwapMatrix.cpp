#include <iostream>
#define n 3

void transpose(int a[][n], int b[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
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
    transpose(a, b);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << b[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
