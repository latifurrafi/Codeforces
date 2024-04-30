#include<stdio.h>
int main()
{
    int t,j,i,n[101];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1; i<=t; i++)
    {
        for(j=0; j<t; j++)
        {
            if(n[j]==i)
            {
                printf("%d ",j+1);
            }
        }
    }
    printf("\n");
    return 0;
}