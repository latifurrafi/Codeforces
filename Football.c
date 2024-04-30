#include<stdio.h>
#include<string.h>
int main()
{
        char p[100];
        gets(p);
        printf(strstr(p,"1111111")||strstr(p,"0000000")?"YES":"NO");
        return 0;
}