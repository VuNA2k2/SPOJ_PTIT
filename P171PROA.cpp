#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l , r , x;
    cin >> l >> r >> x;
    long long a=-1,s=1; 
    for(long long s=1;s<=r;s*=x)
    {
        if(s>=l)
        {
            cout << s << " ";
            a=0;
        }
    }
    if(a==-1)cout << "-1";
}