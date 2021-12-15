#include<bits/stdc++.h>
using namespace std;
vector<bool> s(1e6+5,true);
vector<long long> X(1e6+5,0);
int main()
{
    s[0]=false;
    s[1]=false;
    for(int i=2;i<=s.size()/2;i++)
    {
        if(s[i] == true)
        {
            for(int j=2*i;j<=s.size();j+=i)
            {
                s[j]=false;
                long long J=j;
                while(J%i==0)
                {
                    X[j]+=i;
                    J/=i;
                }
            }
        }
    }
    long long n,sum=0,x;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(s[x])sum+=x;
        sum+=X[x];
    }
    cout << sum;
}