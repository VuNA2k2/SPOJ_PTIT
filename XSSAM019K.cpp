#include<bits/stdc++.h>
using namespace std;
int sumnum(int n)
{
    int N=n,s=0,i,x=0;
    while(N>0)
    {
        i=N%10;
        s+=i;
        N/=10;
    }
    return s;
}
int sumprime(int n)
{
    int i,s=0;
    for(i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            s+=sumnum(i);
            n/=i;
            
        }
    }
    if(n>1) s+=sumnum(n);
    return s;
}
bool snt(int n)
{
    int i;
    if(n<2)return false;
    for( i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(snt(n)==true)
    {
        cout << "NO" << endl;
    }
    else
    {
        if(sumnum(n)==sumprime(n))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}