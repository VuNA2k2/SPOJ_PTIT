#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        int n;
        long long x;
        cin >> n;
        vector<long long> a;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            if(x!=0)a.push_back(x);
        }
        for(int i=0;i<a.size();i++)
        {
            cout << a[i] << " ";
        }
        for(int i=a.size();i<n;i++)
        {
            cout << "0 " ; 
        }
        cout << endl;
    }
}