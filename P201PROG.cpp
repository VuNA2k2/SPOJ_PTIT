#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float x=sqrt(5);
    cout << (float) (1/x)*(pow((1+x)/2,n)-pow((1-x)/2,n));
}
