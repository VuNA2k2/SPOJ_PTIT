#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin >> n;
        if(n==0)break;
        string s1 , s2 ,s;
        cin >> s1 >> s2 >> s;
        int d=0,ok=1;
        while(true)
        {
            if (ok==0) break;
			d++;
			if (d>50)
			{
				ok=0;
				break;
			}
			string Stg="";
			for (int i=0; i<n; i++)
			{
				Stg=Stg+s2[i];
				Stg=Stg+s1[i];
			}
			if (Stg==s)
			{
				ok=1;
				break;
			}
			else
			{
				for (int i=0; i<n; i++)
				{
					s1[i]=Stg[i];
					s2[i]=Stg[i+n];
				}
			}
		}
		if (ok==0) cout<<"-1"<<endl;
		else cout<<d<<endl;
    }
}