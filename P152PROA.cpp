#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
bool snt(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,n=0;
        cin >> x;
        for(int i=1;i<=x;i++)
        {
            if(gcd(i, x)==1)n++;
        }
        if(snt(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}