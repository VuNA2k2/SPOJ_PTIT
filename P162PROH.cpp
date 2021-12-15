#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,x;
    cin >> x;
    vector<int> d(x);
    d[0]=1;
    while(x>=d[i])
    {
        d[i+1]=i+1+d[i];
        i++;
        x-=d[i];
    }
    cout << i;
}