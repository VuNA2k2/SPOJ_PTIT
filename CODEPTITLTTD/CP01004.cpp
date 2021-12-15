#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ts(1e6+5,0);
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        ts[a[i]]++;
    }
    int Max=0 , X;
    for(int i = 0 ; i < n ; i ++)
    {
        if(ts[a[i]]>Max)
        {
            Max=ts[a[i]];
            X=a[i];
        }
    }
    if(Max>n/2)cout << X;
    else cout << "NO";
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