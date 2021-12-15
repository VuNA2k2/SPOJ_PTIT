#include<bits/stdc++.h>
using namespace  std;
int gop(string s)
{
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            x=x*10+s[i]-'0';
        else 
        {
            x=0;
            break;
        }
    }
    return x;
}
string tach(int x)
{
    string s="";
    while(x>0)
    {
        int i=x%10;
        s = (char) (i+'0') + s;
        x/=10;
    }
    return s;
}
int main()
{
    string a , b , c;
    cin >> a >> b >> c;
    vector<int> x(3);
    x[0]=gop(a) ; x[1]=gop(b) ; x[2]=gop(c);
    string s;
    if(x[0]==0)
    {
        s=a;
    }
    if(x[1]==0)
    {
        s=b;
    }
    if(x[2]==0)
    {
        s=c;
    }
    sort(x.begin(),x.end());
    int n;
    if(s!=c)
    {
        n = x[2]-x[1];
    }
    else
    {
        n=x[1]+x[2];
    }
    string N=tach(n);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                cout << N[i];
                break;
            }
        }
}
