#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        int d=0;
        while(n%i==0)
        {
            d++;
            n/=i;
            if(d>1) return false;
        }
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
        if(check(n))cout << "1";
        else cout << "0";
        cout << endl;
    }
}