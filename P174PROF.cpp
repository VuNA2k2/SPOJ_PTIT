#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    int x=ceil(k/2);
    cout << s[x];
}