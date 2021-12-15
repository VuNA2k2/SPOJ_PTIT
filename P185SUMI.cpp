#include<bits/stdc++.h>
using namespace std;
bool scp(int n)
{
    if(sqrt(n)*sqrt(n)==n)return true;
    return false;
}
bool snt(int n)
{
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(snt(n))
        {
            cout << "1 "  << n << endl;
            continue;
        }
        for(int i=n;i>=1;i--)
        {
            if(n%i==0&&scp(i)) 
            {
                cout << sqrt(i) << " " << n/i << endl;
                break;
            }
        }
    }
}