#include<bits/stdc++.h>
using namespace std;
string s;
void count()
{
    int a[8]={};
    for(int i=0;i<s.size()-2;i++)
    {
        string tmp;
        tmp.push_back(s[i]);
        tmp.push_back(s[i+1]);
        tmp.push_back(s[i+2]);
        if (tmp == "TTT") a[0]++;
        if (tmp == "TTH") a[1]++;
        if (tmp == "THT") a[2]++;
        if (tmp == "THH") a[3]++;
        if (tmp == "HTT") a[4]++;
        if (tmp == "HTH") a[5]++;
        if (tmp == "HHT") a[6]++;
        if (tmp == "HHH") a[7]++;
    }
    for(int i=0;i<=7;i++)
    {
        cout << a[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int t,T;
    cin >> T;
    for(t=1;t<=T;t++)
    {
        int n;cin >> n;
        cin >> s;
        cout << n << " ";
        count();
    }
    
}