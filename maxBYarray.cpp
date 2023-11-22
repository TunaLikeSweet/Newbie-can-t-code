#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);

    int n;
    std::cin >> n;
    double array[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    double max = array[0];
    for (int i = 0; i < n; ++i) {
    if (array[i] > max) {
        max = array[i];
    }
}
    std::cout << std::fixed << std::setprecision(2) << max << std::endl;
    return 0;
}