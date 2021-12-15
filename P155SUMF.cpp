#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> x(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        x[i]=b[i]*(i+1);
    }
    a[0]=x[0];
    cout << a[0] << " ";
    for(int i=1;i<n;i++)
    {
        a[i]=x[i]-x[i-1];
        cout << a[i] << " ";
    }

}