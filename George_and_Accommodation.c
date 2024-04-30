#include<stdio.h>
int main()
{
    int t,a,b,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        
        scanf("%d %d",&a,&b);
        if(a<b-1)
        {
            flag++;
        }
    }
    printf("%d\n",flag);
    return 0;
}