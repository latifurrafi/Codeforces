#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int flag = 1;
    int maxlenth = 1;
    for (int j = 0; j < n-1; j++)
    {
        if (a[j] < a[j + 1])
        {
            flag++;
        }
        else
        {
            flag=1;
        }
        if(flag>maxlenth)
        {
            maxlenth = flag;
        }
    }
    printf("%d\n", maxlenth);
    return 0;
}