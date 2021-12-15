#include<bits/stdc++.h>
using namespace std;
string s="";
void numtostring()
{
    int i=1;
    while(s.size()<=1005)
    {
        int I=i;
        string tmp="";
        while(I>0)
        {
            tmp = (char)(I%10 +'0') +tmp;
            I/=10;
        }
        s+=tmp;
        i++;
    }
}
int main()
{
    numtostring();
    int n ;
    cin >> n;
    cout << s[n-1];
}