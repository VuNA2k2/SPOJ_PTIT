#include<bits/stdc++.h>
using namespace std;
struct data
{
    int a, x , tmp;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<data> A(2);
        int n;
        cin >> A[0].a >> A[1].a >> A[0].x >> A[1].x >>n;
        A[0].tmp = A[0].a-A[0].x;
        A[1].tmp = A[1].a-A[1].x;
        if(A[0].tmp>A[1].tmp)
        {
            data temp = A[0];
            A[0]=A[1];
            A[1]=temp;
        }
        
    }
    
}