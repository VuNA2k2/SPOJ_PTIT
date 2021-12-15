#include<bits/stdc++.h>
using namespace std;
long long sumfb(long long n)
{
    long long f1=1,f2=1,f,s=2;
    if(n==1)return 1;
    if(n==2)return 2;
    for(long long i=3;i<=n;i++)
    {
        f=f1+f2;
        f%=(int)1e9+7;
        f1=f2;
        f2=f;
        s+=f;
        s%=(int)1e9+7;
    }
    return s;
}
int main()
{
    long long a, n;
    cin >> a >> n;
    cout << a*sumfb(n);
}