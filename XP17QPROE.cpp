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
    int d=0,l=0,r=n-1;
    while(l<r)
    {
        if(a[l]==a[r])
        {
            l++;
            r--;
        }
        else if(a[l]<a[r])
        {
            a[l+1]+=a[l];
            d++;
            l++;
        }
        else
        {
            a[r-1]+=a[r];
            d++;
            r--;
        }
    }
    cout << d;
}