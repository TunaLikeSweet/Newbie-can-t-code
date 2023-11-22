#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n, long long f[]) {
    f[1] = 1; f[2] = 1; f[3] = 2;
    for(int i = 4; i <= n; ++i) {
        f[i] = f[i - 1] + f[i -2 ];
        }
    return f[n];
}
void printFibonacci(int n, long long f[]) {
    for (int i = 0; i < n; ++i) {
    cout << f[i] << " ";
}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    long long f[n + 1];
    memset(f, 0, sizeof(f));
    fibonacci(n, f);
    printFibonacci(n, f);
    return 0;
}
