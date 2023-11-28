#include <cmath>
#include <iostream>
#include <string>
using namespace std;

struct road
{
    int x, y;
};
road point;

int move(string moves)
{
    int size = moves.length();
    for (int i = 0; i < size; i = i + 2)
    {
        char z = moves[i];
        if (z == 'U')
            point.y += moves[i + 1] - '0';
        if (z == 'D')
            point.y -= moves[i + 1] - '0';
        if (z == 'L')
            point.x += moves[i + 1] - '0';
        if (z == 'R')
            point.x -= moves[i + 1] - '0';
    }
    int distance = round(sqrt(pow((point.x), 2) + pow((point.y), 2)));
    return distance;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isSquared(int n)
{
    int sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}

int main()
{
    string moves;
    int distance;
    bool primality, squared;
    point.x = point.y = 0;

    cin >> moves;

    distance = move(moves);

    primality = isPrime(distance);
    squared = isSquared(distance);

    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "
         << round(distance) << '\n';

    if (primality)
    {
        cout << "So " << distance << " la so nguyen to\n";
    }
    if (squared)
    {
        cout << "So " << distance << " la so chinh phuong\n";
    }

    return 0;
}
