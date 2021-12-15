#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max = 0;
	int sum = 0;
	for (int i = 0; i < n-2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int h = j + 1; h < n; h++)
			{
				sum = a[i] + a[j] + a[h];
				if (sum > max&& sum <= m)
					max = sum;
			}
		}
	}
    cout << max ;
}