#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int> f(26);
        for(int i=0;i<s.size();i++)
        {
            f[s[i]-'a']++;
        }
        int d=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]%2!=0)d++;
        }
        if(d>=4)cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}