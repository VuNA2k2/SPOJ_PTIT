#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,x,x1,x2;
    cin >> a >> b >> c;
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    cout << -1;
                else
                    cout << 0;
            }
        else
        {
        	x=-c/b;
            cout << 1 << endl;
            printf("%.5lf",x);
   		}
   	}
    else
    {
        d=b*b-4*a*c;
        if (d<0)
        {
            cout << 0;
        }
        if (d==0)
    	{
    		x = -b/(2*a);
            cout << 1 << endl;
            printf("%.5lf",x);
        }
        if (d >0)
		{
			x1 = 1.0*((-b)+sqrt(d))/(2*a);
			x2 = 1.0*((-b)-sqrt(d))/(2*a);
			if (x1>x2)
			{
				swap(x1,x2);
			}
            cout << 2 << endl;
            printf("%.5lf\n%.5lf",x1,x2);
		}
    }   
    
}
	