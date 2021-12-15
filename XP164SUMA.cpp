#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    string a , b;
    int d1=0,d2=0;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
        a=s[0];
        if(s[i]!=a)
        {
            d2++;
            b=s[i];
        }
        else d1++;
    }
    if(d1>d2)cout << a;
    else cout << b;
}