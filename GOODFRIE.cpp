#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k , d=0;
    cin >> n >> k;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    int a,ok=0;
    for(int i=0;i<=n-k;i++)
    {
        for(int j=i+1;j<=i+k;j++)
        {
            if(s[i].size()==s[j].size())
            {
                if(j-i==n-i)
                {
                    ok=1;
                }
                d++;
            }
        }
    }
    cout << d << " ";
}