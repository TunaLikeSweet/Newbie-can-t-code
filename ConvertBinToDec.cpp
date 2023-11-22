#include <bits/stdc++.h>
using namespace std;
int convertBinaryToDecimal(string n) {
    
    int s = 0;
    int p = 0;
    for (int i = n.length() - 1; i >= 0; --i)
    {
        if (n[i] == '1')
            s += pow(2, p);
        p++;
    }
    return s;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string n;
    cin >> n;
    cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";
    return 0;
}
