#include<bits/stdc++.h>
using namespace std;
struct light
{
    int time;
    int level;
};
bool compare(light a , light b)
{
    if(a.level>b.level)return true;
    if(a.level==b.level) return a.time < b.time;
    return false;
}
int main()
{
    int n , k;
    cin >> n >> k;
    vector<light> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i].level;
        a[i].time=i+1;
    }
    sort(a.begin(),a.end(),compare);
    vector<int> x(k);
    for(int i=0;i<k;i++)
    {
        x[i]=a[i].time;
    }
    sort(x.begin(),x.end());
    cout << a[k-1].level << endl;
    for(int i=0;i<k;i++)
    {
        cout << x[i] << " ";
    }
}