#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0)
    {
        cout << "0";
        return 0;
    }
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int imax, imin , min=9999999, max = -9999999;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            imax=i;
        }
        if(a[i]<min)
        {
            min =a[i];
            imin=i;
        }
    }
    if((n-1-imax)<=imax&&(n-1-imin)>=imin)
    {
        if(imin<=n-1-imax)cout << n-1-imin;
        else cout << imax;
    }
    else if((n-1-imax)>=imax&&(n-1-imin)<=imin)
    {
        if(imax<=n-1-imin)cout << n-1-imax;
        else cout << imin;
    }
    else if((n-1-imax)>=imax&&(n-1-imin)>=imin)
    {
        if(imax>imin) cout << n-1-imin;
        else cout << n-1-imax;
    }
    else if((n-1-imax)<=imax&&(n-1-imin)<=imin)
    {
        if(imax>imin) cout << imax;
        else cout << imin;
    }
}