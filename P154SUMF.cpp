#include<bits/stdc++.h>
using namespace std;

struct houses
{
    int p;
    int q;
};

int main()
{
    int n,d=0;
    cin >> n;
    vector<houses> data(n);
    for(int i=0;i<n;i++)
    {
        cin >> data[i].p >> data[i].q;
    }
    for(int i=0;i<n;i++)
    {
        if(data[i].q-data[i].p>=2)d++;
    }
    cout << d;
}