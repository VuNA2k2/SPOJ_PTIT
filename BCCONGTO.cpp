#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s=="0")break;
        int S=0;
        for(int i=0;i<s.size();i++)
        {
            int x=s[i]-'0';
            if(x>4)x--;
            S=S*9+x;
        }
        cout << s << ": " << S << endl;
    }
}