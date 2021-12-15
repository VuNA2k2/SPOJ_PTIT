#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=1;i<=(n-1)/9;i++)
        {
            cout << "1234567890";
        }
        for(int i=1;i<=(n-1)%9;i++)
        {
            cout << char('0'+i);
        }
        for(int i=(n-1)%9+1;i>=2;i--)
        {
            cout << char('0'+i);
        }
        for(int i=1;i<=(n-1)/9;i++)
        {
            cout << "098765432";
        }
        cout << 1 << endl;
    }
}