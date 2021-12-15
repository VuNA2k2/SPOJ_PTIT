#include<bits/stdc++.h>
using namespace std;

string dao(string a, int x)
{
    for(int i=0 ; i<a.size();i++)
    {
        if(a[i]==x+'0')
        {
            a[i] = 11-x+'0';
        }
    }
    return a;
}
long long change(string a)
{
    long long x=0;
    for(int i=0;i<a.size();i++)
    {
        x=x*10+(a[i]-'0');
    }
    return x;
}
int main()
{
    string a , b;
    cin >> a >> b;
    cout << change(dao(a,6))+change(dao(b,6)) << " " << change(dao(a,5))+change(dao(b,5)) << endl;
}