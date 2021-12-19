#include<stdio.h>
int main()
{
    int i,j,x,y,n,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        sum=0;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            for(j=x+1; j<y; j++)
            {

                if(j%2==1)
                    sum=sum+j;
            }
            printf("%d\n",sum);
        }
        else
        {
            for(j=y+1; j<x; j++)
            {

                if(j%2==1)
                    sum=sum+j;
            }
            printf("%d\n",sum);
        }

    }

    return 0;
}

