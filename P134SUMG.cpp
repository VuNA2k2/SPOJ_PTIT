#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a[15]={} , b[15]={} , c[15]={} ,min;
    cin >> n;
    a[0]=1;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i] >> b[i];
        a[i]*=a[i-1];
        b[i]+=b[i-1];
        c[i]=abs(a[i]-b[i]);
    }
    min = c[1];
    for(int i=1;i<=n;i++)
    {
        if(c[i]<min)
        {
            min = c[i];
        }
    }
    cout << min << endl;
}