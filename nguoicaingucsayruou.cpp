#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,T;
    cin >> T;
    for(t=1;t<=T;t++)
    {
        int n;
        cin >> n;
        cout << trunc(sqrt(n)) << endl;
    }
}