#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> a(26,0);
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    int d=0,S=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)d++;
        S+=a[i];
    }
    if(d<=2)
    {
        cout << "0";
        return 0;
    }
    sort(a.begin(),a.end());
    cout << S-a[25]-a[24];
}