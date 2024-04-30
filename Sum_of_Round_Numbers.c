#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        int n;   
         scanf("%d", &n);
        int a[100];
        int power = 1;
        int flag = 0;
        
        while (n > 0)
        {
            if (n % 10 > 0)
            {
                a[flag] = (n % 10) * power;
                flag++;
            }
            n /= 10;
            power *= 10;
        }
        printf("%d\n", flag);
        for (i = 0; i < flag; i++)
        {
            printf("%d\n", a[i]);
        }
    }
    return 0;
}