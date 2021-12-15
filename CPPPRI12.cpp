#include<bits/stdc++.h>
using namespace std;
int prime(int a ,int b)
{
    int x=1;
    vector<int> s;
    for(int i=2;i*i<=a;i++)
    {
        while(a%i==0)
        {
            s.push_back(i);
            a/=i;
        }
    }
    if(a>1)s.push_back(a);
    if(b>s.size())return -1;
    return s[b-1];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << prime(n,k)<< endl;
    }
}