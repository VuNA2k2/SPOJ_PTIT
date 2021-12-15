#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> f(3);
    vector<int> l(3);
    int a , b , c , s=0;
    cin >> a >> b >> c;
    for(int i=0;i<3;i++)
    {
        cin >> f[i] >> l[i];
    }
    int max=0;
    for(int i=0;i<3;i++)
    {
        if(l[i]>max)max=l[i];
    }
    int n=max;
    vector<int> tanso(n+1);
    for(int i=0;i<3;i++)
    {
        for(int j=f[i];j<l[i];j++)
        {
            tanso[j]++;
        }
    }
    for(int i=0;i<=n;i++)
    {
        if(tanso[i]==1)
        {
            s+=(a*1);
        }
        if(tanso[i]==2)
        {
            s+=(b*2);
        }
        if(tanso[i]==3)
        {
            s+=(c*3);
        }
    }
    cout << s;
}