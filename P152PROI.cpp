#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int tu, mau =180;
        cin >> tu;
        tu%=360;
        int a =__gcd(tu,mau);
        tu/=a;
        mau/=a;
        if(tu==0)cout << "0$";
        else if(tu==1)
        {
            if(mau==1)cout << "$";
            else cout << "$/" << mau;
        }
        else cout << tu << "$/" << mau;
        cout << endl;
    }
}