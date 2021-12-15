#include<bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int n,d=0;
        cin >> n;
        if(n==0)break;
        while(1)
        {
            if(n==1)
            {
                //cout << n << endl;
                d++;
                break;
            }
            else if(n%2==0)
            {
                n/=2;
                //cout << n << endl;
                d++;
                continue;
            }
            else if(n%2==1)
            {
                n=n*3+1;;
                //cout << n << endl;
                d++;
                continue;
            }
            
        }
        cout << d;
        cout << endl;
    }
    
}