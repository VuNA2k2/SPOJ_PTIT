#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, h ,m;
    cin >> n;
    vector< vector<int> > a(24,vector<int> (60,0));
    for(int i=0;i<n;i++)
    {
        cin >> h >> m;
        a[h][m]++;
    }
    int max=0;
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<60;j++)
        {
            if(a[i][j]>max)max=a[i][j];
        }
    }
    cout << max;
}