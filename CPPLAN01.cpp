#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a , b , s;
        cin >> a >> b;
        if(a.size()<b.size())
        {
            string tmp=a;
            a=b;
            b=tmp;
        }
        else if(a.size()==b.size())
        {
            if(a[0]<b[0])
            {
                string tmp=a;
                a=b;
                b=tmp;
            }
        }
        while(b.size()!=a.size())
        {
            b='0'+b;
        }
        for(int i=a.size()-1;i>=0;i--)
        {
            if((a[i]-'0')-(b[i]-'0')>=0)
            {
                s.push_back((a[i]-'0')-(b[i]-'0')+'0');
            }
            else
            {
                s.push_back(10+(a[i]-'0')-(b[i]-'0')+'0');
                b[i-1]++;
            }
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
}