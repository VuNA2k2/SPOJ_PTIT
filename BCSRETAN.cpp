#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector<int> x;
    cin >> a;
    a++;
    while(a)
    {
        x.push_back(a%2);
        a/=2;
    }
    for(int i=x.size()-2;i>=0;i--)
    {
        if(x[i]==0) cout << "4";
        else cout << "7";
        //cout << x[i];
    }
}