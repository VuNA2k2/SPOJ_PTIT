#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i=2;i<=n;i++)
        {
            if(snt(i)==true&&snt(n-i)==true)
            {
                cout << i << " " << n-i;
                break;
            }
        }
        cout << endl;
    }
}