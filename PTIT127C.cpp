#include<bits/stdc++.h>
using namespace std;
 struct conference
 {
    int first;
    int last;
 };
 bool compare(conference a, conference b)
 {
    if(a.last<b.last) return true;
    return false;
 }
 int main()
 {
    int n,d=0;
    cin >> n;
    vector<conference> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].first >> list[i].last;
    }
    sort(list.begin(),list.end(),compare);
    int x=list[0].first;
    for(int i=0;i<n;i++)
    {
        if(x<=list[i].first)
        {
            d++;
            x=list[i].last;
        }
    }
    cout << d;
 }
 
