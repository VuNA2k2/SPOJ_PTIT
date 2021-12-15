#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int d1=0;
    int d2=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1)d1++;
        else d2++;
    }
    if(d1==n||d1==0)
    {
        cout << n-1 ;
        return 0;
    }
    if(d1>=d2-1)
    {
        cout << d1;
        return 0;
    }
    cout << d2-d1;
}