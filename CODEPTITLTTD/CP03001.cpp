#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,gt=1;
    cin >> n;
    int a[n][n];
    int r = n-1  , c = n-1 ;
    while(d<=n/2)
    {
        for(int i = d ; i <= r ; i ++)a[d][i]=gt++;
        for(int i = d+1 ; i <= c ; i ++)a[i][r]=gt++;
        for(int i = r-1 ; i >= d ; i --)a[c][i]=gt++;
        for(int i = c-1 ; i > d ; i --)a[i][d]=gt++;
        d++;r--;c--;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}