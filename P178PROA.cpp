#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        if(n<1000000)
        {
            cout << n << endl;
            continue;
        }
        else if (n>=1000000&&n<5000000)
        {
            cout << n - n/10 << endl;
            continue;
        }
        else
        {
            cout << n - n*20/100 << endl;
        }
        
    }
}