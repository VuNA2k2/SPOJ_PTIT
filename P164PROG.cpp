#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int sum=0 , i,d=0;
    for(i=1;n>=0;i++)
    {
        sum=i*(i+1)/2;
        n-=sum;
        if(n>=0)d++;
        if(n-sum<0)break;
    }
    cout << d;
}