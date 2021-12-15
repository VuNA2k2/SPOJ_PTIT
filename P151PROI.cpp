#include<bits/stdc++.h>
using namespace std;
int process(int n)
{
    int i,s=0;
    while(n>0)
    {
        i=n%10;
        n/=10;
        s+=i;
    }
    if(s<10)return s;
    return process(s);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << process(n) << endl;
    }
}