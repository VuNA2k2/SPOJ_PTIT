#include<bits/stdc++.h>
using namespace std;
struct P169PROD
{
    string name;
    int id;
};
bool compare(P169PROD a, P169PROD b)
{
    if(a.name < b.name )return true;
    if(a.name == b.name)
    {
        if(a.id<b.id)return true;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<P169PROD> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].name;
        list[i].id=i+1;
    }
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout << list[i].id << " " ;
    }
}