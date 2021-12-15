#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,d, tong=0;
    cin >> n;
    vector< vector<char> > a(n , vector<char> (n));
    for(int i=0;i<n;i++)
    {
        d=0;
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='C')d++;
        }
        if(d>=2)tong += d*(d-1)/2;
    }
    for(int i=0;i<n;i++)
    {
        d=0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i]=='C')d++;
        }
        if(d>=2)tong += d*(d-1)/2;
    }
    cout << tong ;
}