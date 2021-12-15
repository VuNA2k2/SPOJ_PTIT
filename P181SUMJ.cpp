#include<bits/stdc++.h>
using namespace std;
int countgcd(long long n)
{
    int d=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)d+=2;
        if(n/i==i)d--;
    }
    return d;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        long long s=1;
        for(int i=a+1;i<=b;i++)
        {
            s*=i;
        }
        cout << countgcd(s) << endl ;
    }
}