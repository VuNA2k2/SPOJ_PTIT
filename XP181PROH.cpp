#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    if(a==b)
    {
        cout << "infinity";
        return 0;
    }
    if(a<b)
    {
        cout << "0";
        return 0;
    }
    int d=0,n=a-b;
    for(int i=1;i*i<=a-b;i++)
    {
        if((a-b)%i==0)
        {
            if(i>b)d++;
            if(n/i>b)d++;
            if(i>b&&n/i>b&&i==n/i)d--;
        }
    }
    cout << d;
}