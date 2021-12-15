#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>=0)
    {
        cout << n ;
    }
    else
    {
        int N=abs(n);
        int i=N%10;
        N/=10;
        int j=N%10;
        N/=10;
        if(i<j)
        {
            N=N*10+i;
        }
        else
        {
            N=N*10+j;
        }
        cout << -1*N;
    }
}