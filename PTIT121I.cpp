#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,T;
    cin >> T;
    for(t=1;t<=T;t++)
    {
        string s;
        int a,n;
        cin >> a >> n >> s;
        cout << a << " ";
        for(int i =0 ; i<s.size();i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}