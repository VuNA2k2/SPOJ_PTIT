#include<bits/stdc++.h>
using namespace std;
vector<int> s;
void solve()
{
    int n,m;
    cin >> n >> m;
    s.resize(m);
    for(int i=0;i<m;i++)
    {
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    int Min=2000;
    for(int i=0;i<m-n+1;i++)
    {
        if(s[i+n-1]-s[i]<Min)
        {
            //cout << s[i] << " " << s[i+n-1] << endl;
            Min=s[i+n-1]-s[i];
        }
    }
    cout << Min;
}
int main()
{
    solve();
}