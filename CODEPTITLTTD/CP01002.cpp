#include<bits/stdc++.h> 

using namespace std;

#define endl "\n"
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    long long n , sum = 0 , gt = 1;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++)
    {
        gt*=i;
        sum+=gt;
    }
    cout << sum;
}

int main()
{
    faster();
    solve();
}