#include<bits/stdc++.h>
using namespace std;
bool scp(long long n)
{
    if((long long)sqrt(n)*sqrt(n)==n)return true;
    return false;
}
bool sdb(long long n)
{
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(scp(i)&&sqrt(i)>1)return false;
            if(scp(n/i)&&sqrt(n/i)>1)return false;
        }
    }
    return true;
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> a;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                a.push_back(i);
                a.push_back(n/i);
            }
            else
            {
                a.push_back(i);
            }
        }
    }
    sort(a.begin(),a.end());
    //for(int i=a.size()-1;i>=0;i--) cout << a[i] << " ";
    for(int i=a.size()-1;i>=0;i--)
    {
        if(sdb(a[i]))
        {
            cout << a[i];
            break;
        }
    }
}