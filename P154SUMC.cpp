#include<bits/stdc++.h>
using namespace std;
string s;
void chuanhoa()
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        {
            s[i]-=32;
        }
    }
}
int xuly(string s)
{
    vector<int> a(91);
    int d=0;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    for(int i=65;i<=90;i++)
    {
        if(a[i]!=0)d++;
    }
    return d;
}
int main()
{
    cin >> s;
    chuanhoa();
    if(xuly(s)%2==0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!";
}