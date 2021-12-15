#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    vector<int>A(a);
    vector<int>B(b);
    for(int i=0;i<a;i++)
    {
        cin >> A[i];
    }
    for(int i=0;i<b;i++)
    {
        cin >> B[i];
    }
    for(int i=0;i<a-b;i++)
    {
        if(A[i]==B[0])
        {
            int j=1;
            while(A[i+j]==B[j])
            {
                j++;
            }
            if(j=b)
            {
                A.erase(A.begin()+i,A.begin()+i+b);
            }
        }
    }
    for(int i=0;i<A.size();i++)
    {
        cout << A[i] << " ";
    }
}