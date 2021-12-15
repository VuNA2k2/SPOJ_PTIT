#include<bits/stdc++.h>
using namespace std;
double Pow(double x , int n)
{
    if(n==1)return x;
    double s = Pow(x,n/2);
    if(n%2==0)return s*s;
    else return x*s*s; 
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double u,s=0;
        cin >> u;
        vector<double> a(n);
        for(int i = 0 ; i < n ; i ++)
        {
            cin >> a[i];
            s+=a[i];
        }
        s+=u;
        if(s>=(double)n)
        {
            printf("1.000000");
        }
        else printf("%.6lf",Pow(s/n,n));
        cout << endl;
    }
}