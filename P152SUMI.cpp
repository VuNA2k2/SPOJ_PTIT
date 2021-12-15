#include<bits/stdc++.h>
using namespace std;
struct pos
{
    int l;
    int r;
};

int main()
{
    string s;
    int n;
    cin >> s >> n;
    vector<pos> data(n);
    for(int i=0;i<n;i++)
    {
        cin >> data[i].l >> data[i].r;
    }
    for(int i=0;i<n;i++)
    {
        int d=0;
        for(int j=data[i].l-1;j<data[i].r-1;j++)
        {
            if(s[j]==s[j+1])d++;
        }
        cout << d << endl;
    }
}