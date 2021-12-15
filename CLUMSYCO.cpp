#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0;
    string s;
    cin >> s;
    int l=0, r=s.size()-1;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            d++;
        }
        l++;
        r--;
    }
    cout << d;
}