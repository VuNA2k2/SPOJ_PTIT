#include <iostream>
using namespace std;
 
int main ()
{
	long n;
	cin>>n;
	int tm[100005];
	for (long i=1; i<=n; i++)
	{
		cin>>tm[i];
	}
	if (n==1)
	{
		cout<<"1 0";
		return 0;
	}
	long d1=0, d2=0;
	for (long i=1, j=n; i<=n, j>=1;)
	{
		if (tm[i]==tm[j])
		{
			d1++;
			d2++;
			i++;
			j--;
			if (i==j)
			{
				d1++;
				break;
			}
		}
		else if (tm[i]<tm[j])
		{
			tm[j]=tm[j]-tm[i];
			d1++;
			i++;
			if (i==j)
			{
				d2++;
				break;
			}
		}
		else
		{
			tm[i]=tm[i]-tm[j];
			d2++;
			j--;
			if (j==i)
			{
				d1++;
				break;
			}
		}
	}
	cout<<d1<<" "<<d2;
	return 0;
}