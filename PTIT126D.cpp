#include <iostream>
using namespace std;
 
int main ()
{
	int k;
	while (1)
	{
		cin>>k;
		if (k==0) break;
		int arr[50];
		for (int i=1; i<=k; i++)
		{
			cin>>arr[i];
		}
        arr[0]=0;
		for (int i=1; i<=k; i++)
		{
			if (arr[i]>arr[i-1])
            {
                for(int j=1;j<=arr[i]-arr[i-1];j++)
                {
                    cout << i << " ";
                }
            }
		}
		cout<<endl;
	}
	return 0;
}