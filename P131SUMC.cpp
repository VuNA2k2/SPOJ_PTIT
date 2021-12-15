#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c , d,maxi=0;
    cin >>a>>b>>c>>d;
    vector<float> s;
    s.push_back(abs(1.0*a/c-1.0*b/d));
    s.push_back(abs(1.0*c/d-1.0*a/b));
    s.push_back(abs(1.0*d/b-1.0*c/a));
    s.push_back(abs(1.0*b/a-1.0*d/c));
    float max = -1e7;
    for(int i=0;i<4;i++)
    {
        if(s[i]>max)
        {
            max=s[i];
            maxi=i;
        }
    }
    cout << maxi;
}