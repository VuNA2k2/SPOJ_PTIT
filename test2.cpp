#include <stdio.h>

int main()
{
    int n, m;
    int x, y;
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d%d", &x, &y);
    for (int i = 0; i < m; i++)
    {
        int t = a[i][x - 1];
        a[i][x - 1] = a[i][y - 1];
        a[i][y - 1] = t;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}