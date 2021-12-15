#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s1,s2,m;
    cin >> n;
    if(n%2==0)
    {
        s1=(n/2)*(n/2);
        s2=(n/2)*((n/2) +1);
    }
    else
    {
        s1=((n+1)/2)*((n+1)/2);
        s2=((n-1)/2)*(((n-1)/2) + 1);
    }
    cout << s2-s1;
}