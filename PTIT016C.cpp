#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        int check =1;
        for(int j=0;j<s[i].size();j++)
        {
            if(s[i][j]%2!=(j+1)%2)
            {
                check =0; 
                break;
            }
        }
        if(check==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}