#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        long long x;
        cin >> n;
        vector<long long> a(n,-1);
        for(long long i=0;i<n;i++)
        {
            cin >> x;
            if(x>=0)a[x]=x;
        }
        for(long long i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}