#include<bits/stdc++.h>
using namespace std;
struct PTIT123C
{
    int day;
    int value;
};
bool cmp(PTIT123C a , PTIT123C b)
{
    if(a.value<b.value)return true;
    if(a.value==b.value)return a.day<b.day;
    return false;
}
bool cmp1(PTIT123C a , PTIT123C b)
{
    return a.day < b.day;
}
bool cmp2(PTIT123C a , PTIT123C b)
{
    return a.day > b.day;
}
int main()
{
    int d=1;
    while(1)
    {
        int n , k1 , k2;
        cin >> n >> k1 >> k2;
        if(n==0&&k1==0&&k2==0)break;
        PTIT123C a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i].value;
            a[i].day=i+1;
        }
        sort(a,a+n,cmp);
        sort(a,a+k1,cmp1);
        sort(a+n-k2,a+n,cmp2);
        cout << "Case " << d << endl;
        for(int i=0;i<k1;i++)
        {
            cout << a[i].day << " ";
        }
        cout << endl;
        for(int i=n-k2;i<n;i++)
        {
            cout << a[i].day << " ";
        }
        cout << endl;
        d++;
    }
}