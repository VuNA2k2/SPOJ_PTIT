#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d=1;
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        vector<string> s(n);
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        for(int i=0;i<n;i++)
        {
            while(s[i][0]=='0')
            {
                s[i].erase(0,1);
            }
        }
        sort(s.begin(),s.end());
        if(s[0]==s[n-1])
        {
            cout << "Case " << d << ": " << "There is a row of trees having equal height." << endl;
            d++;
        }
        else
        {
            cout << "Case " << d << ": " << s[0] << " " << s[n-1] << endl;
            d++;
        }
    }

}