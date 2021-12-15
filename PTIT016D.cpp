#include<bits/stdc++.h>
using namespace std;
 
long long a[(int)1e5+5]={};
bool compare(long long a , long long b)
{
    return a>b;
}
int main()
{
    long long n , k;
    cin >> n>> k;
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    long long s = 0;
    sort(a+1,a+n,compare);
    for (long long i = 0; i <= k; i++)
        s += a[i];
    for (long long i = k+1; i <n; i++)
        s -= a[i];
    cout << s;
    return 0;
}