#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        cin.ignore();
        string s;
        cin >> s;
        string x="ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
        for(long long i=0;i<s.size();i++)
        {
            for(int j=0;j<x.size();j++)
            {
                if(s[i]==x[j])
                {
                    s[i]=x[j+n];
                    break;
                }
            }
        }
        for(long long i=s.size()-1;i>=0;i--)
        {
            cout <<s[i];
        }
        cout << endl;
    }
}