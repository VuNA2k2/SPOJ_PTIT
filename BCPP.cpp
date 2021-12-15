#include<bits/stdc++.h>
using namespace std;
bool spp(int n)
{
    int s=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s+=i;
            s+=(n/i);
            if(i==(n/i))s-=i;
        }
    }
    if(s>n)return true;
    return false;
}
int main()
{
    int l , r , d=0;
    cin >> l >> r;
    for(int i=l ;i<=r;i++)
    {
        if(spp(i))
        {
            d++;
        }
    }
    cout << d;
}