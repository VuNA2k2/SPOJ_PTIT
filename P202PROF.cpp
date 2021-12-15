#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(a+c<=b)cout << 0 << endl;
        else if(b+c<a)cout << c+1 << endl;
        else cout << c-(b-a+c+2)/2 +1 << endl;
    }
}