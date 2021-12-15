#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    int d=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>0)d++;
    }
    if(d<=k)
    {
        cout << d ;
        return 0;
    }
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1])dem++;
    }
    cout << dem;
}