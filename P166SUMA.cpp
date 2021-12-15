#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> f(n+1,0);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    int d=0;
    for(int i=1;i<=n;i++)
    {
        if(f[i]==0)d++;
    }
    cout << d;
}