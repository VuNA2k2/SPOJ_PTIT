#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long f1 , f2 , n,f;
    cin >> f1 >> f2 >> n;
    if(f1<0) f1+=1000000007;
    if(f2<0) f2+=1000000007;
    if(n%6==0)n=6;
    else n%=6;
    if(n==1)
    {
        cout << f1;
        return 0;
    }
    if(n==2)
    {
        cout << f2;
        return 0;
    }
    for(int i=3;i<=n;i++)
    {
        f= (f2 -f1)%1000000007;
        f1=f2;
        f2=f;
    }
    if(f<0)
    {
        cout << f+1000000007;
        return 0;
    }
    cout << f;
}