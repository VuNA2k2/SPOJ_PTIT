#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin >> a[i];
    }
    int d=0;
    int i, j; 
    for (i = 0; i < n-1; i++)     
        for (j = 0; j < n-i-1; j++) 
            if (a[j] != a[j+1]) 
            {
                swap(a[j], a[j+1]);
                d++;
            }
    cout << d;
}