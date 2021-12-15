#include<bits/stdc++.h>
using namespace std;
void mas()
{
    string s;
    int d=0,i=0,x;
    int n;
    cin >> n;
    while (n>0)
    {
        s[i]=n%10+'0';
        d++;
        i++;
        if(d==3)
        {
            s[i]=',';
            i++;
            d=0;
        }
        n/=10;
    }
    x=i;
    if(i%4==1)
    {
        x--;
    }
    //cout << s[x];
    for(int j=x-2;j>=0;j--)
    {
        if(s[j]!=',')cout << (char)s[j];
        else cout << s[j];
    }
}
int main()
{
    mas();
}