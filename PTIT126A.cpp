#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n , m;
        cin >> m >> n;
        if(n==0&&m==0) break;
        long long s=1,max=-1e6;
        vector<vector<long long> > x(n, vector<long long> (m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> x[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            s=1;
            for(int j=0;j<n;j++)
            {
                s*=x[j][i];
            }
            if(s>max)
            {
                max=s;
            }
        }
        for(int i=m-1;i>=0;i--)
        {
            s=1;
            for(int j=0;j<n;j++)
            {
                s*=x[j][i];
            }
            if(s==max)
            {
                cout << i+1;
                break;
            }
        }
        cout << endl;
    }
}