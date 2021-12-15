#include<stdio.h>
#include<math.h>
int main()
{
    int r ;
    scanf("%d",&r);
    printf("%.6lf\n", (double)r*r*(atan(1)*4));
    printf("%.6lf\n", (double)r*r*2);
}