#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=0,r=0,lx=0,rx=0,max=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            l++;
            lx++;
            if(lx-r>max)max=lx-r;
        }
        else if(s[i]=='R')
        {
            r++;
            rx++;
            if(rx-l>max)max=rx-l;
        }
        else
        {
            lx++;
            if(lx-r>max)max=lx-r;
            rx++;
            if(rx-l>max)max=rx-l;
        }
    }
    cout << max;
}