#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(26,0);
    for(int i=0;i<n;i++)
    {
        a[s[i]-'A']++;
    }
    sort(a.rbegin(),a.rend());
    long long x=0,i=0;
    while(1)
    {
        if(k-a[i]<0)
        {
            x+=pow(k,2);
            break;
        }
        x+=pow(a[i],2);
        k-=a[i];
        i++;
    }
    cout << x;
}