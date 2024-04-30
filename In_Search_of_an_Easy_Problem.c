#include <stdio.h>
int main()
{
    int a[101], t, sum = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    if(sum > 0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    return 0;
}