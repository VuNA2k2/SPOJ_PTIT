#include<bits/stdc++.h>
using namespace std;
bool scp(int n)
{
    if((int)sqrt(n)*sqrt(n)==n)return true;
    return false;
}
int main()
{
    int n,d=0;
    cin >> n;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(sqrt(i*i+j*j)<=n&&scp(i*i+j*j))d++;
        }
    }
    cout << d;
}