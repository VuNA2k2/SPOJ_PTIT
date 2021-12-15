#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],k,x=0;
    for(int i = 0 ; i < 3 ; i ++) cin >> a[i];
    cin >> k;
    for(int i = 0 ; i < 3 ; i ++) 
    {
        if(a[i]<k) x+=a[i];
        else x+=(k-1);
    }
    cout << x+1;
}