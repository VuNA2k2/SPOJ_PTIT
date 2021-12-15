#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;
    vector<int> a(26,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
        a[s[i]-65]++;
    }
    int ok=1;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=1)
        {
            ok=0;
            break;
        }
    }
    if(ok==1)cout << "YES";
    else cout << "NO";
    cout << endl;
}
int main()
{
    solve();
}