#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ,d1=0,d2=0,d3=0;
    cin >> a >> b;
    for(int i=1;i<=6;i++)
    {
        if(abs(i-a)<abs(i-b))d1++;
        else if(abs(i-a)>abs(i-b))d2++;
        else d3++;
    }
    cout << d1 << " " << d3 << " " << d2;
}
