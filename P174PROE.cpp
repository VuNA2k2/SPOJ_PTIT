#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> a;
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    a.push_back(x[0]);
    for(int i=0;i<n-1;i++)
    {
        if(x[i]!=x[i+1])
        {
            d++;
            a.push_back(x[i+1]);
        }
        if(d==4)
        {
            cout << "NO";
            return 0;
        }
    }
    if(a[1]-a[0]==a[2]-a[1])cout << "YES";
    else cout << "NO";
}