#include<bits/stdc++.h>
using namespace std;
char process(char a , char b)
{
    if (a=='K' && b== 'K') return 'B';
	if (a=='B' && b== 'B') return 'G';
	if (a=='G' && b== 'G') return 'K';
	
	if (a=='K' && b =='G') return 'K';
	if (a=='B' && b =='K') return 'B';
	if (a=='G' && b =='B') return 'G';
	
	if (a =='G' && b=='K') return 'K';
	if (a =='K' && b=='B') return 'B';
	if (a =='B' && b=='G') return 'G';
}
int main()
{
    int n ;
    cin >> n;
    string s1 , s2;
    cin >> s1 >> s2;
    for(int i=0;i<n;i++)
    {
        cout << process(s1[i],s2[i]);
    }
}