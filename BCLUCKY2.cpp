#include<bits/stdc++.h>
using namespace std;
int d0,d1;
int sum(int n)
{
    n++;
    d1=0;d0=0;
    while(n)
    {
        if(n%2==0)d0++;
        else d1++;
        n/=2;
    }
    return d0*4+d1*7;
}
int main()
{
    int n,i=0;
    cin >> n;
    while(i<n)
    {
        if(sum(i)==n)
        {
            for(int i=1;i<=d0;i++)
            {
                cout << 4;
            }
            for(int i=1;i<=d1;i++)
            {
                cout << 7;
            }
            break;
        }
        if(sum(i)>n)
        {
            cout << -1;
            break;
        }
        i++;
    }
}