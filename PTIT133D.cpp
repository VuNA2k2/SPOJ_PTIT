#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        string s;
        cin >> s;
        if(s=="[END]")break;
        int n;
        cin >> n;
        if(n%5==0||n%5==2)cout << "Hanako" << endl;
        else cout << "Taro" <<endl;
    }
}