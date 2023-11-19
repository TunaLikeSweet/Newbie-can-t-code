#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    const int Employees = 5;
    double HourlyRate[] ={9.5, 6.4, 12.5, 5.5, 10.5};
    double WorkingHours[Employees];
    double Earnings[Employees];

    for (int i = 0; i < Employees; ++i) {
        cin >> WorkingHours[i];
    }
    for(int i = 0; i < Employees; ++i){
        Earnings[i] = HourlyRate[i]*WorkingHours[i];
}
            cout << setw(40) << left << "Hourly Rate";
            cout << setw(40) << left << "Working Hour";
            cout << setw(40) << left << "Wage" << endl;

            cout << setprecision(10) << fixed;
            
        for (int i = 0; i < Employees; ++i) {
            cout << setw(40) << left << HourlyRate[i];
            cout << setw(40) << left << WorkingHours[i];
            cout << setw(40) << left << Earnings[i] << endl;
        }
        return 0;
}