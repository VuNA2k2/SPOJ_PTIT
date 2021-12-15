#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n , k;
        cin >> n >> k;
        long long s;
        if(n<k) s=n*(n+1)/2;
        if(n>=k)
        {
            long long m=n/k,x=n%k;
            if(n%k==0)
            {
                s=m*k*(k+1)/2;
            }
            else
            {
                s=x*(x+1)/2 + k*(k+1)/2;
            }
        }
        if(s==k)cout << "1" << endl;
        else cout << "0" << endl;
    }
}