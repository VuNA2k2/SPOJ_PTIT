#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=n/2 +1,b=n/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=n/2+1)
            {
                if(j<a-i+1||j>a+i-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << "D";
                }
            }
            else
            {
                if(j<=i-a||j>n-i+a)
                {
                    cout << "*";
                }
                else
                {
                    cout << "D";
                }
            }
            
        }
        cout << endl;
    }
}