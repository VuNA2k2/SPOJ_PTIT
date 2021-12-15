#include<bits/stdc++.h>
using namespace std;
long long n;
void check()
{
    int dem=0;
    while (n>0)
    {
        int i= n%10;
        if(i==4||i==7) dem++;
        n/=10;
    }
    if(dem==7||dem==4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    cin >> n;
    check();
}