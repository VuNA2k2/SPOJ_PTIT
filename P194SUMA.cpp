#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    long long s=0;
    for(int i=0;i<k;i++)a[i]=-1*a[i];
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    cout << s;
}