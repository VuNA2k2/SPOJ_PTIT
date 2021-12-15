#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=b[j])
        {
            cout << i+1 << endl;
            j++;
        }
        if(j>=m)break;
    }
}