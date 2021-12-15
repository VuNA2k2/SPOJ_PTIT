#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x , y ;
        cin >> n >> x >> y;
        int b=n*n , hang = n-1 , cot = n-1, A =0 , i=1;
        vector< vector<int> > a(n , vector<int> (n));
        while(A<=n/2)
        {
            for(int j=A;j<=cot;j++)a[A][j]=i++;
            for(int j=A+1;j<=hang;j++)a[j][cot]=i++;
            for(int j=cot-1;j>=A;j--)a[hang][j]=i++;
            for(int j=hang-1;j>A;j--)a[j][A]=i++;
            A++;hang--;cot--;
        }
        cout << a[x-1][y-1] << endl;
    }
}