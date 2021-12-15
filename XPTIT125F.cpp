#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,u,d,su=0,sd=0,mu=999999,md=999999;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> u >> d;
        su+=u;
        sd+=d;
        if(u<mu)mu=u;
        if(d<md)md=d;
    }
    su+=md;
    sd+=mu;
    if(su<sd)cout << sd;
    else cout << su;
}