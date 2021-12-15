#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    while(cin >> s)
    {
        vector<int> a(27);
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        int d=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2!=0)d++;
        }
        if(d<2||d%2!=0)cout << "First" << endl;
        else cout << "Second" << endl;
    }
}