#include<bits/stdc++.h>
using namespace std;
vector<int> s(1e6+5,1);
void sang()
{
    s[0]=0;
    s[1]=0;
    for(int i=2;i*i<s.size();i++)
    {
        if(s[i]==1)
        {
            for(int j=i*i;j<s.size();j+=i)
            {
                s[j]=0;
            }
        }
    }
    for(int i=3;i<1e6+5;i++)
    {
        s[i]=s[i]+s[i-1];
    }
}
int main()
{
    sang();
    int t;
    cin >> t;
    while(t--)
    {
        long long l,r,d=0;
        cin >> l >> r;
        cout << s[sqrt(r)]-s[sqrt(l)-1] << endl;
    }
}