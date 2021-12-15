#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int d=0, x , y, l , r;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            x=n/i;
            y=i;
            if((x+y-1)%2==0)
            {
                r=(x+y-1)/2;
                l=x-r;
                if(l>=1&&l<r)d++;
            }
        }
    }
    cout << d;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int T, n;
        cin >> T >> n;
        cout << T << " " ;
        solve(2*n);
        cout << endl;
    }
}
