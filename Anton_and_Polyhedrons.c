#include <stdio.h>
#include<string.h>
int main()
{
    int t,flag=0;
    char s[20];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        switch (s[0])
        {
        case 'T':
            flag += 4;
            break;
        case 'C':
            flag += 6;
            break;
        case 'O':
            flag += 8;
            break;
        case 'D':
            flag += 12;
            break;
        case 'I':
            flag += 20;
            break;
        }
    }
    printf("%d\n",flag);
    return 0;
}