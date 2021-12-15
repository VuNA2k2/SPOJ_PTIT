#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long y , g;
    cin >> y >> g;
    long long a = y+g, b=y/2 +2;
    long long delta = b*b-4*a;
    long long m = (b-sqrt(delta))/2 , n = (b+sqrt(delta))/2;
    cout << m << " "  << n;

}