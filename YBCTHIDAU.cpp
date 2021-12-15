#include<bits/stdc++.h>
using namespace std;
struct BCTHIDAU
{
    string name;
    int sub[4],time[4];
    int pen;
    int total;
};
bool compare(BCTHIDAU a, BCTHIDAU b)
{
    if(a.total>b.total)return true;
    if(a.total == b.total)return a.pen < b.pen;
    return false;
}
int main()
{
    int n ;
    cin >> n;
    vector<BCTHIDAU> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].name;
        list[i].pen=0;
        list[i].total=0;
        for(int j=0;j<4;j++)
        {
            cin >> list[i].sub[j] >> list[i].time[j];
            if(list[i].time[j]>0)
            {
                list[i].total++;
                list[i].pen+=list[i].time[j];
                if(list[i].sub[j]>1)
                {
                    list[i].pen+=(list[i].sub[j]-1)*20;
                }
            }
        }
    }
    sort(list.begin(),list.end(),compare);
    cout << list[0].name << " " << list[0].total << " " << list[0].pen;
}