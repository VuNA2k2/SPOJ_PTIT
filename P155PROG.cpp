#include<bits/stdc++.h>
using namespace std;
struct gif
{
    int to;
    int from;
};
bool compare(gif a , gif b)
{
    return a.to < b.to;
}
int main()
{
    int n;
    cin >> n;
    vector<gif> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].to;
        list[i].from = i+1;
    }
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout << list[i].from << " " ;
    }
}