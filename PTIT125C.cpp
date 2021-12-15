#include<bits/stdc++.h>
using namespace std;
struct pos
{
    int a , b;
};

int main()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n+1,0);
    vector<pos> p(k);
    for(int i=0;i<k;i++)
    {
        cin >> p[i].a >> p[i].b;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=p[i].a;j<=p[i].b;j++)
        {
            a[j]++;
        }
    }
    sort(a.begin(),a.end());
    cout << a[n/2+1];
}