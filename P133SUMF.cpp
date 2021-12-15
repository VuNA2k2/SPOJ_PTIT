#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(3);
    vector<int> b(2);
    for(int i=0;i<3;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<2;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    if(b[0]==b[1]) cout << a[2]+b[1];
    else
    {
        if(b[0]>b[1]) cout << a[0]+b[1];
        else cout << a[1]+b[0];
    }
}