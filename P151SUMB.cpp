#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max=9999999;
    for(int i=0;i<=(n/3);i++)
    {
        int x=n-i*3;
        if(x%5==0)
        {
            if((x/5)+i<max)max=(x/5)+i;
        }
    }
    if(max==9999999)
    {
        cout << "-1";
        return 0;
    }
    cout << max;
}