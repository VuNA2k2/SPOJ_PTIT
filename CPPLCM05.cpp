#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a , long long b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a , x , y;
        cin >> a >> x >> y;
        for(int i=0;i<gcd(x,y);i++)
        {
            cout << a;
        }
        cout << endl;
    }
}