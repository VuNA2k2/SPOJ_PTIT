#include<bits/stdc++.h>
using namespace std;

struct Time
{
    int hour,minute,seconds;
};

bool compare(Time a, Time b)
{
    int x1=a.hour*3600+a.minute*60+a.seconds,x2=b.hour*3600+b.minute*60+b.seconds;
    if(x1 < x2) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<Time> list(n);
    for(int i=0;i<n;i++)
    {
        cin >> list[i].hour;
        cin >> list[i].minute;
        cin >> list[i].seconds;
    }
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout << list[i].hour << " " << list[i].minute << " " << list[i].seconds << endl;
    }
}