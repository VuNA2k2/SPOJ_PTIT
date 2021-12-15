#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector< vector<char> > a(n+2,vector<char> (n+2,'x'));
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            cin >> a[i][j];
        }
    }
    int ok=1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            int d=0;
            if(a[i-1][j]=='o')d++;
            if(a[i+1][j]=='o')d++;
            if(a[i][j-1]=='o')d++;
            if(a[i][j+1]=='o')d++;
            if(d%2!=0)
            {
                ok=0;
                break;
            }
            //cout << d << " ";
        }
        if(ok==0)
        {
            break;
        }
        //cout << endl;
    }
    if(ok==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}