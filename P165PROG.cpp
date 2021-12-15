#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    n/=2;
    if(n>=-9223372036854775808&&n<=9223372036854775808)cout << "Biginteger";
    if(n>=-2147483648&&n<=2147483647)cout << "int";
    if(n>=-32768&& n<=32767)cout << "short";
    if(n>=-128&&n<=127)cout << "byte";
    
}