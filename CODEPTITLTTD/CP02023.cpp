#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k ;
    cin >> n >> k;
    vector<int> a(n);
    long long s=0;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i];
        s+=a[i];
    }
    sort(a.begin(),a.end());
    if((k/n)%2!=0)s=-s;
    for(int i = 0 ; i < k%n ; i ++)
    {
        s-=(2*a[i]);
    }
    cout << s;
}