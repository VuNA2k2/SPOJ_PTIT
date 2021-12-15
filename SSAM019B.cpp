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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int ok=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    ok=1;
                    cout << a[i];
                    break;
                }
            }
            if(ok==1)break;
        }
        if(ok==0)
        {
            cout << "NO";
        }
        cout << endl;
    }
}