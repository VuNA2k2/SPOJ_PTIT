#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> tanso(3005,0);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        tanso[a[i]]++;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(tanso[i]==0)
        {
            cout << i ;
            return 0;
        }
    }
    cout << n+1;
}