#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tmp=0,i=0;
    while(n-tmp>0)
    {
        i++;
        tmp+=i;
        n-=tmp;
    }
    cout << i;
}