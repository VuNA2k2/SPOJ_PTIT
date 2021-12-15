#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int s=0,i=0,X=1;
        while(n>0)
        {
            int x=n%10;
            i++;
            X*=i;
            s= s+x*X;
            n/=10;
        }
        cout << s << endl;
    }
}