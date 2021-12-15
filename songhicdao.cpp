#include<bits/stdc++.h>
using namespace std;
int nghichdao(int n)
{
    int i,s=0;
    while(n>0)
    {
        i=n%10;
        s=s*10+i;
        n/=10;
    }
    return s;
}
int main()
{
    int a,b;
    cin >> a >> b;
    if(nghichdao(a)>nghichdao(b))
    {
        cout << nghichdao(a) << endl;
    }
    else
    {
        cout << nghichdao(b) << endl;
    }
}