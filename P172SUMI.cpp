#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    long long s=0;
    vector<long long> a;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2!=0)a.push_back(x);
        else s+=x;
    }
    sort(a.rbegin(),a.rend());
    for(int i=1;i<a.size();i++)
    {
        a[i]=a[i]+a[i-1];
    }
    if(a.size()==0)
    {
        cout << 0 ;
        return 0;
    }
    if(a.size()%2==0)
    {
        cout << a[a.size()-2]+s;
    }
    else
    {
        cout << a[a.size()-1]+s;
    }
}