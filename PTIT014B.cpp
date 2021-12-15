#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x1 , y1 , u1 , v1 , x2 , y2, u2,v2;
        cin >> x1 >> y1 >> u1 >> v1 >> x2 >> y2 >> u2 >> v2;
        if(x2>u1||y2>v1||x1>u2||y1>v2)
        {
            cout << "0" << endl;
        }
        else 
        {
            cout << "1" << endl;
        }
        
    }
}