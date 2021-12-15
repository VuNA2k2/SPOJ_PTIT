#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int d=0,x=n;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==x)
        {
            x--;
        }
        else 
        {
            d++;
        }
    }
    cout << d;
}