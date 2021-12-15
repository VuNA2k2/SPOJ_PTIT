#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    while (t--)
    {
        char s[50],s1,s2;
        fgets(s,sizeof(s),stdin);
        int i,a[50]={};
        for(i = 0;i < strlen(s); i++)
        {
            if((s[i]>='a'&&s[i]<='c')||(s[i]>='A'&&s[i]<='C'))a[i]=2;
            if((s[i]>='d'&&s[i]<='f')||(s[i]>='D'&&s[i]<='F'))a[i]=3;
            if((s[i]>='g'&&s[i]<='i')||(s[i]>='G'&&s[i]<='I'))a[i]=4;
            if((s[i]>='j'&&s[i]<='l')||(s[i]>='J'&&s[i]<='L'))a[i]=5;
            if((s[i]>='m'&&s[i]<='o')||(s[i]>='M'&&s[i]<='O'))a[i]=6;
            if((s[i]>='p'&&s[i]<='s')||(s[i]>='P'&&s[i]<='S'))a[i]=7;
            if((s[i]>='t'&&s[i]<='v')||(s[i]>='T'&&s[i]<='V'))a[i]=8;
            if((s[i]>='w'&&s[i]<='z')||(s[i]>='W'&&s[i]<='Z'))a[i]=9; 
        }
        int l=0,r=strlen(s)-2,ok=1;
        while (l <= r)
        {
            if(a[l]!=a[r])
            {
                ok=0;
                break;
            }
            l++;
            r--;
        }
        if(ok==1)
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
