#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,d=0;
    cin >> n;
    for(i = 2; i <= sqrt(n) ; i ++)
    {
        d=0;
        while (n%i==0)
        {
            d++;
            n/=i;
        }
        if(d!=0)cout << i << " " << d << endl;
    }
    if(n>1)
    {
        cout << n << " " << 1 ;
    }
}