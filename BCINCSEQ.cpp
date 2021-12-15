#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005]={},i,d=1,max=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])
        {
            d++;
        }
        else
        {
            if(d>max)
            {
                max =d;
            }
            d=1;
        }
    }
    cout << max << endl;
}