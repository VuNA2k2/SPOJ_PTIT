#include<bits/stdc++.h>
using namespace std;
long long sumdiv(long long n)
{
    if(n < 2)return n;
    long long i,s=0;
    for(i = 1 ; i <= sqrt(n) ; i++)
    {
        if(n%i==0)
        {
            s+=i;
            s+=(n/i);
            if(i==sqrt(n)) s-=(n/i);
        }
    }
    return s;
}
int main()
{
    int t,T;
    cin >> T;
    for(t = 1; t <= T;t++)
    {
        long long n;
        cin >> n;
        cout << sumdiv(n) << endl;
    }
}