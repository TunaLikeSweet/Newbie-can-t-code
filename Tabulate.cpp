#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14;

double exchange_to_radian(int degree) {
    return (degree * pi / 180);
}

void tabulate_angle() {

    cout << setprecision(2) << fixed;

    for (int x = 5; x <= 85; x += 5) {
        double radian = exchange_to_radian(x);
        double sin_val = sin(radian);
        double cos_val = cos(radian);
        double tan_val = tan(radian);
        cout << setw(5) << left << x;
        cout << setw(5) << left << sin_val;
        cout << setw(5) << left << cos_val;
        cout << setw(5) << left << tan_val << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    tabulate_angle();
    return 0;
}
