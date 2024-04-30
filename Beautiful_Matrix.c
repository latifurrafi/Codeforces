#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if(a[i][j] == 1)
            {
                printf("%d \n", abs(i-3) + abs(j-3));
            }
        }
    }
    return 0;
}