#include<bits/stdc++.h>
using namespace std;
 
void Cout(int a[], int k)
{
	for(int i = 1; i<= k;i++)
	{
		cout<< a[i] << " "; 
	}
	cout<< endl;
}
 
void Code(int i,int a[],int n,int k)
{
	for(int j =a[i-1]+1 ;j <= n-k+i ;j++)
	{
		a[i] = j;
		if(i == k) Cout(a,k);
		else Code(i+1,a,n,k);
	}
}
 
int main()
{
	int n,k;
	cin>> n >> k;
	int a[100]={0};
	Code(1,a,n,k);	
}