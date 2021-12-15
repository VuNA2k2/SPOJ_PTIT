#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int x1,x2,sum=0;
        if(s=="0")
        {
            cout << "YES" << endl;
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            sum+=(s[i]-'0');
        }
        x1=s[s.size()-2]-'0';
        x2=s[s.size()-1]-'0';
        if(x2%2==0)
        {
            if(x1%2==0&&(x2==0||x2==4||x2==8)&&sum%9==0) cout << "YES";
            else if(x1%2!=0&&(x2==2||x2==6)&&sum%9==0) cout << "YES";
            else cout << "NO";
        }
        else cout << "NO";
        cout << endl;
    }
}