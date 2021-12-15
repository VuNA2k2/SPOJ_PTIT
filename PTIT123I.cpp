#include<bits/stdc++.h>
using namespace std;
vector<bool> s(1e6,true);
vector<int> x;
void sang()
{
    s[0]=false;
    s[1]=false;
    for(int i=2;i*i<s.size();i++)
    {
        if(s[i]==true)
        {
            x.push_back(i);
            for(int j=i*i;j<s.size();j+=i)
            {
                s[j]=false;
            }
        }
    }
}
int main()
{
    sang();
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        else
        {
            int d=0;
            for(int i=n+1;i<=2*n;i++)
            {
                if(s[i]==true)
                {
                    d++;
                }
            }
            cout << d << endl;
        }
    }
}
