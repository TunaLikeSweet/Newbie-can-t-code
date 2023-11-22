#include <bits/stdc++.h>
using namespace std;
int cube(int num)
{
    return num * num * num;
}
int main()
{
    int num;
    int c;
    //Inputting number from user
    cout<<"Enter any number: "<<endl;
    cin>>num;
    c = cube(num);
    cout<<"Cube of " << num << " is "<<c;
    return 0;
}