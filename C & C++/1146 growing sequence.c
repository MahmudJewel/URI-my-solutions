#include<stdio.h>
int main()
{
    int n,i;
    while(1)
    {
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            if(i==n)
                printf("%d\n",i);
            else
                printf("%d ",i);
        }
        if(n==0)
            break;
    }

    return 0;
}
