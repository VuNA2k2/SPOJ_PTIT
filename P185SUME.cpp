#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    b.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]!=b[b.size()-1])
        {
            b.push_back(a[i]);
        }
    }
    if(b.size()>3)
    {
        cout << "NO";
    }
    else if(b.size()<=2)
    {
        cout << "YES";
    }
    else
    {
        if(b[1]-b[0]==b[2]-b[1])
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

}