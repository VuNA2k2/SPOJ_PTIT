#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c , x , y , z;
    cin >> a >> b >> c;
    x=sqrt((a*b)/c);
    y=sqrt((a*c)/b);
    z=sqrt((c*b)/a);
    cout << 4*(x+y+z);
}