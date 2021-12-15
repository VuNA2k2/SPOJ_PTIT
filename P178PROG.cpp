#include<bits/stdc++.h>
using namespace std;
string s1,s2,s12,s;
int n;
void process()
{
    for(int i=0;i<n;i++)
    {
        s+=s2[i];
        s+=s1[i];
    }
    for(int i=0;i<n;i++)
    {
        s1[i]=s[i];
        s2[i]=s[i+n];
    }
}
int main()
{
    while(true)
    {
        cin>> n;
        if(n==0)break;
        cin >> s1 >> s2 >> s12;
        int d=0;
        s="";
        int ok=0;
        while(s!=s12&&d<=50)
        {
            s="";
            d++;
            process();
            if(s==s12)
            {
                ok=1;
                break;
            }
        }
        if(ok==1)cout << d << endl;
        else cout << -1 << endl;
    }
}