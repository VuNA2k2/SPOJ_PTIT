#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=0;
    while(true)
    {
        d++;
        string s1,s2;
        cin >> s1 >> s2;
        if(s1=="END"&&s2=="END")break;
        if(s1.size()!=s2.size())
        {
            cout << "Case " << d << ": different" << endl;
            continue;
        }
        vector<int> a1(126+5,0);
        vector<int> a2(126+5,0);
        for(int i=0;i<s1.size();i++)
        {
            a1[s1[i]]++;
            a2[s2[i]]++;
        }
        int ok=1;
        for(int i=97;i<=126;i++)
        {
            if(a1[i]!=a2[i])
            {
                ok=0;
                break;
            }
        }
        if(ok==1)
        {
            cout << "Case " << d << ": same" << endl;
        }
        else cout << "Case " << d << ": different" << endl;
    }
}
