#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int N=n,s=0,i;
        while(N>0)
        {
            i=N%10;
            s=s*10+i;
            N/=10;
        }
        if(s==n)cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}