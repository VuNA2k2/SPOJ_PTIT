#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r , c;
    cin >> r >> c;
    vector< vector<char> > a(r+2,vector<char> (c+2,X));
    for(int i=1;i<r+2;i++)
    {
        for(int j=1;j<c+2;j++)
        {
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<r+2;j++)
        {
            if(a[j][x[i]]=='X')a[j+1][x[i]]='O';
            if(a[j][x[i]]=='O')
            {
                if(a[j][x[i]-1]=='.')
                {
                    
                }
            }
        }
    }
}