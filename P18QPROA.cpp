#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d=1;
        cin >> n;
        if(n%2!=0)
        {
            cout << "0" << endl;
        }
        else
        {
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    if(i%2==0)d++;
                    if((n/i)%2==0)d++;
                    if(i==n/i)d--;
                }
            }
            cout << d << endl;
        }
    }
}