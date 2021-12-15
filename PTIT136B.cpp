#include<bits/stdc++.h>
using namespace std;
void tao()
{
    int r , c;
    cin >> r >> c;
    vector<vector<char> > s(r, vector<char> (c));
    vector<vector<char> > S(r, vector<char> (2*c));
    vector<vector<char> > X(2*r, vector<char> (2*c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> s[i][j];
        }
    }
    int x , y;
    cin >> x >> y;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<2*c;j++)
        {
            if(i<r&&j<c)
            {
                S[i][j]=s[i][j];
            }
            else if(j>=c)
            {
                S[i][j]=s[i][2*c-1-j];
            }
        }
    }
    for(int i=0;i<2*r;i++)
    {
        for(int j=0;j<2*c;j++)
        {
            if(i<r)
            {
                X[i][j]=S[i][j];
            }
            else
            {
                X[i][j]=S[2*r-1-i][j];
            }
        }
    }
    if(X[x-1][y-1]=='#')X[x-1][y-1]='.';
    else X[x-1][y-1]='#';
    for(int i=0;i<2*r;i++)
    {
        for(int j=0;j<2*c;j++)
        {
            cout << X[i][j];
        }
        cout << endl;
    }
}
int main()
{
    tao();
}