#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=3594,x=0;
    cin >> n;
    int N=n;
    while(N>0)
    {
        x+=N%10;
        N/=10;
    }
    if((n%4==0&&n%100!=0)||n%400==0)
    {
        s=s+x*366+3;
    }
    else
    {
        s=s+x*365-10;
    }
    cout << s;
}