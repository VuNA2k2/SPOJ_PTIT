#include<bits/stdc++.h>
using namespace std;
struct money
{
    int s;
    int tien;
};
bool compare(money a , money b)
{
    if((double)a.s/a.tien< (double) b.s/b.tien) return true;
    return false;
}
int main()
{
    int  n ,sum;
    cin >> n >> sum;
    vector<money> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i].tien;
        a[i].s=sum;
    }
    sort(a.begin(),a.end(),compare);
    int d=0;
    for(int i=0;i<n;i++)
    {
        if(sum - a[i].tien >=0)
        {
            sum -= a[i].tien;
            d++;
        }
    }
    cout << d;
}