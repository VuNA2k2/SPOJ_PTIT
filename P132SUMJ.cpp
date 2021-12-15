#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int d=0;
    for(int i=s.size()-1;i>=1;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(s[i]<=s[j])d++;
        }
    }
    if(d==s.size())
    {
        cout << 0;
        return 0;
    }
    int index;
    for(int i=s.size()-1;i>=1;i--)
    {
        
    }
    sort(s.begin()+index,s.begin()+s.size());
    cout << s;
}