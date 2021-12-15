#include<bits/stdc++.h>
using namespace std;
int res(int a)
{
    int A=0;
    while(a>0)
    {
        A=A*10+a%10;
        a/=10;
    }
    return A;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if(res(a) > res(b))
    {
        cout << res(a);
    }
    else
    {
        cout << res(b);
    }
}
