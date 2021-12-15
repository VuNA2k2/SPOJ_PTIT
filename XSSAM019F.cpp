#include<bits/stdc++.h>
using namespace std;
long long fb(int n)
{
    long long f1=1,f2=1,f;
    if(n<=2)return 1;
    for(int i=3;i<=n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
    }
    return f;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << fb(n) << endl;
    }
}