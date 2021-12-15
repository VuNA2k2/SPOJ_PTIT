#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d1=0,d2;
    cin >> n;
    vector<vector<int> > a(n, vector<int> (3));
    for(int i=0;i<n;i++)
    {
        d2=0;
        for(int j=0;j<3;j++)
        {
            cin >> a[i][j];
            if(a[i][j]==1)
            {
                d2++;
            }
        }
        if(d2>=2) d1++;
    }
    cout << d1;
}