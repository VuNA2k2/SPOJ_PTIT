#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0;
    cin >> n;
    vector<int> a(n),b(n),tanso(1005,0);
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        tanso[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(tanso[a[i]]==0)d++;
        if(a[i]==b[i]&&tanso[a[i]]<2)d++;
    }
    cout << d;
}