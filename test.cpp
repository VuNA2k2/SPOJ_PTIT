#include<bits/stdc++.h>

using namespace std;

long long gt(int n)
{
	long long x=1;
	for(int i=1;i<=n;i++) x*=i;
	return x;
}
int tohop(int n)
{
	return (gt(n)/(gt(n-1)*2));
}
int main()
{
	int n;
	cin>>n;
	char a[n][n]={};
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int count,count1=0;
	for(int j=0;j<n;j++)
	{
		count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i][j]=='C') count++;
		}
		int x=tohop(count);
//		cout<<x<<" ";
		count1+=x;
	}
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='C') count++;
		}
		int x=tohop(count);
		count1+=x;
	}
	cout<<count1;
	return 0;
}