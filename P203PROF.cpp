#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long s=0;
    vector<int> x(n);
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
        s+=x[i];
    }
    if(s%2!=0)
    {
        cout << s;
    }
    else
    {
        sort(x.begin(),x.end());
        for(int i=0;i<n;i++)
        {
            if((s-x[i])%2!=0)
            {
                cout << s-x[i];
                break;
            }
        }
    }
}