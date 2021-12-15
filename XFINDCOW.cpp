#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int d=0,S=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==')'&&s[i+1]==')')d++;
    }
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='('&&s[i+1]=='(')S+=d;
        if(s[i]==')'&&s[i+1]==')')d--;
    }
    cout << S;
}