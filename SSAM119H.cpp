#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        if(s.size()==1)
        {
            if((s[0]-'0')%4==0)
            {
                cout << "4" << endl;
                continue;
            }
            cout << "0" << endl;
            continue ;
        }
        int S=(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');
        if(S%4==0)
        {
            cout << "4" << endl;
            continue;
        }
        cout << "0" << endl;
    }
}