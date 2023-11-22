#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string marriageCode;
    cin >> marriageCode;

    string result;
    switch (marriageCode[0]) {
        case 'M':
        case 'm':
            result = "Individual is married";
            break;
        case 'D':
        case 'd':
            result = "Individual is divorced";
            break;
        case 'W':
        case 'w':
            result = "Individual is widowed";
            break;
        default:
            result = "An invalid code was entered";
            break;
    }

    cout << result << endl;
    return 0;
}
