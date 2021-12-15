#include<bits/stdc++.h>
using namespace std;
int main()
{
    string tmp;
    int h=0 , m=0 ,s=0;
    cin >> tmp;
    h=(tmp[0]-'0');
    h=h*10+(tmp[1]-'0');
    m=(tmp[3]-'0');
    m=m*10+(tmp[4]-'0');
    s=tmp[6]-'0';
    s=s*10+tmp[7]-'0';
    string x="" ;
    x += tmp[8];
    x+=tmp[9];
    if( x =="PM"&&h<12)h+=12;
    if(x=="AM"&&h==12)h=0;
    printf("%02d:%02d:%02d",h, m ,s);
}