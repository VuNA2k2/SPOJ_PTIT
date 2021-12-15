#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x==0)d++;
    }
    if(d==0)cout << "NO";
    else cout << "YES";
}