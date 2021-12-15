#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a , b , c;
        cin >> a >> b >> c;
        if(a==0&&(b==0||c==0)) cout << "NO";
        else if(abs(b-c)%3==0)
        {
            cout << "YES";
        } 
        else  cout << "NO";
        cout << endl;
    }
}