#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    printf("%.12lf",(double)s/n);
}