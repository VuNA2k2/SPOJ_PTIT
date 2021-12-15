#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    if(a+b<=c)
    {
        cout << (a+b)*2;
    }
    else if(a+c<=b)cout << (a+c)*2;
    else if(b+c<=a)cout << (b+c)*2;
    else
    {
        cout << a+b+c;
    }
}