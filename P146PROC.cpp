#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(4);
    for(int i=0;i<4;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int d=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]!=a[i+1])d++;
    }
    cout << 4-d-1;
}