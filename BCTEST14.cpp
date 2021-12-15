#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a , b , v ;
    cin >> a >> b >> v;
    cout << (long long) ceil((double)(v-b)/(a-b));
}