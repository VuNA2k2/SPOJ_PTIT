#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(8);
    for(int i=0;i<8;i++)
    {
        cin >> a[i];
    }
    int up =1, down =1;
    for(int i=0;i<7;i++)
    {
        if(a[i]>a[i+1])
        {
            up=0;
        }
        if(a[i]<a[i+1])
        {
            down=0;
        }
    }
    if(up==1&&down==0) cout << "ascending";
    else if(up==0&&down ==1) cout << "descending";
    else cout << "mixed";
}