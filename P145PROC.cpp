#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(42);
    int x;
    for(int i=0;i<10;i++)
    {
        cin >> x;
        a[x%42]++;
    }
    int d=0;
    for(int i=0;i<42;i++)
    {
        if(a[i]!=0)d++;
    }
    cout << d;
}