#include<bits/stdc++.h>
using namespace std;
int time(char s)
{
    if(s=='A'||s=='B'||s=='C')return 3;
    if(s=='D'||s=='E'||s=='F')return 4;
    if(s=='G'||s=='H'||s=='I')return 5;
    if(s=='J'||s=='K'||s=='L')return 6;
    if(s=='M'||s=='N'||s=='O')return 7;
    if(s=='P'||s=='Q'||s=='R'||s=='S')return 8;
    if(s=='T'||s=='U'||s=='V')return 9;
    if(s=='W'||s=='X'||s=='Y'||s=='z')return 10;
}
int main()
{
    string s;
    cin >> s;
    int t=0;
    for(int i=0;i<s.size();i++)
    {
        t+=time(s[i]);
    }
    cout << t;
}