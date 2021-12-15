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
    long long s=0,max=0;
    for(int i=0;i<n;i++)
    {
        s+=(long long)a[i];
        if(s>max)max=s;
        if(s<0)s=0;
    }
    cout << max;
}