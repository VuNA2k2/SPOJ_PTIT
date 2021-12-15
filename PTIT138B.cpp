#include<bits/stdc++.h>
using namespace std;

struct family
{
    string dad;
    string son;
    int old;
};

bool compare(family a , family b)
{
    if(a.son == b.dad)return true;
    if(a.dad==b.dad)
    {
        if(a.old<b.old)return true;
        return false;
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
        vector<family> list(n);
        for(int i=0;i<n;i++)
        {
            cin.ignore();
            cin >> list[i].dad;
            cin.ignore();
            cin >> list[i].son;
            cin >> list[i].old;
        }
        sort(list.begin(),list.end(),compare);
        for(int i=0;i<n;i++)
        {
            cout << list[i].dad << " " << list[i].son << " " << list[i].old << endl;

        }
    }
    
}
