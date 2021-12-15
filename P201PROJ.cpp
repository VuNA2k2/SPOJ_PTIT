#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int A , B ,a ,b ,x=0 ,d=0;
        cin >> A >> B;

        for(int i=1;i<=(111-1)/2;i++)
        {
            if((111-i)%(i+1)==0)
            {
                b=(A*B-i)/(i+1);
                if(b>=1&&b<=B)d++;
            }
        }
        cout << d << endl;
    }
}