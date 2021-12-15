#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int i=1,s=0;
    while(1)
    {
        s+=i;
        i++;
        if(s==n)return true;
        if(s>n)return false;
    }
}
int main()
{
    vector<int> a;
    long long s=0,n,k=1;
    cin >> n;
    for(long long i=1;s<n;i++)
    {
        s+=i;
        if(check(n-s))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
}