#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin >> a;
    while(a.size()%3!=0)
    {
        a='0'+a;
    }
    for(int i=0;i<a.size();i+=3)
    {
        string x="";
        for(int j=i;j<i+3;j++)
        {
            x+=a[j];
        }
        if(x=="000")b.push_back('0');
        if(x=="001")b.push_back('1');
        if(x=="010")b.push_back('2');
        if(x=="011")b.push_back('3');
        if(x=="100")b.push_back('4');
        if(x=="101")b.push_back('5');
        if(x=="110")b.push_back('6');
        if(x=="111")b.push_back('7');
    }
    cout << b;
}