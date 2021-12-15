#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , T;
        cin >> n >> T;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int i=0;
        while(T-a[i]>=0)
        {
            T-=a[i];
            i++;
        }
        cout << i << endl;
    }
}