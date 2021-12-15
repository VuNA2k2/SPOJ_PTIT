#include<bits/stdc++.h>
using namespace std;
vector<bool> a(1e9+7,true);
void sang()
{
    a[0]=false;
    a[1]=false;
    for(int i=2;i*i<a.size();i++)
    {
        if(a[i])
        {
            for(int j=i*i;j<a.size();j+=i)
            {
                a[j]=false;
            }
        }
    }
}
int main()
{
    sang();
    int n , m ;
    cin >> n >> m;
    for(int i=m;n>0;i++)
    {
        if(a[i])
        {
            cout << i << " ";
            n--;
        }
    }
}