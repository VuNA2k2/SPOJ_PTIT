#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , b;
    cin >> n >> b;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int d=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==b)d++;
        }
    }
    cout << d;
}