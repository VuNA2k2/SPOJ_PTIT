#include<bits/stdc++.h>
using namespace std;

int count(int a,int b)
{
    int d=0;
    while(a%b==0)
    {
        d++;
        a/=b;
    }
    return d;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, p,d=0;
        cin >> n >> p;
        for(int i=2;i<=n;i++)
        {
            d+=count(i,p);
        }
        cout << d << endl;
    }
}