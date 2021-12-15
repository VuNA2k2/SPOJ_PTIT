#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int N=n;
    for(int i=2;i*i<=N;i++)
    {
        int d=0;
        while(N%i==0)
        {
            d++;
            N/=i;
        }
        if(d!=0)
            cout << i << " " << d << " ";
    }
    if(N>1)
    {
        cout << N << " 1";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}