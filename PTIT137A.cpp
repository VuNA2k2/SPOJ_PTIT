#include<bits/stdc++.h>
using namespace std;
vector<int> a(8);
void process()
{
    a[4]=a[0];
    a[5]=a[1];
    a[6]=a[2];
    a[7]=a[3];
    a[0]=abs(a[4]-a[5]);
    a[1]=abs(a[5]-a[6]);
    a[2]=abs(a[6]-a[7]);
    a[3]=abs(a[7]-a[4]);
}
int main()
{
    while(true)
    {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        int A=a[0],B=a[1],C=a[2],D=a[3];
        if(a[0]==0&&a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0])break;
        int d=0,ok=1;
        while(true)
        {
            if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0])break;
            d++;
            process();
            if(a[0]==A&&a[1]==B&&a[2]==C&&a[3]==D)
            {
                ok=0;
                break;
            }
        }
        if(ok==0)cout << "-1" << endl;
        else cout << d << endl;
    }
}