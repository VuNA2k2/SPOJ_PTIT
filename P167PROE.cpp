#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int d=1;
        for (long long i= 2*n-1; i>n; i--)
        {
            long long x=n*i;
            if(x%(i-n)==0)
            {
                d+=2;
            }
        }
        cout << d << endl;
    }
}