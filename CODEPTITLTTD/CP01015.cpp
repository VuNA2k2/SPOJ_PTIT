#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int mod(string s)
{
    if(s.size()<2&&(s[0]-'0')%4==0)return 4;
    if(((s[s.size()-2]-'0')*10+(s[s.size()-1]-'0'))%4==0)return 4;
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    cout << mod(s);
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