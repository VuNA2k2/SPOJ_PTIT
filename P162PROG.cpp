#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long dem=0;
	while (n>0)
	{
		dem++;
		long long cs=1;
		while (1)
		{
			if (2*cs>n) break;
			cs=cs*2;
		}
		n=n-cs;
	}
    cout << dem;
}