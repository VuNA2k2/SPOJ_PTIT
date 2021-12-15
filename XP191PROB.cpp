#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,d=0;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==m)d++;
        }
    }
    cout << d;
}
int main()
{
    solve();
}