#include<bits/stdc++.h>
using namespace std;
bool snt(int x)
{
    if(x<2)return false;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(snt(n))cout << "YES";
    else cout << "NO";
}