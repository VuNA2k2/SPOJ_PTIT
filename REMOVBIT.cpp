#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i < n;i++)
    {
        if(s[i]==48)
        {
            for(int j = i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        cout << s[i] ;
    }
    cout << endl;
}