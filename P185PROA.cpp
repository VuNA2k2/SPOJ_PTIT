#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0]!='9'&&s[0]>='5')s[0]='9'-s[0]+'0';
        for(long long i=1;i<s.size();i++)
        {
            if(s[i]>='5')
            {
                s[i]=('9'-s[i]+'0');
            }
        }
        cout << s;
        cout << endl;
    }
}