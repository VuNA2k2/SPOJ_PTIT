#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n) , x;
    stack<int> s;
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    for(int i = n - 1 ; i >= 0 ; i --)
    {
        while(!s.empty()&&a[i]>a[s.top()])s.pop();
        if(s.empty())x.push_back(a[i]);
        s.push(i);
    }
    for(int i = x.size()-1 ; i >= 0 ; i --)cout << x[i] << " ";
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