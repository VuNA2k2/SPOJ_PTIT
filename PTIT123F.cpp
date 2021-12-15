#include<bits/stdc++.h>
using namespace std;

void drink()
{
    int a[105]={},n,count=0;
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
            {
                if(a[j]==0)a[j]=1;
                else a[j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==0)count ++;
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        drink();
    }
    
}