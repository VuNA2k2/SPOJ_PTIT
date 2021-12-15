#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i][1]=='+')x++;
        if(a[i][1]=='-')x--;
    }
    cout << x;
}