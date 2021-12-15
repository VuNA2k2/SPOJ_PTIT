#include<bits/stdc++.h>
using namespace std;
bool snt(int x)
{
    if(x < 2) return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
vector<bool> isprime(1005,true);
int main()
{
    int d=0,n,k;
    cin >> n >> k;
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(snt(i)&&isprime[i])
        {
            isprime[i]=false;
            d++;
            if(d==k)
            {
                cout << i;
                return 0;;
            }
        }
        for(int j=i;j<=n;j+=i)
        {
            if(isprime[j])
            {
                d++;
                isprime[j]=false;
                if(d==k)
                {
                    cout << j;
                    return 0;
                }
                
            }
        }
    }
}