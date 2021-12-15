#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector< vector<int> > a(n, vector<int> (11,0));
    vector<int> max(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<11;j++)
        {
            cin >> a[i][j];
            if(a[i][j]>max[i])max[i] = a[i][j];
        }
    };
    sort(max.rbegin(),max.rend());
    cout << max[0]+max[1]+max[2];
}