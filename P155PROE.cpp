#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')sum*=2;
        if(s[i]=='1')sum*=7;
        if(s[i]=='2')sum*=2;
        if(s[i]=='3')sum*=3;
        if(s[i]=='4')sum*=3;
        if(s[i]=='5')sum*=4;
        if(s[i]=='6')sum*=2;
        if(s[i]=='7')sum*=5;
        if(s[i]=='8')sum*=1;
        if(s[i]=='9')sum*=2;
    }
    cout << sum;
}