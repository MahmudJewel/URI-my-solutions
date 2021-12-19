#include<stdio.h>
int main()
{
    int i,sum=0;
    float a,count=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&a);
        if(a>0)
        {
            sum=sum+1;
            count=count+a;
        }
    }
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",count/(float)sum);

    return 0;
}


