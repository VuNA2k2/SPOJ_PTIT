#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<long long> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(),a.end());
        cout << a[2]-a[0] << endl;
    }
}