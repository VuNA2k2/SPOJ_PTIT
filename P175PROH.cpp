#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l1,r1,l2,r2,k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if(l2<l1&&r2>r1)
    {
        if(k>=l1 && k <= r1)cout << r1-l1;
        else cout << r1-l1+1;
    }
    else if(l2>=l1&&r2<=r1)
    {
        if(k>=l2 && k <= r2)cout << r2-l2;
        else cout << r2-l2+1;
    }
    else if(l1<=l2&&l2<=r1&&r1<=r2)
    {
        if(k>=l2&&k<=r1)cout << r1-l2;
        else cout << r1-l2+1;
    }
    else if(l2<=l1&&l1<=r2&&r2<=r1)
    {
        if(k>=l1&&k<=r2)cout << r2-l1;
        else cout << r2-l1+1;
    }
    else
    {
        cout << "0";
    }
}