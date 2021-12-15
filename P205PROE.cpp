#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0;
    string a , b;
    cin >> n >> a >> b;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(abs(a[i]-b[i])<=5)d+=abs(a[i]-b[i]);
            else if(a[i]>b[i])
            {
                d+=('9'-a[i]);
                d+=(b[i]-'0'+1);
            }
            else
            {
                d+=('9'-b[i]);
                d+=(a[i]-'0'+1);
            }
        }
    }
    cout << d;
}