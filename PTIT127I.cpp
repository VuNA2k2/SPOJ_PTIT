#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        vector<vector<int> > x(n, vector<int> (6));
        vector<bool> s(50,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<6;j++)
            {
                cin >> x[i][j];
                if(1<=x[i][j]<=49)
                {
                    s[x[i][j]]=true;
                }
            }
        }
        int check =1;
        for(int i=1;i<=49;i++)
        {
            if(s[i]==false)
            {
                check=0;
                cout << "No";
                break;
            }
        }
        if(check==1)
        {
            cout << "Yes";
        }
        cout << endl;
    }
}