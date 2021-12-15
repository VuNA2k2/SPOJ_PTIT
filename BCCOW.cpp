#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int m,n;
void process()
{
    int M=0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;i++)
    {
        if(m-a[i]>=0)
        {
            M+=a[i];
            m-=a[i];
        }
    }
    cout << M;
}
int main()
{
    cin >> m >> n;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    process();
}