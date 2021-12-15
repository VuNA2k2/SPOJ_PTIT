#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0&&(n/2)%2==0)
    {
        cout << "YES";
        return 0;
    }
    for(int i=2;i<n;i+=2)
    {
        if((n-i)%2==0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}