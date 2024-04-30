#include <stdio.h>
int main()
{
    int t, a, b, n;
    scanf("%d", &t);
    while (t--)
    {
        int flag=0;
        scanf("%d %d %d", &a, &b, &n);
        while (a <=n && b <= n)
        {
            if (a < b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            flag++;
        }
        printf("%d\n", flag);
    }
    return 0;
}