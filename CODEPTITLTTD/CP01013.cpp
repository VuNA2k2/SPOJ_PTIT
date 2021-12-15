#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void find(vector<int> a)
{
    for(int i = 0 ; i < a.size()-1 ; i ++)
    {
        for(int j = i + 1 ; j < a.size() ; j ++)
        {
            if(a[i]==a[j])
            {
                cout << a[i];
                return;
            }
        }
    }
    cout << "NO";
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    find(a);
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