#include<bits/stdc++.h>
using namespace std;
bool phantich(int n)
{
    int i,ok=0;
    while(n>0)
    {
        i=n%10;
        if(i==4||i==7)
        {
            ok=1;
        }
        else return false;
        n/=10;
    }
    return true;
}
int main()
{
    int n , a[1005]={},i;
    cin >> n;
    if(n%8==0||n%14==0)
    {
        cout << "YES" << endl;
    }
    else if (phantich(n))
    {
        cout << "YES" << endl;        
    }
    
    else
    {
        cout << "NO" << endl;
    }
}