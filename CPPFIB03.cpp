#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void fb()
{
    a.push_back(0);
    a.push_back(1);
    int f1=1,f2=1,f=0;
    while(f<=1000)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        a.push_back(f);
    }
}
int main()
{
    fb();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<a.size();j++)
            {
                if(s[i]==a[j])
                {
                    cout << s[i] << " ";
                    break;
                }
                if(a[j]>s[i])break;
            }
        }
        cout << endl;
    }
}