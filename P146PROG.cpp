#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    int t1=s/2,i=0,d1=0;
    while(t1-a[i]>=0)
    {
        d1++;
        t1-=a[i];
        i++;
    }
    int t2=s/2,j=n-1,d2=0;
    while(t2-a[j]>=0)
    {
        d2++;
        t2-=a[j];
        j--;
    }
    if(t1<t2)d2++;
    else if(t1>t2)d1++;
    else if(i==j)d1++;
    cout << d1 << " " << d2;
}