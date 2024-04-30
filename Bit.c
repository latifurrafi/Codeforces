#include <stdio.h>
int main()
{
    int i, n, flag = 0;
    printf("Hi");
    scanf("%d", &n);
    char s[150];
    while (n--)
    {
        scanf("%s", s);
        if (s[0] == '-' || s[1] == '-')
        {
            flag--;
        }
        else if (s[0] == '+' || s[1] == '+')
        {
            flag++;
        }
    }
    printf("%d\n", flag);
    return 0;
}