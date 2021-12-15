#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,ok=0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2!=0)ok++;
        }
        if((ok!=0&&n%2!=0)||(ok%2!=0)||(ok>0&&n-ok>0))cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}