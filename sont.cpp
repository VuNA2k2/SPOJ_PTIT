#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    int i;
    if(n<2)return false;
    for ( i = 2; i <= sqrt(n) ; i++)
    {
        if(n%i==0)return false;
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