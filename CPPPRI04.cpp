#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    cout << "1 ";
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                cout << j << " ";
                break;
            }
        } 
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}