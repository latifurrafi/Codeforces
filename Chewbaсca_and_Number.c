#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int i = 0;
    if (s[i] == '9')
    {
        i++;
    }
    int len = strlen(s);
    while (i < len)
    {
        if (s[i] >= '5')
            s[i] = '9' - (s[i] - '0');
        i++;
    }
    printf("%s\n", s);
    return 0;
}