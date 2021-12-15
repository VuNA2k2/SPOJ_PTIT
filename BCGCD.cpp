#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}
int main()
{
    while(true)
    {
        long long a , b;
        cin >> a >> b;
        if(a==0||b==0)break;
        cout << gcd(a,b) << " " << lcm(a,b) << endl;
    }
}