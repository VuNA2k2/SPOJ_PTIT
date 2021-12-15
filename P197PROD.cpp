#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long s1=0,s2=0,n,m,x;
        cin >> n >> m;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            s1+=x;
        }
        for(int i=0;i<m;i++)
        {
            cin >> x;
            s2+=x;
        }
        if(n>m)cout << "No";
        else cout << "Yes";
        cout << endl;
    }
}