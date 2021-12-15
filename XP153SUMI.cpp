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
    int d=0,index;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            d++;
            index=i;
        }
    }
    if(d>1)
    {
        cout << "-1";
        return 0;
    }
    if(d==0)
    {
        cout << "0";
        return 0;
    }
    if(a[0]>=a[n-1])
    {
        cout << n-index;
    }
    else cout << "-1";
}