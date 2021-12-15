#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string A,B,C;
        cin >> A >> B;
        int a=A.size(),b=B.size(),s=0;
        if(a>b)
        {
            string tmp = A;
            A=B;
            B=tmp;
        }
        while(A.size()<B.size())
        {
            A='0'+A;
        }
        //cout << A <<" " << B << endl;
        for(int i=A.size()-1;i>=0;i--)
        {
            s+=(A[i]-'0')+(B[i]-'0');
            if(s>10)
            {
                s=s%10;
                C.push_back(s+'0');
                s=1;
                continue;
            }
            else
            {
                C.push_back(s+'0');
                s=0;
            }
        }
        if(s>0)C.push_back(s+'0');
        for(int i=C.size()-1;i>=0;i--)
        {
            cout << C[i];
        }
        cout << endl;
    }
}