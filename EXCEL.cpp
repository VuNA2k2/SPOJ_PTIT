#include<bits/stdc++.h>
using namespace std;
string col(long long x)
{
    string s="";
    char a;
    while(x>0)
    {
        x--;
        a='A'+x%26;
        s=a+s;
        x/=26;
    }
    return s;
}
int main()
{
    while(true)
    {
        long long r , c;
        char tmp;
        cin >> tmp >> r >> tmp >> c;
        if(r==0&&c==0)break;
        cout << col(c) << r << endl;
    }
}