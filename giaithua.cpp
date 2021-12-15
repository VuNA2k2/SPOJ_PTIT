#include<bits/stdc++.h>
using namespace std;
long long giaithua(int n)
{
    if(n==0)return 1;
    return n*giaithua(n-1);
}
int main()
{
    while (true)
    {
        int n ;
        cin >> n;
        if(n==0)break;
        cout << giaithua(n) << endl;
    }
}