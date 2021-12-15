#include<bits/stdc++.h>
using namespace std;
vector<bool> s(1e7+5,true);
vector<int> x(1e7+5,0);
void sang()
{
    s[0]=false;
    s[1]=false;
    x[0]=0;
    x[1]=0;
    for(int i=2;i<s.size();i++)
    {
        if(s[i]==true)
        {
            for(int j=i;j<s.size();j+=i)
            {
                s[j]=false;
                x[j]++;
            }
            s[i]=true;
        }
    }
}
int main()
{
    sang();
    int T;
    cin >> T;
    for(int t=1;t<=T;t++)
    {
        int a , b ,k ,d=0;
        cin >> a >> b >> k;
        for(int i=a;i<=b;i++)
        {
            if(x[i]==k)d++;
        }
        cout << "Case #" << t << ": " << d << endl;
    }
}
