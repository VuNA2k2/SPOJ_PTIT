#include<bits/stdc++.h>
using namespace std;
string s;
int n=0;
void sumstr()
{
    for(int i=0;i<s.size() ; i++)
    {
        n+=(int)(s[i]-'0');
    }
}
int sumnum(int n)
{
    int N=n,s=0;
    while(N>0)
    {
        s+=N%10;
        N/=10;
    }
    return s;
}
int main()
{
    int d=2;
    cin >> s;
    sumstr();
    if(s.size()<2)
    {
        d=0;
    }
    else if(n<10) d=1;
    else
    {
        while(sumnum(n)>=10)
        {
            d++;
            n=sumnum(n);
        }
    }
    cout << d;
}