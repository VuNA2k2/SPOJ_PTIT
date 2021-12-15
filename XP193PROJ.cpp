#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b ;
    vector<int> x(3);
    cin >> a >> b >> x[0] >> x[1] >> x[2];
    if(a>b)swap(a,b);
    sort(x.begin(),x.end());
    if(x[0]<=a&&x[1]<=b&&x[2]==sqrt((long long) pow(x[0],2)+pow(x[1],2)))
    {
        cout << "YES";
    }
    else cout << "NO";
}