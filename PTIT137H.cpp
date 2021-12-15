#include<bits/stdc++.h>
using namespace std;
long long Pow(int n , int m)
{
    long long s=1;
    for(int i=0;i<m;i++)
    {
        s*=n;
    }
    return s;
}
int main()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s=="end")break;
        long long x=0,d=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                x+=d*(s[i]-'0');
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                x+=d*(s[i]-'A'+10);
            }
            else x+=d*(s[i]-'a'+36);
            d*=62;
        }
        cout << x;
        if(x%61==0)cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}