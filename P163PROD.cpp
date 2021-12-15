#include<bits/stdc++.h>
using namespace std;

string tach(int x)
{
    string s="";
    while(x>0)
    {
        int i=x%10;
        if(i!=0)
            s = (char) (i+'0') + s;
        x/=10;
    }
    return s;
}
int gop(string s)
{
    int x=0;
    for(int i=0;i<s.size();i++)
    {
        x=x*10+s[i]-'0';
    }
    return x;
}
int main()
{
    int a , b ,c;
    cin >> a >> b ;
    c=a+b;
    string A=tach(a) , B=tach(b) , C=tach(c);
    int x=gop(A), y=gop(B) , z=gop(C);
    if(x+y==z)cout << "YES";
    else cout << "NO";
}
