#include<bits/stdc++.h>
using namespace std;
bool scp(int n)
{
    int m=sqrt(n);
    return m*m==n;
}
int main()
{
    int t=0;
    while(true)
    {
        t++;
        int a , b,d=0;
        cin >> a >> b;
        if(a==0&&b==0)break;
        for(int i=sqrt(a)-1;i<=sqrt(2*b);i++)
        {
            int n=i*(i+1)/2;
            if(n+1>a&&n+1<b&&scp(n+1))
            {
                d++;
            }
        }
        cout << "Case " << t << ": " << d << endl;
    }
}