#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        vector<int> a(101,0),b(1,0);
        for(int i=0;i<n;i++)
        {
            cin >> x;
            a[x]++;
        }
        for(int i=0;i<101;i++)
        {
            a[i]/=2;
            if(a[i]>0)b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int s=0;
        for(int i=1;i<b.size();i++)
        {
            b[i]=b[i]-b[i-1];
            s+=b[i];
        }
        s-=b[b.size()-1];
        s+=b[b.size()-1]/2;
        cout << s << endl;
    }
}