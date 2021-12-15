#include<bits/stdc++.h>
using namespace std;
struct dt
{
    int x ;
    int y;
    int id;
};
bool compare(dt a , dt b)
{
    if(a.x<b.x)return true;
    if(a.x==b.x)return a.y > b.y;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<dt> list(n);
    for(int i=0;i<n;i++)
    {
        list[i].id = i+1;
        cin >> list[i].x >> list[i].y;
    }
    sort(list.begin(),list.end(),compare);
    int max =0;
    for(int i=0;i<n;i++)
    {
        if(list[i].y>max)max=list[i].y;
    }
    for(int i=0;i<n;i++)
    {
        if(list[i].x==list[0].x&&list[i].y==max)
        {
            cout << list[i].id;
            return 0;
        }
    }
    cout << "-1";
}