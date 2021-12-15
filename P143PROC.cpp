#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long y , k , n,ok=0;
    cin >> y >> k >> n;
    for(long long i=k-y;i<=n-y;i+=k)
    {
        if(i>0)
        {
            ok=1;
            cout << i << " ";
        }

    }
    if(ok==0)cout << "-1";
}