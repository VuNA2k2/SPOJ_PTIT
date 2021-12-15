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
    int max=0;
    for(int i=0;i<n-1;i++)
    {
        int d=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]> a[i])d++;
        }
        if(d>max)max=d;
    }
    cout << max;
}