#include<bits/stdc++.h>
using namespace std;
char s[(int)1e6+5];
int main()
{
    scanf("%s",&s);
    int d=0;
    for(int i=0;i<strlen(s)-1;i++)
    {
        if(s[i]=='1')
        {
            for(int j=i+1;j<strlen(s);j++)
            {
                if(s[j]=='2')d++;
            }
        }
    }
    cout << d;
}