#include<bits/stdc++.h>
using namespace std;
struct football
{
    string name;
    int point;
    int win;
    int lost;
    int equal;
};

bool comparewin(football a , football b)
{
    if(a.win > b.win)return true;
    if(a.win == b.win)
    {
        if(a.name<b.name)return true;
    }
    return false;
}
bool comparelost(football a , football b)
{
    if(a.lost > b.lost)return true;
    if(a.lost == b.lost)
    {
        if(a.name<b.name)return true;
    }
    return false;
}
bool compareequal(football a , football b)
{
    if(a.equal > b.equal)return true;
    if(a.equal == b.equal)
    {
        if(a.name<b.name)return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string name1 , name2;
        cin >> name1 >> name2;
        vector<football> list(n);
        for(int i=0;i<n;i++)
        {
            cin.ignore();
            cin >> list[i].name >> list[i].point;
            list[i].win=list[i].point;
            list[i].lost=list[i].point;
            list[i].equal=list[i].point;
        }
        int j , k;
        for(int i=0;i<n;i++)
        {
            if(list[i].name==name1)j=i;
            if(list[i].name==name2)k=i;
        }
        list[j].win+=3;
        list[k].lost+=3;
        list[j].equal+=2;
        list[k].equal+=2;
        sort(list.begin(),list.end(),comparewin);
        for(int i=0;i<n;i++)
        {
            if(list[i].name==name1)
            {
                cout << i+1 << " ";
                break;
            }
        }
        sort(list.begin(),list.end(),comparelost);
        for(int i=0;i<n;i++)
        {
            if(list[i].name==name1)
            {
                cout << i+1 << " ";
                break;
            }
        }
        sort(list.begin(),list.end(),compareequal);
        for(int i=0;i<n;i++)
        {
            if(list[i].name==name1)
            {
                cout << i+1 ;
                break;
            }
        }
        cout << endl;
    }
}
