#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int min=(n/7)*2 ,x=n%7,max;
    if(x>2&&x<6)
    {
        max=min+2;
    }
    else if(x==6)
    {
        max=min+2;
        min+=1;
    }
    else
    {
        max=min+x;
    }
    cout << min << " " << max;
}