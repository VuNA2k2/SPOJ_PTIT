#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a,b;
void process()
{
    b[n]=b[0];
    for(int i=0;i<n;i++)
    {
        b[i]=abs(b[i]-b[i+1]);
    }
}
int main()
{
    int t=0;
    while(true)
    {
        t++;
        cin >> n;
        if(n==0) break;
        a.resize(n,0);
        b.resize(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        int d=0,ok,check=0;
        while(d<=1000)
        {
            for(int i=0;i<n-1;i++)
            {
                if(b[i]==b[i+1])
                {
                    check=1;
                }
                else
                {
                    check=0;
                    break;
                }
            }
            if(check==1)break;
            d++;
            process();
        }
        cout << "Case " << t << ": ";
        if(check==0)cout << "not attained" << endl;
        else cout << d << " iterations" << endl;
    }
}