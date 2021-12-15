#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , l;
    cin >> n >> l;
    vector<int> a(n+1);
    a[n]=l;
    vector<double> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        if(i==0)b[i]=(double) a[i];
        else b[i]=(double)(a[i+1]-a[i])/2;
    }
    sort(b.begin(),b.end());
    printf("%.10lf",b[n-1]);
}