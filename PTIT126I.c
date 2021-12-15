#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    scanf("%s",s1);
    scanf("%s",s2);
    int i ,j,x,y,ok=0;
    for(i = 0; i< strlen(s1);i++)
    {
        for(j = 0;j < strlen(s2);j++)
        {
            if(s1[i]==s2[j])
            {
                x=i;
                y=j;
                ok=1;
                break;
            }
        }
        if(ok==1)
        {
            break;
        }
    }
    //printf("%d %d",y,x);
    for(i=0;i<strlen(s2);i++)
    {
        for(j=0;j<strlen(s1);j++)
        {
            if(i==y)
            {
                printf("%c",s1[j]);
            }
            else
            {
                if(j==x)
                {
                    printf("%c",s2[i]);
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}