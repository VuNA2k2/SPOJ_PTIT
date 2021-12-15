#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    int d1=0 , d2=0;
    string a , b;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    a=s[0];
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])b=s[i+1];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==a)d1++;
        else d2++;
    }
    if(d1>d2)cout << a;
    else cout << b;
}