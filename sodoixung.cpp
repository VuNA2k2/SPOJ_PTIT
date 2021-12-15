#include<bits/stdc++.h>
using namespace std;
bool sodoixung(int n)
{
    int N =n,res=0,i;
    while (N>0)
    {
        i=N%10;
        res=res*10+i;
        N/=10;
    }
    if(n==res)return true;
    return false;
}
int main()
{
    int t,T;
    cin >> T;
    for(t = 1 ; t <= T; t++)
    {
        int n;
        cin >> n;
        if(sodoixung(n))cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}