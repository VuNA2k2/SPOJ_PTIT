#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1 , y1 , x2 , y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if((y1>0&&y2>0)||y1<0&&y2<0) cout << (long long)sqrt((long long)pow(x2-x1,2)+(long long)pow(-y2-y1,2)) << endl;
        else cout << (long long)sqrt((long long)pow(x2-x1,2)+(long long)pow(y2-y1,2)) << endl;
    }
}