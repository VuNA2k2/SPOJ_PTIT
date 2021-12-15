#include<bits/stdc++.h>
using namespace std;
long long fibo(int n)
{
    if(n==0)return 0;
    if(n==1||n==2)return 1;
    long long i=3,fb=0,fb1=1,fb2=1;
    while(i<=n)
    {
        fb=fb1+fb2;
        fb1=fb2;
        fb2=fb;
        i++;
    } 
    return fb;
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}