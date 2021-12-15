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
    int s1=0, max1=-9999999 , s2=0 , max2=-9999999;
    for(int i=0;i<n;i++)
    {
        s1+=a[i];
        if(s1>max1)max1=s1;
        if(s1<0)s1=0;
    }
    cout << max1 << " ";
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
    {
        s2+=a[i];
        if(s2>max2)max2=s2;
        if(s2<0)s2=0;
    }
    cout << max2;
}
