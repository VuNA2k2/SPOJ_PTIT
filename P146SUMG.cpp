#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r , c , a , b;
    cin >> r >> c >> a >> b;
    vector<string> s(r);
    for(int i=0;i<r;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<r;i++)
    {
        for(int n=1;n<=a;n++)
        {
            for(int j=0;j<c;j++)
            {
                for(int m=1;m<=b;m++)
                {
                    cout << s[i][j];
                }
            }
            cout << endl;
        }
    }
}