#include<bits/stdc++.h>
using namespace std;
int nenso(int n)
{
    if(n<10)return n;
    int i,s=0;
    while (n > 0)
    {
        i=n%10;
        s+=i;
        n/=10;
    }
    return nenso(s);
}
int main()
{
    int t,T;
    cin >> T;
    for(t = 1;t <= T; t++)
    {
        int n;
        cin >> n;
        cout << nenso(n) << endl;
    }
}