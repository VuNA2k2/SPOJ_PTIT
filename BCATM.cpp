#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , s , d=0;
    cin >> n >> s;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++ )
    {
        if(s-a[i]>=0)
        {
            d++;
            s-=a[i];
        }
    }
    if(s==0)
    {
        cout << d;
    }
    else
    {
        cout << "-1";
    }
}