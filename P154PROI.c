#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    while (t--)
    {
        char s[100005];
        scanf("%s",s);
        int l=0,r=strlen(s)-1,ok=1;
        while (l < r)
        {
            if(abs(s[l]-s[l+1])!=abs(s[r]-s[r-1]))
            {
                ok=0;
                break;
            }
            l++;
            r--;
        }
        if(ok == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        printf("\n");
    }
    
}