#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r , c;
    cin >> r >> c;
    vector<string> a(r);
    for(int i=0;i<r;i++)
    {
        cin.ignore();
        cin >> a[i];
    }
    int dr=0,dc=0,s=0;
    for(int i=0;i<r;i++)
    {
        int ok=0;
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='.')
            {
                ok=1;
            }
            else
            {
                ok=0;
                break;
            }
        }
        if(ok==1) dr++;
    }
    s=dr*c;
    for(int j=0;j<c;j++)
    {
        int ok=0;
        for(int i=0;i<r;i++)
        {
            if(a[i][j]=='.')
            {
                ok=1;
            }
            else
            {
                ok=0;
                break;
            }
        }
        if(ok==1) dc++;
    }
    s= s+ dc*r - dr*dc;
    cout << s;
}