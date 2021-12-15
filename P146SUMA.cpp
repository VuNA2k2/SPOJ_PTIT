#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int d=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            d=1;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==0)d++;
                else break;
            }
            if(d>max)max=d;
        }
    }
    cout << max;
}