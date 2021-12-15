#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int d25=0,d50=0,d100=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==25)d25++;
        if(a[i]==50)d50++;
        if(a[i]==100)d100++;
    }
    if(a[0]!=25)
    {
        cout << "NO";
        return 0;
    }
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==100)
        {
            if(d25>=1&&d50>=1)
            {
                check =1;
                d25--;
                d50--;
                continue;
            }
            else if(d25>=3)
            {
                check =1;
                d25-=3;
                continue;
            }
            else
            {
                cout << "NO" ;
                return 0;
            }
        }
        else if(a[i]==50)
        {
            if(d25>=1)
            {
                check =1;
                d25--;
                continue;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    if(check==1)cout << "YES";
    cout << endl;
    return 0;
}