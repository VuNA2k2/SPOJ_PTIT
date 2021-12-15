#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,M;
    cin >> n;
    if(n%2==0)
    {
        m=n/2;
        cout << m*(m+1)-m*m;
    }
    else
    {
        m=(n+1)/2;
        cout << m*(m+1)-m*m - 2*m;
    }
}