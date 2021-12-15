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
        if(n<2)cout << n << endl;
        else if(n==2)cout << "4" << endl;
        else if(n%2==0)cout << (n/2)*n << endl;
        else cout << ((n/2)+1)*((n/2)+1)+(n/2)*(n/2) << endl;
    }
}