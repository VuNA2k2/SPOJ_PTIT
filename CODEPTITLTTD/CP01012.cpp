#include<bits/stdc++.h>
using namespace std;

bool Bsearch(long long a[] ,int l , int h , long long x)
{
    if(l<=h)
    {
        int mid = l+(h-l)/2;
        if(a[mid]==x)return true;
        if(a[mid]>x)return Bsearch(a,l,mid-1,x);
        return Bsearch(a,mid+1,h,x);
    }
    return false;
}
bool scp(long long a)
{
    long long  x = sqrt(a);
    return x*x==a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        long long a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            a[i]=a[i]*a[i];
        }
        sort(a,a+n);
        int check1=0;
        for(int i = 0 ; i < n-2 ; i++)
        {
            for(int j = i+1 ; j<n-1; j++)
            {
                if(scp(a[i]+a[j]))
                {
                    if(Bsearch(a,j+1,n-1,(a[i]+a[j])))
                    {
                        check1=1;
                        break;
                    }
                }
                if(check1==1)break;
            }
            if(check1==1)break;
        }
        if(check1==0)cout <<"NO";
        else cout << "YES";
        cout << endl;
    }
}