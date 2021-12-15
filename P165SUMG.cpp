#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , a , b,d=0;
        cin >> n >> a >> b;
        if(a>b)swap(a,b);
        while(n)
        {
            if((double)n/a>(double)n/b)
            {
                n-=a;
                d++;
            }
            else
            {
                n-=b;
                d++;
            }
        }
        if(n==0)cout << d;
        else cout << -1;
        cout << endl;
    }
}