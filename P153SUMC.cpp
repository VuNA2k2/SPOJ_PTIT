#include<bits/stdc++.h>
using namespace std;
long long f(int n,int x,int y)
{
    long long f1=x,f2=y,f;
    int i=3;
    while(i<=n)
    {
        f=f2-f1;
        f1=f2;
        f2=f;
        i++;
    }
    return f;
}
int main()
{
    int n, x, y;
    cin >> x >> y >> n;
    cout << f(n,x,y);
}