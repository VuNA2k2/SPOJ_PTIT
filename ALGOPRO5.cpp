#include<bits/stdc++.h>
using namespace std;
long long pow2(int n)
{
    long long s=1;
    for(int i=1;i<=n;i++)
    {
        s*=2;
    }
    return s;
}
int main()
{
    int n;
    long long s=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        s+=pow2(i);
    }
    cout << s;
}
