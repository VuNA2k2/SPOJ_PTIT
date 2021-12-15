#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c , k;
    cin >> c >> k;
    int s=pow(10,k);
    int min = (c/s)*s;
    int max = min + s;
    if(c-min >= max - c)
    {
        cout << max;
    }
    else 
    {
        cout << min;
    }
    
}