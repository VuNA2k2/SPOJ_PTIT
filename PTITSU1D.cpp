#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m , n;
        cin >> n >> m;
        vector<int> s(5);
        vector< vector<char> > a(4*n+n+1,vector<char> (4*m+m+1));
        for(int i=0;i<4*n+n+1;i++)
        {
            for(int j=0;j<4*m+m+1;j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i=1;i<4*n+n+1;i+=5)
        {
            for(int j=1;j<4*m+m+1;j+=5)
            {
                if(a[i][j]=='.')
                {
                    s[0]++;
                }
                else
                {
                    for(int k=0;k<4;k++)
                    {
                        if(a[i+k][j]=='*'&&a[i+k+1][j]!='*')
                        {
                            s[k+1]++;
                        }
                    }
                }
            }
        }
        for(int i=0;i<5;i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}
