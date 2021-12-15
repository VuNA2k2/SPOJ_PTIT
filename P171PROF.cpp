#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long s=0,d=1;
    for(int i=1;i<n;i++)
    {
        s+=a[i-1];
        if(a[i]>=s)d++;
        else s-=a[i];
    }
    cout << d;
}