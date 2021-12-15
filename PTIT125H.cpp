#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0;
    cin >> n;
    string s;
    cin.ignore();
    cin >> s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='S')d++;
        else 
        {
            d++;
            i++;
        }
    }
    if(d>=n)cout << n;
    else cout << d+1;
}