#include<bits/stdc++.h>
using namespace std;
bool snt(long long n)
{
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
bool scp(long long n)
{
    long long a=sqrt(n);
    if(a*a==n)return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(scp(a[i])&&snt(sqrt(a[i])))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}