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
        getline(cin,s);
        vector<int> a(130,0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
            if(s[i] == ' ')continue;
            else a[s[i]]++;
        }
        int d=0;
        for (int i = 'a'; i <= 'z'; i++)
	        if (a[i] > 1) d += a[i];
        cout << d <<  " ";
        for(int i=0;i<s.size();i++)
        {
            if(a[s[i]]!=0)
            {
                cout << s[i];
                a[s[i]]=0;
            }
        }
        cout << endl;
    }
}