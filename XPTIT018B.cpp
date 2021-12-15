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
        vector<int> a(n) , b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ok=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                ok=0;
                break;
            }
        }
        if(ok==0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}