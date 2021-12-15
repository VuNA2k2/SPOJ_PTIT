#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,d=0;
	cin >> n >> k;
	int a[10005]={}, b[10005]={}, c[10005]={};
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	sort(b, b+n);
	for(int i=n-1; i>=n-k; i--)
	{
		c[b[i]]++;
	}
	cout << b[n-k] << endl;
	for(int i=0; i<n; i++)
	{
		if(c[a[i]]>=1 )
		{
			cout << i+1 << " ";
			d++;
			if(d==k) break;
		}
	}
}