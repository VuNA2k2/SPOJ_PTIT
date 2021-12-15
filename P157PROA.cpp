#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,max=0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(1005,0);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(b[a[i]]>max)max=b[a[i]];
        }
        for(int i=1;i<=1000;i++)
        {
            if(b[i]==max)
            {
                cout << i;
                break;
            }
        }
        cout << endl;
    }
}