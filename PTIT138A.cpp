#include<bits/stdc++.h>
using namespace std;
void triangle(int a,int b,int c)
{
    long long A=a*a,B=b*b,C=c*c;
    if(A+B==C)
    {
        cout << "right" << endl;
    }
    else
    {
        cout << "wrong" << endl;
    }
}
int main()
{
    while(true)
    {
        int a[3]={},i;
        for(i=0;i<3;i++)
        {
            cin >> a[i];
        }
        if(a[0]==0)break;
        sort(a,a+3);
        triangle(a[0],a[1],a[2]);
    }
}