#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , m , indexx,indexy,d;
    cin >> n >> m;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }   
    d=0; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='B')
            {
                indexx =i + 1;
                indexy =j + 1;
                d++;
            }
        }
    }
    d=sqrt(d);
    indexx-=d;
    indexy-=d;
    indexx+= (d/2)+1;
    indexy+= (d/2)+1;
    cout << indexx << " " << indexy;
}