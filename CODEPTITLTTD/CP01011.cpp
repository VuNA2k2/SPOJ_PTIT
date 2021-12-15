#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    sort(a.begin(),a.end());
    int Min= 1e9+7;
    for(int i = 0 ; i < n - 1 ; i ++)
    {
        Min=min(Min,abs(a[i]-a[i+1]));
    }
    cout << Min;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
}