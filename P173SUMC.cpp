#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , n , m,d=0;
    cin >> n >> m;
    for(b=0;b<=sqrt(m);b++)
    {
        a=m-b*b;
        if(a*a+b==n)d++;
    }
    cout << d;
}
