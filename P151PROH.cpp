#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s[0]!='1')
    {
        cout << "NO";
        return 0;
    }
    int d=0,ok=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='1'&&s[i]!='4')
        {
            ok=0;
            break;
        }
        else
        {
            if(s[i]=='4')
            {
                d++;
            }
            else d=0;
            if(d==3)
            {
                ok=0;
                break;
            }
        }
    }
    if(ok==1)cout << "YES";
    else cout << "NO";
}