#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , a , b , c,d=0;
    cin >> n >> a >> b >> c;
    if(n<a)
    {
        if(n<b)
        {
            cout << "0";
        }
        else
        {
            d+=(n-b)/(b-c);
            n=b+(n-b)%(b-c);
            while(n-b>=0)
            {
                d++;
                n=n-b+c;
            }
            cout << d;
        }
    }
    else
    {
        if(a<=b-c||n<b)
        {
            cout << n/a;
        }
        else
        {
            d+=(n-b)/(b-c);
            n=b+(n-b)%(b-c);
            while(n-b>=0)
            {
                d++;
                n=n-b+c;
            }
            while(n-a>=0)
            {
                d++;
                n-=a;
            }
            cout << d;
        }
    }
}