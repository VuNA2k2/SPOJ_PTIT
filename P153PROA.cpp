#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin >> a >> b;
	if(a%2==0)
	{
		if(2*b<=a) cout << 1+((b-1)*2);
		else cout << (b-(a/2))*2;
	}
	else
	{
		if(2*b<=a+1) cout << 1+((b-1)*2);
		else cout << (b-(a/2)-1)*2;
	}
}