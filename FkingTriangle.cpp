#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, c;
    string triangleType = "Invalid size";
    cin >> a >> b >> c;
    if ( a > c ) swap (a, c);
    if ( b > c ) swap (b, c);
    if ( a + b > c) {
    if ( pow(c,2) == pow(a,2) + pow(b,2) ) {
    if (a == b) {
                triangleType = "Isosceles Right Triangle";
            }
            else {
                triangleType = "Right Triangle";
            }
        }
            else if (a == b && b == c) {
            triangleType = "Equilateral Triangle";
        }
            else if (a == b || b == c) {
            triangleType = "Isosceles Triangle";
        }
            else {
            triangleType = "Normal Triangle";
        }
    }
        cout << triangleType << endl;
        return 0;
}