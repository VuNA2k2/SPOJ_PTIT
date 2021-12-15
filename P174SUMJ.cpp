#include<bits/stdc++.h>
using namespace std;
vector<int> a(1005,0);
int d;
void process()
{
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=0)
        {
            count++;
            a[i]--;
        }
    }
    d+=count-1;
}
int main()
{
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        a[x]++;
    }
    sort(a.begin(),a.end());
    d=0;
    while(true)
    {
        process();
        if(a[a.size()-1]==0)break;
    }
    cout << d;
}