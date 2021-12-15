#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long s=0,res=0,Min=0;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        s+=a[i];
        if(s<0)s=0;
        res=max(res,s);
        Min = max(Min,a[i]);
    }
    if(res) cout << res;
    else cout << Min;
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