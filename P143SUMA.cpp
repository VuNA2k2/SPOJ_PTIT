#include<bits/stdc++.h>
using namespace std;
struct dragon
{
    int x ;
    int y;
};
bool compare(dragon a , dragon b)
{
    if(a.x<b.x)return true;
    return false;
}
int main()
{
    int n , s;
    cin >> s >> n;
    vector<dragon> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].x >> list[i].y;
    }
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<n;i++)
    {
        if(s>list[i].x)
        {
            s+=list[i].y;
        }
        else
        {
            cout << "NO";
            return 0;
        }
        //cout << list[i].x << list[i].y;
    }
    cout << "YES";
}