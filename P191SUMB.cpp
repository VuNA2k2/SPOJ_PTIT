#include<bits/stdc++.h>
using namespace std;
struct homework
{
    int d ;
    int g;
};
bool compare(homework a , homework b)
{
    return a.d < b.d;
}
int main()
{
    int s , b;
    cin >> s >> b;
    vector<int> a(s);
    vector<long long> x(b);
    vector<homework> e(b);
    for(int i=0;i<s;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<b;i++)
    {
        cin >> e[i].d >> e[i].g;
    }
    sort(e.begin(),e.end(),compare);
    x[0]=e[0].g;
    for(int i=0;i<s;i++)
    {
        int s=0;
        for(int j=0;j<b;j++)
        {
            if(a[i]>e[j].d)s+=e[j].g;
        }
        cout << s << " ";
    }
}