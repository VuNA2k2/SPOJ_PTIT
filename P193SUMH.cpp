#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0, n , m;
    cin >> n >> m;
    while(n<m)
    {
        d++;
        n*=2;
    }
    while(n>m)
    {
        d++;
        n--;
    }
    cout << d;
}