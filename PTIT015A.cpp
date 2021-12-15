#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<string> a(3);
        string s="";
        for(int i=0;i<3;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                s+=a[i][j];
            }
        }
        sort(s.rbegin(),s.rend());
        for(int i=0;i<s.size();i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}