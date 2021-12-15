#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=1;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i][1]==s[i+1][0])d++;
    }
    cout << d ;
}