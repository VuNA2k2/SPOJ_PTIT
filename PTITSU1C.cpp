#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, max=0,s=0;
        cin >> n >> m;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    s=a[i]+a[j]+a[k];
                    if(s>max&&s<=m)
                    {
                        max=s;
                    }
                }
            }
        }
        cout << max << endl;
    }
}
