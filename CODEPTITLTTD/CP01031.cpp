#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n , x;
        cin >> n >> x;
        vector<long long> a(n);
        long long sum = 0, d = 0;
        for(int i = 0 ; i< n ; i++)cin >> a[i];
        sort(a.begin(),a.end());
        for(int i = 0 ; i < n -2 ; i ++)
        {
            if(a[i] < x)
                for(int j = i + 1 ; j < n - 1 ; j++)
                {
                    if(a[i] + a[j] < x)
                        for(int k = j + 1 ; k < n ; k ++)
                        {
                            if(a[i] + a[j] + a[k] < x)d++;
                            else break;
                        }
                }
        }
        cout << d << endl;
    }
}