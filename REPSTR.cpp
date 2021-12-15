#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a , b;
    cin >> a >> b;
    sort(b.begin(),b.end());
    int r=b.size()-1;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<b[r])
        {
            a[i]=b[r];
            r--;
        }
        if(r<0)break;
    }
    cout << a;
}