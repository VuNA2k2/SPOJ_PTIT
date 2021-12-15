#include<bits/stdc++.h>
using namespace std;
long long lcm(long long a , long long b)
{
    return a*b/__gcd(a,b);
}
long long Pow(long long a , long long b)
{
    long long s=1;
    for(int i=0;i<b;i++)
    {
        s*=a;
    }
    return s;
}
int main()
{
    long long x , y , z , n;
    cin >> x >> y >> z >> n;
    long long a=lcm(x,lcm(y,z)),X=Pow(10,n-1);
    if(a>X*10)
    {
        cout << -1 << endl;
    }
    if(X%a==0)cout<< X << endl;
    else cout << (X/a+1)*a << endl;
}