#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a , b , d=0;
    cin >> n >> a >> b;
    for(int i=0;i<=b;i++)
    {
        if(n-1-i>=a)d++;
        else break;
    }
    cout << d;
}