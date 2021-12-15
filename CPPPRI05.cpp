#include<bits/stdc++.h>
using namespace std;
vector<bool> s(1e5,true);
void sang()
{
    s[0]=false;
    s[1]=false;
    for(long long i=2;i*i<s.size();i++)
    {
        if(s[i])
        {
            for(long long j=i*i;j<s.size();j+=i)
            {
                s[j]=false;
            }
        }
    }
}
int main()
{
    sang();
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n >> m;
        for(int i=n;i<=m;i++)
        {
            if(s[i])cout << i << " ";
        }
        cout << endl;
    }
}