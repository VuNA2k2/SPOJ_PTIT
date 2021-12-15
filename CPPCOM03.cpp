#include<iostream>
#define MAX 20
using namespace std;
 
int n,k;
int Bool[MAX] = { 0 };
int A[MAX];
 
void xuat() 
{
    for (int i = 1; i <= k; i++)
        cout << A[i] ;
    cout << " ";
}
 
void Try(int j) 
{
    for (int i = 1; i < n; i++) 
    {
        if (!Bool[i]) 
        {
            A[j] = i;
            Bool[i] = 1;
            if (j == k)
                xuat();
            else
                Try(j + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}