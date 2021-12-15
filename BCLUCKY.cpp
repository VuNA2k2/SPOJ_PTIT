#include<bits/stdc++.h>
using namespace std;
int f[(int)1e7+5]={};
int main()
{
    int n , x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        f[a[i]]++;
    }
    int min = 9999999;
    long long s;
    for(int i=0;i<n;i++)
    {
        if(f[a[i]]<min)min=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i++)
    {
        if(f[a[i]]==min)
        {
            s=f[a[i]]*a[i];
            break;
        }
    }
    cout << x*n-s;
}