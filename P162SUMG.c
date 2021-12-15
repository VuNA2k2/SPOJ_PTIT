#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    fgets(s,sizeof(s),stdin);
    int i,d1=0,d2=0;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            d1++;
        }
        else
        {
            d2++;
        }
    }
    if(d1>=d2)
    {
        int i;
        for ( i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        int i;
        for ( i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }
    printf("%s",s);
}