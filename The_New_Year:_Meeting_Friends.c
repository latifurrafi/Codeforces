#include <stdio.h>
int main()
{
    int a[3], temp, i;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%d\n",(a[1]-a[0])+(a[2]-a[1]));
    return 0;
}