#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,T;
    cin >> T;
    for(t=1;t<=T;t++)
    {
        string s;
        cin >> s;
        if(s[s.size()-1]==54&&s[s.size()-2]==56)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}