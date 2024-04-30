#include <stdio.h>
int main()
{
    int a[101], t, i, j, temp, flag = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < t - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < t - 1; i += 2)
    {
        int n = a[i + 1] - a[i];
        flag += n;
    }
    printf("%d\n", flag);
    return 0;
}