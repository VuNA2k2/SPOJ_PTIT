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
        int i=n+1;
        while(i%n!=0)
        {
            i++;
        }
        cout << i << endl;
    }
}