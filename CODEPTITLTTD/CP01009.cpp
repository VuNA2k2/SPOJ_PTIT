#include<bits/stdc++.h>
using namespace std;
struct CP01009
{
    int x,ts,id;
    CP01009()
    {
        ts=0;
    }
};
bool cmp(CP01009 a , CP01009 b)
{
    if(a.ts>b.ts)return true;
    else if(a.ts==b.ts)return a.id<b.id;
    else return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        vector<int> a(n), ts(1000000007, 0);
        vector<CP01009> X(n);
        for(int i =0 ;i < n ;i ++)
        {
            cin >> a[i];
            ts[a[i]]++;
        }
        for(int i = 0 ; i< n ;i++)
        {
            X[i].x=a[i];
            X[i].ts=ts[a[i]];
            X[i].id=i;
        }
        sort(X.begin(),X.end(),cmp);
        for(int i = 0 ;i < n ;i ++)
        {
            cout << X[i].x << " ";
        }
        cout << endl;
    }
}
