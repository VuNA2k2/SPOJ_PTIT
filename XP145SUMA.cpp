#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2!=0)
    {
        cout << "NO";
        return 0;
    }
    int d1=0,d2=0,s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4')d1++;
        if(s[i]=='7')d2++;
        if(i<n/2) s1+=(s[i]-'0');
        else s2+=(s[i]-'0');
    }
    if(d1+d2==n&&s1==s2)cout << "YES";
    else cout << "NO";
}