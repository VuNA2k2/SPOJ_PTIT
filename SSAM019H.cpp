#include<stdio.h>
long long fibo(int n)
{
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
    scanf("%d",&n);
    printf("%lld\n",fibo(n)%1000000007);
}