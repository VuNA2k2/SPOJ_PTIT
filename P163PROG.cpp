#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , x , d=0;
    cin >> n >> x;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(i!=x/i)
            {
                if(i<=n&&x/i<=n)d+=2;
            }
            else d++;
        }
    }
    cout << d;
}