#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(3);
    vector<int> b(2);
    int s=0,min=1000;
    for(int i=0;i<3;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<2;i++)
    {
        b[i]=a[i+1]-a[i];
    }
    if(b[0]<=b[1])s=3*a[0]+2;
    else if(b[0]>b[1])s=3*a[1]
}