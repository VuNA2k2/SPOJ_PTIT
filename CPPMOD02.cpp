#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , m;
        cin >> a >> m;
        int ok=0;
        for(int i=0;i<m;i++)
        {
            if((a*i)%m==1)
            {
                ok=1;
                cout << i;
                break;
            }
        }
        if(ok==1)
        {
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
        
    }
}