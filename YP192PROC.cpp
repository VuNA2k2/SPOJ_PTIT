#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long long s=0,d=0;
    for(int i=1;i<n;i++)
    {
        d+=a[i-1];
        s+=d*a[i];
    }
    cout << s;
}