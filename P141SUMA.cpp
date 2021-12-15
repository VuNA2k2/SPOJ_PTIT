#include <bits/stdc++.h>
using namespace std;
 
int main ()
{
	long long Ax, Ay ,Bx ,By ,Cx ,Cy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
	long long CCW=(Bx-Ax)*(Cy-Ay)-(Cx-Ax)*(By-Ay);
	if (CCW==0) cout<<"TOWARDS";
	else if (CCW>0) cout<<"LEFT";
	else cout<<"RIGHT";
	return 0;
}