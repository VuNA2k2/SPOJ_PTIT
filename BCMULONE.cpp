#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        for (i=1;i<=(n-1)/9;i++) cout<<"123456790";
		for (i=1;i<=(n-1)%9;i++) cout<<char(48+i);
		for (i=(n-1)%9+1;i>=2;i--) cout<<char(48+i);
		for (i=1;i<=(n-1)/9;i++) cout<<"098765432";
		cout<<"1"<<endl;
    }
}