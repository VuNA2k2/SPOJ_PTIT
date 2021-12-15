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
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            a[i]*=a[i];
        }
        sort(a.begin(),a.end());
        int ok=0;
        for(int i=n-1;i>=2;i--)
        {
            int l=0,r=i-1;
            while(l<r)
            {
                if(a[l]+a[r]==a[i])
                {
                    ok=1;
                    break;
                }
                if(a[l]+a[r]<a[i])l++;
                else r--;
            }
            if(ok==1)break;
        }
        if(ok==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}