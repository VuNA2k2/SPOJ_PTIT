#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> a(n);
    vector<string> S;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<a[i].size();j++)
        {
            string s="";
            if(a[i][j]<='9'&&a[i][j]>='0')
            {
                for(int k = j;k<a[i].size();k++)
                {
                    if(a[i][k]<='9'&&a[i][k]>='0') s+=a[i][k];
                    else 
                    {
                        cout << s << " ";
                        S.push_back(s);
                        s="";
                        break;
                    }
                }
            }

        }
    }
    for(int i=0;i<S.size();i++)
    {
        //cout << S[i] << endl;
    }
}