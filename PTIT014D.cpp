#include<bits/stdc++.h>
using namespace std;
bool summum(string n)
{
    int s=0;
    for(int i=0;i<n.size();i++)
    {
        s+=(n[i]-'0');
    }
    if(s%9==0&&s!=0)return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        if(summum(n))cout << "1";
        else cout << "0";
        cout << endl;
    }
}