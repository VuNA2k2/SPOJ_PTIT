#include<bits/stdc++.h>
using namespace std;
int process(int n)
{
    int i;
    for( i=sqrt(n);i>=1;i--)
    {
        if(n%i==0)break;
    }
    return i;
}
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    int r=process(x), c=x/r, k=0;
    vector< vector<int> > a(r , vector<int> (c));
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            a[j][i]=s[k];
            k++;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << (char)a[i][j];
        }
    }
}