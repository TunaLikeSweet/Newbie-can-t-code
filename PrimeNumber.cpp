#include <iostream>
#include <vector>
using namespace std;

void printPrimes(int lower, int upper)
{
    vector<bool> isPrime(upper + 1, true);

    for (int p = 2; p * p <= upper; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= upper; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = max(2, lower); p <= upper; p++)
    {
        if (isPrime[p])
            cout << p << " ";
    }
}

int main()
{
    int lower, upper;
    cin >> lower >> upper;
    printPrimes(lower, upper);

    return 0;
}
