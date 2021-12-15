#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int ok=1;
    while(n>0&&m>0)
    {
        n--;
        m--;
        if(ok==1)ok=0;
        else ok=1;
    }
    if(ok==1)cout<< "Wilshere";
    else cout << "Xavi";
}