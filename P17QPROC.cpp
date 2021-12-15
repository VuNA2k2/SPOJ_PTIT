#include<bits/stdc++.h>
using namespace std;
vector<long long> x(1e7,0) ;
 
void sang(){
	for(long long i=1;i<=1e7;i++){
		for(long long j=i*2;j<=1e7;j+=i){
			x[j]+=i;
		}
	}
}
int main()
{
    sang();
    int a , b;
    cin >> a >> b;
    long long s=0;
    for(int i=a;i<=b;i++)
    {
        s+=abs(i-x[i]);
    }
    cout << s;
}