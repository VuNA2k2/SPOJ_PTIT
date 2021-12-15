#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int> > a(n , vector<int> (n));
    vector<vector<int> > b(n , vector<int> (n));
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a.size();j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            cin >> b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }
}