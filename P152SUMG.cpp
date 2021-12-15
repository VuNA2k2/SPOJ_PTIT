#include<bits/stdc++.h>
using namespace std;
vector<bool> s(60,true);
vector<int> a;
void sang()
{
    s[0]=false;
    s[1]=false;
    for(int i=2;i<60;i++)
    {
        if(s[i])
        {
            a.push_back(i);
            for(int j=i*i;j<60;j+=i)
            {
                s[j]=false;
            }
        }
    }
}
int main()
{
    sang();
    int x , y;
    cin >> x >> y;
    int d=0,i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==x)break;
    }
    if(a[i+1]==y)cout << "YES";
    else cout << "NO";
}