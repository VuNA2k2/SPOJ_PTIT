#include<bits/stdc++.h>
using namespace std;
struct YOUNGCLA
{
    string name;
    int dd;
    int mm;
    int yy;
};
bool compare(YOUNGCLA a , YOUNGCLA b)
{
    if(a.yy<b.yy)return true;
    else if(a.yy==b.yy)
    {
        if(a.mm < b.mm) return true;
        else if(a.mm == b.mm)
        {
            if(a.dd <b.dd) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}
int main()
{
    int n;
    cin >> n;
    vector<YOUNGCLA> list(n);
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin >> list[i].name >> list[i].dd >> list[i].mm >>list[i].yy;
        cin.ignore();
    }
    sort(list.begin(),list.end(),compare);
    cout << list[n-1].name << endl;
    cout << list[0].name ;
}