#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, x="aoyeui";
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z') s[i]= s[i]+'a'-'A';
    }
    for(int i=0; i < s.size() ; i++)
    {
        int check=1;
        for(int j=0 ; j<= 6; j++)
        {
            if(s[i]==x[j])check =0;
        }
        if(check==1) cout << "."<< s[i];
    }
}