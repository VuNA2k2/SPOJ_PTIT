#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    vector<int> a(n);
    vector<long long> b(n,0);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int s=0;
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=a[i]+b[i-1];
    }
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<=300)
        {
            s+=b[i];
            d++;
        }
    }
    cout << d << " " << s;
}