#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ;
    cin >> n >> m ;
    if(n>m)swap(n,m);
    if(n>=1)
    {
        cout << n << " " << (m-n)/2;
        return 0;
    }
    if(n==m)
    {
        cout << n << " " << 0;
        return 0;
    }
}