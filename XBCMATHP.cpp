#include<bits/stdc++.h>
using namespace std;
int value(int x)
{
    if(x==53)return 9;
    if(x==46 || x==56)return 7;
    x=x%10;
    if(x==0||x==4||x==7)return 1;
    if(x==1||x==8)return 2;
    if(x==5)return 3;
    if(x==2)return 4;
    if(x==9)return 5;
    if(x==6)return 6;
}
int main()
{
    int a , b;
    cin >> a >> b;
    for(int i=a+1;i<62;i++)
    {
        if(value(i)==b)
        {
            cout << i;
            return 0;
        }
    }
    cout << "0";
}